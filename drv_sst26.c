/*******************************************************************************
  Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for SQI PLIB Demonstration

  Description:
    This file contains the source code for SQI PLIB Demonstration.
    It implements the logic of Erasing, reading and writing to SQI Flash memory

 *******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
//DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "drv_sst26.h"
#include "flash_sst26.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

//APP_DATA CACHE_ALIGN appData;

//static uint32_t write_index = 0;
//static uint32_t sector_index = 0;

static sqi_dma_desc_t CACHE_ALIGN sqiCmdDesc[CMD_DESC_NUMBER];
static sqi_dma_desc_t CACHE_ALIGN sqiBufDesc[BUFF_DESC_NUMBER];

static uint8_t CACHE_ALIGN sqi_cmd_jedec[2];
static uint8_t CACHE_ALIGN sqi_cmd_eqio;
static uint8_t CACHE_ALIGN sqi_cmd_rsten;
static uint8_t CACHE_ALIGN sqi_cmd_rst;
static uint8_t CACHE_ALIGN sqi_cmd_wren;
static uint8_t CACHE_ALIGN sqi_cmd_rdsr[2];
static uint8_t CACHE_ALIGN sqi_cmd_ce;
static uint8_t CACHE_ALIGN sqi_cmd_se[4];
static uint8_t CACHE_ALIGN sqi_cmd_be[4];
static uint8_t CACHE_ALIGN sqi_cmd_pp[4];
static uint8_t CACHE_ALIGN sqi_cmd_hsr[7];
static uint8_t CACHE_ALIGN sqi_cmd_ULBPR;
static uint8_t CACHE_ALIGN sqi_cmd_dummy[6];

static uint32_t maxPowerOfTwo(uint32_t num)
{
    uint32_t ret_val = 0;
    uint32_t number = 0;

    for (number = num; number >= 1U; number--)
    {
        // If number is a power of 2
        if ((number & (number - 1U)) == 0U)
        {
            ret_val = number;
            break;
        }
    }
    return ret_val;
}

static void APP_EventHandler(uintptr_t context)
{
    //appData.xfer_done = true;
    sst26Data.xfer_done = true;
}

void APP_ResetFlash(void)
{
//    appData.xfer_done = false;
    sst26Data.xfer_done = false;

    sqiCmdDesc[0].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(1) | SQI_BDCTRL_PKTINTEN |
                                    SQI_BDCTRL_LASTPKT | SQI_BDCTRL_LASTBD |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DEASSERT |
                                    SQI_BDCTRL_DESCEN);

    sqiCmdDesc[0].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_rsten);
    sqiCmdDesc[0].bd_stat       = 0;
    sqiCmdDesc[0].bd_nxtptr     = 0x00000000;

    SQI1_DMATransfer((sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[0]));

//    while(appData.xfer_done == false);
    while(sst26Data.xfer_done == false);

//    appData.xfer_done = false;
    sst26Data.xfer_done = false;

    sqiCmdDesc[1].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(1) | SQI_BDCTRL_PKTINTEN |
                                    SQI_BDCTRL_LASTPKT | SQI_BDCTRL_LASTBD |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DEASSERT |
                                    SQI_BDCTRL_DESCEN);

    sqiCmdDesc[1].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_rst);
    sqiCmdDesc[1].bd_stat       = 0;
    sqiCmdDesc[1].bd_nxtptr     = 0x00000000;

    SQI1_DMATransfer((sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[1]));

    //while(appData.xfer_done == false);
    while(sst26Data.xfer_done == false);
}

void APP_EnableQuadIO(void)
{
//    appData.xfer_done = false;
    sst26Data.xfer_done = false;

    sqiCmdDesc[0].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(1) | SQI_BDCTRL_PKTINTEN |
                                    SQI_BDCTRL_LASTPKT | SQI_BDCTRL_LASTBD |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DEASSERT |
                                    SQI_BDCTRL_DESCEN);

    sqiCmdDesc[0].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_eqio);
    sqiCmdDesc[0].bd_stat       = 0;
    sqiCmdDesc[0].bd_nxtptr     = 0x00000000;

    SQI1_DMATransfer((sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[0]));

//    while(appData.xfer_done == false);
    while(sst26Data.xfer_done == false);
}

void APP_WriteEnable(void)
{
    sqiCmdDesc[0].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(1) | SQI_BDCTRL_MODE_QUAD_LANE |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DEASSERT |
                                    SQI_BDCTRL_DESCEN);

    sqiCmdDesc[0].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_wren);
    sqiCmdDesc[0].bd_stat       = 0;
    sqiCmdDesc[0].bd_nxtptr     = (sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[1]);
}

void APP_UnlockFlash(void)
{
    sst26Data.xfer_done = false;
//    appData.xfer_done = false;

    APP_WriteEnable();

    sqiCmdDesc[1].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(1) | SQI_BDCTRL_PKTINTEN |
                                    SQI_BDCTRL_LASTPKT | SQI_BDCTRL_LASTBD |
                                    SQI_BDCTRL_MODE_QUAD_LANE | SQI_BDCTRL_SQICS_CS1 |
                                    SQI_BDCTRL_DEASSERT | SQI_BDCTRL_DESCEN);

    sqiCmdDesc[1].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_ULBPR);
    sqiCmdDesc[1].bd_stat       = 0;
    sqiCmdDesc[1].bd_nxtptr     = 0x00000000;

    SQI1_DMATransfer((sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[0]));

//    while(appData.xfer_done == false);
     while(sst26Data.xfer_done == false);
}

void  APP_ReadJedecId( uint32_t *jedec_id)
{
    sst26Data.xfer_done = false;
//    appData.xfer_done = false;

    sqi_cmd_jedec[1] = DUMMY_BYTE;

    sqiCmdDesc[0].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(2) | SQI_BDCTRL_MODE_QUAD_LANE |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DESCEN);

    sqiCmdDesc[0].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_jedec);
    sqiCmdDesc[0].bd_stat       = 0;
    sqiCmdDesc[0].bd_nxtptr     = (sqi_dma_desc_t *)KVA_TO_PA(&sqiBufDesc[0]);

    sqiBufDesc[0].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(4) | SQI_BDCTRL_PKTINTEN |
                                    SQI_BDCTRL_LASTPKT | SQI_BDCTRL_LASTBD |
                                    SQI_BDCTRL_MODE_QUAD_LANE | SQI_BDCTRL_DIR_READ |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DEASSERT |
                                    SQI_BDCTRL_DESCEN);

    sqiBufDesc[0].bd_bufaddr    = (uint32_t *)KVA_TO_PA(jedec_id);
    sqiBufDesc[0].bd_stat       = 0;
    sqiBufDesc[0].bd_nxtptr     = 0x00000000;

    // Initialize the root buffer descriptor
    SQI1_DMATransfer((sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[0]));

//    while(appData.xfer_done == false);
     while(sst26Data.xfer_done == false);
    
}

void  APP_ReadStatus( void *rx_data, uint32_t rx_data_length )
{
    sst26Data.xfer_done = false;
    //appData.xfer_done = false;

    sqi_cmd_rdsr[1] = DUMMY_BYTE;

    sqiCmdDesc[0].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(2) | SQI_BDCTRL_MODE_QUAD_LANE |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DESCEN);

    sqiCmdDesc[0].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_rdsr);
    sqiCmdDesc[0].bd_stat       = 0;
    sqiCmdDesc[0].bd_nxtptr     = (sqi_dma_desc_t *)KVA_TO_PA(&sqiBufDesc[0]);

    sqiBufDesc[0].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(rx_data_length) | SQI_BDCTRL_PKTINTEN |
                                    SQI_BDCTRL_LASTPKT | SQI_BDCTRL_LASTBD |
                                    SQI_BDCTRL_MODE_QUAD_LANE | SQI_BDCTRL_DIR_READ |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DEASSERT |
                                    SQI_BDCTRL_DESCEN);

    sqiBufDesc[0].bd_bufaddr    = (uint32_t *)KVA_TO_PA(rx_data);
    sqiBufDesc[0].bd_stat       = 0;
    sqiBufDesc[0].bd_nxtptr     = 0x00000000;

    // Initialize the root buffer descriptor
    SQI1_DMATransfer((sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[0]));

//    while(appData.xfer_done == false);
    while(sst26Data.xfer_done == false);
}

void APP_Read( void *rx_data, uint32_t rx_data_length, uint32_t address )
{
    uint32_t pendingBytes   = rx_data_length;
    uint8_t *readBuffer     = (uint8_t *)rx_data;
    uint32_t numBytes       = 0;
    uint32_t i              = 0;

//    appData.xfer_done = false;
    sst26Data.xfer_done = false;
    
    // Construct parameters to issue read command
    sqi_cmd_hsr[1] = (0xff & (address>>16));
    sqi_cmd_hsr[2] = (0xff & (address>>8));
    sqi_cmd_hsr[3] = (0xff & (address>>0));    
    sqi_cmd_hsr[4] = 0;

    sqiCmdDesc[0].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(5) | SQI_BDCTRL_MODE_QUAD_LANE |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DESCEN);

    sqiCmdDesc[0].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_hsr);
    sqiCmdDesc[0].bd_stat       = 0;
    sqiCmdDesc[0].bd_nxtptr     = (sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[1]);  

    sqiCmdDesc[1].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(2) | SQI_BDCTRL_MODE_QUAD_LANE |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DESCEN);

    sqiCmdDesc[1].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_dummy);
    sqiCmdDesc[1].bd_stat       = 0;
    sqiCmdDesc[1].bd_nxtptr     = (sqi_dma_desc_t *)KVA_TO_PA(&sqiBufDesc[0]); 

    for (i = 0; (i < BUFF_DESC_NUMBER) && (pendingBytes > 0); i++)
    {
        if (pendingBytes > PAGE_SIZE)
        {
            numBytes = PAGE_SIZE;
        }
        else
        {
            numBytes = maxPowerOfTwo(pendingBytes);
        }

        sqiBufDesc[i].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(numBytes) | SQI_BDCTRL_PKTINTEN |
                                        SQI_BDCTRL_MODE_QUAD_LANE | SQI_BDCTRL_DIR_READ |
                                        SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DESCEN);

        sqiBufDesc[i].bd_bufaddr    = (uint32_t *)KVA_TO_PA(readBuffer);
        sqiBufDesc[i].bd_stat       = 0;
        sqiBufDesc[i].bd_nxtptr     = (sqi_dma_desc_t *)KVA_TO_PA(&sqiBufDesc[i+1]);

        pendingBytes    -= numBytes;
        readBuffer      += numBytes;
    }

    /* The last descriptor must indicate the end of the descriptor list */
    sqiBufDesc[i-1].bd_ctrl         |= (SQI_BDCTRL_LASTPKT | SQI_BDCTRL_LASTBD |
                                        SQI_BDCTRL_DEASSERT);

    sqiBufDesc[i-1].bd_nxtptr       = 0x00000000;

    // Initialize the root buffer descriptor
    SQI1_DMATransfer((sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[0]));
}

void APP_PageWrite( void *tx_data, uint32_t address )
{
//    appData.xfer_done = false;
     sst26Data.xfer_done = false;

    APP_WriteEnable();

    // Construct parameters to issue page program command
    sqi_cmd_pp[1] = (0xff & (address>>16));
    sqi_cmd_pp[2] = (0xff & (address>>8));
    sqi_cmd_pp[3] = (0xff & (address>>0));

    sqiCmdDesc[1].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(4) | SQI_BDCTRL_MODE_QUAD_LANE |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DESCEN);

    sqiCmdDesc[1].bd_bufaddr    = (uint32_t *)KVA_TO_PA(&sqi_cmd_pp);
    sqiCmdDesc[1].bd_stat       = 0;
    sqiCmdDesc[1].bd_nxtptr     = (sqi_dma_desc_t *)KVA_TO_PA(&sqiBufDesc[0]);

    sqiBufDesc[0].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(PAGE_SIZE) | SQI_BDCTRL_PKTINTEN |
                                    SQI_BDCTRL_LASTPKT | SQI_BDCTRL_LASTBD |
                                    SQI_BDCTRL_MODE_QUAD_LANE | SQI_BDCTRL_SCHECK |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DEASSERT |
                                    SQI_BDCTRL_DESCEN);

    sqiBufDesc[0].bd_bufaddr    = (uint32_t *)KVA_TO_PA(tx_data);
    sqiBufDesc[0].bd_stat       = 0;
    sqiBufDesc[0].bd_nxtptr     = 0x00000000;

    // Initialize the root buffer descriptor
    SQI1_DMATransfer((sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[0]));
}

void APP_Erase( uint8_t *instruction, uint32_t length )
{
//    appData.xfer_done = false;
     sst26Data.xfer_done = false;

    APP_WriteEnable();

    sqiCmdDesc[1].bd_ctrl       = ( SQI_BDCTRL_BUFFLEN_VAL(length) | SQI_BDCTRL_PKTINTEN |
                                    SQI_BDCTRL_LASTPKT | SQI_BDCTRL_LASTBD |
                                    SQI_BDCTRL_MODE_QUAD_LANE | SQI_BDCTRL_SCHECK |
                                    SQI_BDCTRL_SQICS_CS1 | SQI_BDCTRL_DEASSERT |
                                    SQI_BDCTRL_DESCEN);

    sqiCmdDesc[1].bd_bufaddr    = (uint32_t *)KVA_TO_PA(instruction);
    sqiCmdDesc[1].bd_stat       = 0;
    sqiCmdDesc[1].bd_nxtptr     = 0x00000000;

    SQI1_DMATransfer((sqi_dma_desc_t *)KVA_TO_PA(&sqiCmdDesc[0]));
}

void APP_SectorErase( uint32_t address )
{
    sqi_cmd_se[1] = (0xff & (address>>16));
    sqi_cmd_se[2] = (0xff & (address>>8));
    sqi_cmd_se[3] = (0xff & (address>>0));

    APP_Erase(&sqi_cmd_se[0], 4);
}

void APP_BulkErase( uint32_t address )
{
    sqi_cmd_be[1] = (0xff & (address>>16));
    sqi_cmd_be[2] = (0xff & (address>>8));
    sqi_cmd_be[3] = (0xff & (address>>0));

    APP_Erase(&sqi_cmd_be[0], 4);
}

void APP_ChipErase( void )
{
    APP_Erase(&sqi_cmd_ce, 1);
}

void SST26_Initialize(void)
{
    /* Place the App state machine in its initial state. */
//    appData.state = APP_STATE_INIT;

    sqi_cmd_jedec[0]    = SST26_CMD_QUAD_JEDEC_ID_READ;
    sqi_cmd_eqio        = SST26_CMD_ENABLE_QUAD_IO;
    sqi_cmd_rsten       = SST26_CMD_FLASH_RESET_ENABLE;
    sqi_cmd_rst         = SST26_CMD_FLASH_RESET;
    sqi_cmd_wren        = SST26_CMD_WRITE_ENABLE;
    sqi_cmd_rdsr[0]     = SST26_CMD_READ_STATUS_REG;
    sqi_cmd_ce          = SST26_CMD_CHIP_ERASE;
    sqi_cmd_be[0]       = SST26_CMD_BULK_ERASE_64K;
    sqi_cmd_se[0]       = SST26_CMD_SECTOR_ERASE;
    sqi_cmd_pp[0]       = SST26_CMD_PAGE_PROGRAM;
    sqi_cmd_hsr[0]      = SST26_CMD_HIGH_SPEED_READ;
    sqi_cmd_ULBPR       = SST26_CMD_UNPROTECT_GLOBAL;

    SQI1_RegisterCallback(APP_EventHandler, (uintptr_t)NULL);
    
//    appData.state = APP_STATE_INIT;
}
