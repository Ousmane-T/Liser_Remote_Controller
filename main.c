/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes
#include "app.h"
#include "can_com.h"
#include "flash_sst26.h"
#include "drv_sst26.h"
//#include "config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.h"
//#include "config/default/gfx/legato/generated/screen/le_gen_screen_Screen1.h"

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************
void test(){
    GPIO_RD15_Toggle();
}
int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
//    initializeWidgets();
//    
    GPIO_PinInterruptCallbackRegister(LEFT_GPIO_PIN, moveLeft, (uintptr_t)NULL);
    GPIO_PinInterruptEnable(LEFT_GPIO_PIN);
    
    GPIO_PinInterruptCallbackRegister(RIGHT_GPIO_PIN, moveRight, (uintptr_t)NULL);
    GPIO_PinInterruptEnable(RIGHT_GPIO_PIN);
    
    GPIO_PinInterruptCallbackRegister(UP_GPIO_PIN, moveUp, (uintptr_t)NULL);
    GPIO_PinInterruptEnable(UP_GPIO_PIN);
    
    GPIO_PinInterruptCallbackRegister(DOWN_GPIO_PIN, moveDown, (uintptr_t)NULL);
    GPIO_PinInterruptEnable(DOWN_GPIO_PIN);
    
    GPIO_PinInterruptCallbackRegister(BACK_GPIO_PIN, moveBack, (uintptr_t)NULL);
    GPIO_PinInterruptEnable(BACK_GPIO_PIN);
    
    GPIO_PinInterruptCallbackRegister(CONFIRM_GPIO_PIN, confirmSelection, (uintptr_t)NULL);
    GPIO_PinInterruptEnable(CONFIRM_GPIO_PIN);
    
    TMR5_CallbackRegister(TIMER5_InterruptSvcRoutine, (uintptr_t) NULL);
    TMR6_CallbackRegister(TIMER6_InterruptSvcRoutine, (uintptr_t) NULL);
    TMR7_CallbackRegister(TIMER7_InterruptSvcRoutine, (uintptr_t) NULL);
    
    //initializeWidgets();
    
    screenStates[SourceControl] = (ScreenState){widgetsScreen_SourceControl, sizeof(widgetsScreen_SourceControl) / sizeof(widgetsScreen_SourceControl[0]), 0, STATE_INIT};
    screenStates[AddChannel] = (ScreenState){widgetsScreen_AddChannel, sizeof(widgetsScreen_AddChannel) / sizeof(widgetsScreen_AddChannel[0]), 0, STATE_INIT};
    screenStates[TimeSeries] = (ScreenState){widgetsScreen_TimeSeries, sizeof(widgetsScreen_TimeSeries) / sizeof(widgetsScreen_TimeSeries[0]), 0, STATE_INIT};
    
    
    FLASH_SST26_Initialize();
//    
//    GPIO_RC1_Set();
    //TMR5_Start();
//    
    
    //liserSetChannelCurrentMode(0,0);
    
    while ( true )
    {
        /* Maintain state machines of all polled MPLAB Harmony modules. */
        SYS_Tasks ( );
        
        
        //liserSetChannelCurrentMode(0,0);
        
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

