/*******************************************************************************
  Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app.h

  Summary:
    This header file provides prototypes and definitions for the application.

  Description:
    This header file provides function prototypes and data type definitions for
    the application.  Some of these are required by the system (such as the
    "APP_Initialize" and "APP_Tasks" prototypes) and some of them are only used
    internally by the application (such as the "APP_STATES" definition).  Both
    are defined here for convenience.
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

#ifndef DRV_SST26_H
#define DRV_SST26_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdlib.h>
#include <string.h>
#include "definitions.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

#define PAGE_SIZE                  (256U)
#define SECTOR_SIZE                (4096U)

#define SECTORS_TO_EWR             (20U)

/* Erase 80KBytes (81920 Bytes) of memory */
#define ERASE_BUFFER_SIZE          (SECTOR_SIZE * SECTORS_TO_EWR)

/* For example, BUFFER_SIZE <= ERASE_BUFFER_SIZE,
 * case 1 - BUFFER_SIZE < ERASE_BUFFER_SIZE, Read and Write 81667 (81920 - 256 + 3) Bytes of memory (Default)
 * case 2 - BUFFER_SIZE = ERASE_BUFFER_SIZE, Read and Write 81920 Bytes of memory. Below macro need be defined as #define BUFFER_SIZE    ERASE_BUFFER_SIZE
 */
#define FLASH_BUFFER_SIZE                (ERASE_BUFFER_SIZE - PAGE_SIZE + 3U)

#define SIZE_GET(size, align)      (size + ((size % align)? (align - (size % align)) : 0))

#define READ_BUFFER_SIZE           SIZE_GET(FLASH_BUFFER_SIZE, CACHE_LINE_SIZE)

#define WRITE_BUFFER_SIZE          SIZE_GET(FLASH_BUFFER_SIZE, PAGE_SIZE)

#define MEM_START_ADDRESS          (0x0U)

#define SST26VF032B_JEDEC_ID       (0xBF4326BF)

#define ADD_BUFF_DESC_SIZE(x)      (((x >> 7) & 0x01) + ((x >> 6) & 0x01) + ((x >> 5) & 0x01) + ((x >> 4) & 0x01) + \
                                   ((x >> 3) & 0x01) + ((x >> 2) & 0x01) + ((x >> 1) & 0x01) + ((x) & 0x01)) 

#define BUFF_DESC_SIZE(x, y)       (((x % y) == 0) ? (x / y) : ((x / y) + ADD_BUFF_DESC_SIZE((x % y))))

#define BUFF_DESC_NUMBER           BUFF_DESC_SIZE(FLASH_BUFFER_SIZE, PAGE_SIZE)

#define CMD_DESC_NUMBER             5

#define DUMMY_BYTE                  0x0

#define SUCCESS_LED_ON              LED3_Clear
#define SUCCESS_LED_OFF             LED3_Set
#define SUCCESS_LED_TOGGLE          LED3_Toggle

#define SWITCH_LED_ON               LED1_Clear
#define SWITCH_LED_OFF              LED1_Set
#define SWITCH_LED_TOGGLE           LED1_Toggle

#define SWITCH_PRESSED              SWITCH_3_Get()
    
// *****************************************************************************
/* Application states

  Summary:
    Application states enumeration

  Description:
    This enumeration defines the valid application states.  These states
    determine the behavior of the application at various times.
*/

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    Application strings and buffers are be defined outside this structure.
 */

/* SST26 Command set

  Summary:
    Enumeration listing the SST26VF commands.

  Description:
    This enumeration defines the commands used to interact with the SST26VF
    series of devices.

  Remarks:
    None
*/


typedef enum
{
    /* Reset enable command. */
    SST26_CMD_FLASH_RESET_ENABLE = 0x66,

    /* Command to reset the flash. */
    SST26_CMD_FLASH_RESET        = 0x99,

    /* Command to Enable QUAD IO */
    SST26_CMD_ENABLE_QUAD_IO     = 0x38,

    /* Command to Reset QUAD IO */
    SST26_CMD_RESET_QUAD_IO      = 0xFF,

    /* Command to read JEDEC-ID of the flash device. */
    SST26_CMD_JEDEC_ID_READ      = 0x9F,

    /* QUAD Command to read JEDEC-ID of the flash device. */
    SST26_CMD_QUAD_JEDEC_ID_READ = 0xAF,

    /* Command to perfrom High Speed Read */
    SST26_CMD_HIGH_SPEED_READ    = 0x0B,

    /* Write enable command. */
    SST26_CMD_WRITE_ENABLE       = 0x06,

    /* Page Program command. */
    SST26_CMD_PAGE_PROGRAM       = 0x02,

    /* Command to read the Flash status register. */
    SST26_CMD_READ_STATUS_REG    = 0x05,

    /* Command to perform sector erase */
    SST26_CMD_SECTOR_ERASE       = 0x20,

    /* Command to perform Bulk erase */
    SST26_CMD_BULK_ERASE_64K     = 0xD8,

    /* Command to perform Chip erase */
    SST26_CMD_CHIP_ERASE         = 0xC7,

    /* Command to unlock the flash device. */
    SST26_CMD_UNPROTECT_GLOBAL   = 0x98

} SST26_CMD;

void APP_Read( void *rx_data, uint32_t rx_data_length, uint32_t address );
void APP_PageWrite( void *tx_data, uint32_t address );
void APP_SectorErase( uint32_t address );
void APP_ChipErase( void );
void APP_ResetFlash(void);
void APP_EnableQuadIO(void);
void APP_UnlockFlash(void);
void APP_ReadJedecId( uint32_t *jedec_id);
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
// *****************************************************************************
// *****************************************************************************
/* These routines are called by drivers when certain events occur.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Summary:
     Application initialization routine.

  Description:
    This function initializes the application.  It places the
    application in its initial state and prepares it to run so that its
    APP_Tasks function can be called.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Initialize();
    </code>

  Remarks:
    This routine must be called from the main function.
*/

void SST26_Initialize ( void );

#endif /* DRV_SST26_H */

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

/*******************************************************************************
 End of File
 */
