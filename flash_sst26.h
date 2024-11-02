/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.h

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

#ifndef _FLASH_SST26_H    /* Guard against multiple inclusion */
#define _FLASH_SST26_H
#include "drv_sst26.h"
#define MAX_CONFIGS 8
#define MAX_SIZE 33
/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

typedef enum
{
    /* The app mounts the disk */
    SST26_STATES_WRITE_INIT = 0,

    /* Erase Flash */
    SST26_STATES_ERASE_FLASH,

    /* Erase Wait */
    SST26_STATES_ERASE_WAIT,

    /* Write to Memory */
    SST26_STATES_WRITE_MEMORY,

    /* Write Wait */
    SST26_STATES_WRITE_WAIT,
            
    SST26_STATES_WRITE_IDLE,
} SST26_WRITE_STATE;

typedef enum
{ 
    /*READ NUMBER OF CONFIG AND SIZE*/
    SST26_STATES_READ_NB_CONFIG_SIZE,
            
    /* Read From Memory */
    SST26_STATES_READ_MEMORY,

    /* Read Wait */
    SST26_STATES_READ_WAIT,

    /* Find the configurations */
    SST26_STATES_READ_DECODE,
            
    /* Read done */
    SST26_STATES_READ_IDLE,   
}SST26_READ_STATE;
    


typedef struct
{
    /* Application's current state */
    SST26_READ_STATE readState;
    
    SST26_WRITE_STATE writeState;

    /* Application transfer status */
    volatile bool xfer_done;

    /* Jedec-ID*/
    uint32_t jedec_id;

    /* Read Buffer */
    uint8_t readBuffer[READ_BUFFER_SIZE] CACHE_ALIGN;

    /* Write Buffer*/
    uint8_t writeBuffer[WRITE_BUFFER_SIZE] CACHE_ALIGN;
} SST26_FLASH;

extern SST26_FLASH CACHE_ALIGN sst26Data;
extern uint8_t rdata[MAX_CONFIGS][MAX_SIZE];

void FLASH_SST26_Initialize();
//Remplacer addresse par le numero de la page
void SST26_SaveConfig(uint8_t data2D[][MAX_SIZE], uint8_t nbConfig);
void SST26_LoadConfig(uint8_t rdata[MAX_CONFIGS][MAX_SIZE]);

#ifdef __cplusplus
extern "C" {
#endif

    

#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
