/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.c

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */

#include "drv_sst26.h"
#include "flash_sst26.h"

#define SECTOR_DIX (36864U) //ADRESSE DU DIXIEME SECTEUR
#define ADRESS_SECTOR_DIX (0x9000U)
#define NB_BYTES 2 
/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

static uint32_t write_index = 0;
static uint32_t sector_index = 0;

SST26_FLASH CACHE_ALIGN sst26Data;
uint8_t rdata[][MAX_SIZE];

void FLASH_SST26_Initialize()
{
    // On initialise les commandes
    SST26_Initialize();
    
    // On lance la sequence de l'initialisation de la flash
    APP_ResetFlash();
    APP_EnableQuadIO();
    APP_UnlockFlash();
    
    //On verifie qu'on est connecté en lisant le jedcId
    APP_ReadJedecId(&sst26Data.jedec_id);
    if (sst26Data.jedec_id == SST26VF032B_JEDEC_ID)
    {
        sst26Data.writeState = SST26_STATES_WRITE_INIT; // A enlever 
        sst26Data.readState = SST26_STATES_READ_IDLE; // A enlever
    }
    
    //On remplit notre buffer d'ecriture avec des dummy bytes
    memset(&sst26Data.writeBuffer[0], 0xFF, (WRITE_BUFFER_SIZE));
    memset(rdata, 0, sizeof(rdata));
}

void SST26_SaveConfig(uint8_t data2D[][MAX_SIZE], uint8_t nbConfig)
{
    uint32_t address = 0;
    uint32_t write_idx = 0;
    switch(sst26Data.writeState)
    {
        case SST26_STATES_WRITE_INIT:
        {
            //On stocke le nombre de config et la taille dans la memoire
            // On stocke au secteur 10
            sst26Data.writeBuffer[SECTOR_DIX] = nbConfig;
            sst26Data.writeBuffer[SECTOR_DIX+1] = MAX_SIZE;
            
            for(uint32_t i = 0; i < nbConfig; i++)  //Nombre ligneS
            {
                // ON REMPLIT LE BUFFER D'ECRITURE
                for (uint32_t j = 0; j < MAX_SIZE; j++) //bytes To write  == nombre de colonne de data2D 
                {
                    sst26Data.writeBuffer[j+write_idx] = data2D[i][j];
                }
                write_idx += SECTOR_SIZE;
            }
            sst26Data.writeState = SST26_STATES_ERASE_FLASH;
        }
        case SST26_STATES_ERASE_FLASH:
        {
            APP_SectorErase((address + sector_index));
            
            sst26Data.writeState = SST26_STATES_ERASE_WAIT;

            break;
        }

        case SST26_STATES_ERASE_WAIT:
        {
            if (sst26Data.xfer_done == true)
            {
                sector_index += SECTOR_SIZE;

                if (sector_index < ERASE_BUFFER_SIZE)
                {
                    sst26Data.writeState = SST26_STATES_ERASE_FLASH;
                }
                else
                {
                    sst26Data.writeState = SST26_STATES_WRITE_MEMORY;
                }
            }       
            break;
        }

        case SST26_STATES_WRITE_MEMORY:
        {
       
            APP_PageWrite((uint32_t *)&sst26Data.writeBuffer[write_index], (address + write_index));

            sst26Data.writeState = SST26_STATES_WRITE_WAIT;
            
            break;
        }

        case SST26_STATES_WRITE_WAIT:
        {
            if (sst26Data.xfer_done == true)
            {
                write_index += SECTOR_SIZE;
                if (write_index < SECTOR_SIZE*10)
                {
                    sst26Data.writeState = SST26_STATES_WRITE_MEMORY;
                }
                else
                {
                    sst26Data.readState = SST26_STATES_READ_NB_CONFIG_SIZE;
                    sst26Data.writeState = SST26_STATES_WRITE_IDLE;
                }
            }
            break;
        }
        
        case SST26_STATES_WRITE_IDLE:
        {
            break;
        }           
    }     
}

//Nombre de config et buffer de sortie
void SST26_LoadConfig(uint8_t rdata[][MAX_SIZE])
{
    static uint8_t nbConfig = 0;
    static uint8_t length = 0;
    //static uint32_t size = 0;
    switch(sst26Data.readState)
    {
        case SST26_STATES_READ_NB_CONFIG_SIZE:
        {
            //On lit le dixieme secteur
            APP_Read((uint32_t *)&sst26Data.readBuffer[SECTOR_DIX], NB_BYTES, ADRESS_SECTOR_DIX);
            
            if (sst26Data.xfer_done == true)
            {
                //On recupere les deux premiers octets
                nbConfig = sst26Data.readBuffer[SECTOR_DIX];
                length = sst26Data.readBuffer[SECTOR_DIX+1];

                //On calcule la taille des données à lire
               // size = (uint32_t)(nbConfig*SECTOR_SIZE);
                
                sst26Data.readState = SST26_STATES_READ_MEMORY;
            }
            break;      
        }
        case SST26_STATES_READ_MEMORY:
        {
            //On lit tous les secteurs concernés 
            APP_Read((uint32_t *)&sst26Data.readBuffer[0], SECTOR_SIZE*10, MEM_START_ADDRESS);

            sst26Data.readState = SST26_STATES_READ_WAIT;
            break;
        }

        case SST26_STATES_READ_WAIT:
        {      
            if (sst26Data.xfer_done == true)
            {
                sst26Data.readState = SST26_STATES_READ_DECODE;
            }
            break;
        }
        
        case SST26_STATES_READ_DECODE:
        {
            nbConfig = sst26Data.readBuffer[SECTOR_DIX];
            length = sst26Data.readBuffer[SECTOR_DIX+1];
            uint32_t readIndex = 0;
            //ON RECUPERE LES CONFIGS
            for(int i =0; i<nbConfig; i++)
            {
                for (int j=0; j<length; j++) // Nombre d'octets à lire 
                {
                    rdata[i][j] = sst26Data.readBuffer[j+readIndex];
                }
                readIndex += SECTOR_SIZE;
            }
            sst26Data.readState = SST26_STATES_READ_IDLE;        
        }
        case SST26_STATES_READ_IDLE:
        {           
            break;
        }
    }
}

/* *****************************************************************************
 End of File
 */
