/*******************************************************************************
  SYS PORTS Static Functions for PORTS System Service

  Company:
    Microchip Technology Inc.

  File Name:
    plib_gpio.c

  Summary:
    GPIO function implementations for the GPIO PLIB.

  Description:
    The GPIO PLIB provides a simple interface to manage peripheral
    input-output controller.

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

#include "plib_gpio.h"
#include "interrupts.h"



/* Array to store callback objects of each configured interrupt */
static volatile GPIO_PIN_CALLBACK_OBJ portPinCbObj[9];

/* Array to store number of interrupts in each PORT Channel + previous interrupt count */
static uint8_t portNumCb[10 + 1] = { 0, 2, 5, 6, 7, 8, 8, 9, 9, 9, 9, };

/******************************************************************************
  Function:
    GPIO_Initialize ( void )

  Summary:
    Initialize the GPIO library.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_Initialize ( void )
{

    /* PORTA Initialization */

    /* Change Notice Enable */
    CNCONASET = _CNCONA_ON_MASK;
    PORTA;
    IEC3SET = _IEC3_CNAIE_MASK;
    /* PORTB Initialization */
    ODCBSET = 0x2U; /* Open Drain Enable */
    LATB = 0x2U; /* Initial Latch Value */
    TRISBCLR = 0x2U; /* Direction Control */
    ANSELBCLR = 0x629U; /* Digital Mode Enable */

    /* Change Notice Enable */
    CNCONBSET = _CNCONB_ON_MASK;
    PORTB;
    IEC3SET = _IEC3_CNBIE_MASK;
    /* PORTC Initialization */
    ODCCSET = 0x10U; /* Open Drain Enable */
    LATC = 0x10U; /* Initial Latch Value */
    TRISCCLR = 0x10U; /* Direction Control */
    ANSELCCLR = 0x8U; /* Digital Mode Enable */

    /* Change Notice Enable */
    CNCONCSET = _CNCONC_ON_MASK;
    PORTC;
    IEC3SET = _IEC3_CNCIE_MASK;
    /* PORTD Initialization */
    LATD = 0x1U; /* Initial Latch Value */
    TRISDCLR = 0x8001U; /* Direction Control */
    ANSELDCLR = 0x8000U; /* Digital Mode Enable */

    /* Change Notice Enable */
    CNCONDSET = _CNCOND_ON_MASK;
    PORTD;
    IEC3SET = _IEC3_CNDIE_MASK;
    /* PORTE Initialization */
    ANSELECLR = 0x200U; /* Digital Mode Enable */

    /* Change Notice Enable */
    CNCONESET = _CNCONE_ON_MASK;
    PORTE;
    IEC3SET = _IEC3_CNEIE_MASK;
    /* PORTF Initialization */
    /* PORTG Initialization */
    ANSELGCLR = 0x8000U; /* Digital Mode Enable */

    /* Change Notice Enable */
    CNCONGSET = _CNCONG_ON_MASK;
    PORTG;
    IEC3SET = _IEC3_CNGIE_MASK;
    /* PORTH Initialization */
    LATH = 0x400U; /* Initial Latch Value */
    TRISHCLR = 0x400U; /* Direction Control */
    /* PORTJ Initialization */
    /* PORTK Initialization */

    /* Unlock system for PPS configuration */
    SYSKEY = 0x00000000U;
    SYSKEY = 0xAA996655U;
    SYSKEY = 0x556699AAU;

    CFGCONbits.IOLOCK = 0U;

    /* PPS Input Remapping */
    C2RXR = 13;

    /* PPS Output Remapping */
    RPF2R = 15;

        /* Lock back the system after PPS configuration */
    CFGCONbits.IOLOCK = 1U;

    SYSKEY = 0x00000000U;

    uint32_t i;
    /* Initialize Interrupt Pin data structures */
    portPinCbObj[2 + 0].pin = GPIO_PIN_RB3;
    
    portPinCbObj[5 + 0].pin = GPIO_PIN_RC3;
    
    portPinCbObj[8 + 0].pin = GPIO_PIN_RG15;
    
    portPinCbObj[7 + 0].pin = GPIO_PIN_RE5;
    
    portPinCbObj[6 + 0].pin = GPIO_PIN_RD1;
    
    portPinCbObj[0 + 0].pin = GPIO_PIN_RA15;
    
    portPinCbObj[0 + 1].pin = GPIO_PIN_RA14;
    
    portPinCbObj[2 + 1].pin = GPIO_PIN_RB10;
    
    portPinCbObj[2 + 2].pin = GPIO_PIN_RB9;
    
    for(i=0U; i<9U; i++)
    {
        portPinCbObj[i].callback = NULL;
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: GPIO APIs which operates on multiple pins of a port
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    uint32_t GPIO_PortRead ( GPIO_PORT port )

  Summary:
    Read all the I/O lines of the selected port.

  Description:
    This function reads the live data values on all the I/O lines of the
    selected port.  Bit values returned in each position indicate corresponding
    pin levels.
    1 = Pin is high.
    0 = Pin is low.

    This function reads the value regardless of pin configuration, whether it is
    set as as an input, driven by the GPIO Controller, or driven by a peripheral.

  Remarks:
    If the port has less than 32-bits, unimplemented pins will read as
    low (0).
    Implemented pins are Right aligned in the 32-bit return value.
*/
uint32_t GPIO_PortRead(GPIO_PORT port)
{
    return (*(volatile uint32_t *)(&PORTA + (port * 0x40U)));
}

// *****************************************************************************
/* Function:
    void GPIO_PortWrite (GPIO_PORT port, uint32_t mask, uint32_t value);

  Summary:
    Write the value on the masked I/O lines of the selected port.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PortWrite(GPIO_PORT port, uint32_t mask, uint32_t value)
{
    *(volatile uint32_t *)(&LATA + (port * 0x40U)) = (*(volatile uint32_t *)(&LATA + (port * 0x40U)) & (~mask)) | (mask & value);
}

// *****************************************************************************
/* Function:
    uint32_t GPIO_PortLatchRead ( GPIO_PORT port )

  Summary:
    Read the latched value on all the I/O lines of the selected port.

  Remarks:
    See plib_gpio.h for more details.
*/
uint32_t GPIO_PortLatchRead(GPIO_PORT port)
{
    return (*(volatile uint32_t *)(&LATA + (port * 0x40U)));
}

// *****************************************************************************
/* Function:
    void GPIO_PortSet ( GPIO_PORT port, uint32_t mask )

  Summary:
    Set the selected IO pins of a port.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PortSet(GPIO_PORT port, uint32_t mask)
{
    *(volatile uint32_t *)(&LATASET + (port * 0x40U)) = mask;
}

// *****************************************************************************
/* Function:
    void GPIO_PortClear ( GPIO_PORT port, uint32_t mask )

  Summary:
    Clear the selected IO pins of a port.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PortClear(GPIO_PORT port, uint32_t mask)
{
    *(volatile uint32_t *)(&LATACLR + (port * 0x40U)) = mask;
}

// *****************************************************************************
/* Function:
    void GPIO_PortToggle ( GPIO_PORT port, uint32_t mask )

  Summary:
    Toggles the selected IO pins of a port.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PortToggle(GPIO_PORT port, uint32_t mask)
{
    *(volatile uint32_t *)(&LATAINV + (port * 0x40U))= mask;
}

// *****************************************************************************
/* Function:
    void GPIO_PortInputEnable ( GPIO_PORT port, uint32_t mask )

  Summary:
    Enables selected IO pins of a port as input.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PortInputEnable(GPIO_PORT port, uint32_t mask)
{
    *(volatile uint32_t *)(&TRISASET + (port * 0x40U)) = mask;
}

// *****************************************************************************
/* Function:
    void GPIO_PortOutputEnable ( GPIO_PORT port, uint32_t mask )

  Summary:
    Enables selected IO pins of a port as output(s).

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PortOutputEnable(GPIO_PORT port, uint32_t mask)
{
    *(volatile uint32_t *)(&TRISACLR + (port * 0x40U)) = mask;
}

// *****************************************************************************
/* Function:
    void GPIO_PortInterruptEnable(GPIO_PORT port, uint32_t mask)

  Summary:
    Enables IO interrupt on selected IO pins of a port.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PortInterruptEnable(GPIO_PORT port, uint32_t mask)
{
    *(volatile uint32_t *)(&CNENASET + (port * 0x40U)) = mask;
}

// *****************************************************************************
/* Function:
    void GPIO_PortInterruptDisable(GPIO_PORT port, uint32_t mask)

  Summary:
    Disables IO interrupt on selected IO pins of a port.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PortInterruptDisable(GPIO_PORT port, uint32_t mask)
{
    *(volatile uint32_t *)(&CNENACLR + (port * 0x40U)) = mask;
}

// *****************************************************************************
// *****************************************************************************
// Section: GPIO APIs which operates on one pin at a time
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void GPIO_PinIntEnable(GPIO_PIN pin, GPIO_INTERRUPT_STYLE style)

  Summary:
    Enables IO interrupt of particular style on selected IO pins of a port.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PinIntEnable(GPIO_PIN pin, GPIO_INTERRUPT_STYLE style)
{
    GPIO_PORT port;
    uint32_t mask;

    port = (GPIO_PORT)(pin>>4U);
    mask =  0x1UL << (pin & 0xFU);

    if (style == GPIO_INTERRUPT_ON_MISMATCH)
    {
        *(volatile uint32_t *)(&CNENASET + (port * 0x40U)) = mask;
    }
    else if (style == GPIO_INTERRUPT_ON_RISING_EDGE)
    {
        *(volatile uint32_t *)(&CNENASET + (port * 0x40U)) = mask;
        *(volatile uint32_t *)(&CNNEACLR + (port * 0x40U)) = mask;
    }
    else if (style == GPIO_INTERRUPT_ON_FALLING_EDGE)
    {
        *(volatile uint32_t *)(&CNENACLR + (port * 0x40U)) = mask;
        *(volatile uint32_t *)(&CNNEASET + (port * 0x40U)) = mask;
    }
    else if (style == GPIO_INTERRUPT_ON_BOTH_EDGES)
    {
        *(volatile uint32_t *)(&CNENASET + (port * 0x40U)) = mask;
        *(volatile uint32_t *)(&CNNEASET + (port * 0x40U)) = mask;
    }
    else
    {
        /* Nothing to process */
    }
}

// *****************************************************************************
/* Function:
    void GPIO_PinIntDisable(GPIO_PIN pin)

  Summary:
    Disables IO interrupt on selected IO pins of a port.

  Remarks:
    See plib_gpio.h for more details.
*/
void GPIO_PinIntDisable(GPIO_PIN pin)
{
    GPIO_PORT port;
    uint32_t mask;

    port = (GPIO_PORT)(pin>>4U);
    mask =  0x1UL << (pin & 0xFU);

    *(volatile uint32_t *)(&CNENACLR + (port * 0x40U)) = mask;
    *(volatile uint32_t *)(&CNNEACLR + (port * 0x40U)) = mask;
}
// *****************************************************************************
/* Function:
    bool GPIO_PinInterruptCallbackRegister(
        GPIO_PIN pin,
        const GPIO_PIN_CALLBACK callback,
        uintptr_t context
    );

  Summary:
    Allows application to register callback for configured pin.

  Remarks:
    See plib_gpio.h for more details.
*/
bool GPIO_PinInterruptCallbackRegister(
    GPIO_PIN pin,
    const GPIO_PIN_CALLBACK callback,
    uintptr_t context
)
{
    uint8_t i;
    uint8_t portIndex;

    portIndex = (uint8_t)(pin >> 4U);

    for(i = portNumCb[portIndex]; i < portNumCb[portIndex +1]; i++)
    {
        if (portPinCbObj[i].pin == pin)
        {
            portPinCbObj[i].callback = callback;
            portPinCbObj[i].context  = context;
            return true;
        }
    }
    return false;
}

// *****************************************************************************
// *****************************************************************************
// Section: Local Function Implementation
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
/* Function:
    void CHANGE_NOTICE_A_InterruptHandler(void)

  Summary:
    Interrupt Handler for change notice interrupt for channel A.

  Remarks:
    It is an internal function called from ISR, user should not call it directly.
*/
    
void __attribute__((used)) CHANGE_NOTICE_A_InterruptHandler(void)
{
    uint8_t i;
    uint32_t status;
    GPIO_PIN pin;
    uintptr_t context;

    status  = CNSTATA;
    status &= CNENA;

    PORTA;
    IFS3CLR = _IFS3_CNAIF_MASK;

    /* Check pending events and call callback if registered */
    for(i = 0; i < 2; i++)
    {
        pin = portPinCbObj[i].pin;

        if((portPinCbObj[i].callback != NULL) && ((status & ((uint32_t)1U << (pin & 0xFU))) != 0U))
        {
            context = portPinCbObj[i].context;

            portPinCbObj[i].callback (pin, context);
        }
    }
}

// *****************************************************************************
/* Function:
    void CHANGE_NOTICE_B_InterruptHandler(void)

  Summary:
    Interrupt Handler for change notice interrupt for channel B.

  Remarks:
    It is an internal function called from ISR, user should not call it directly.
*/
    
void __attribute__((used)) CHANGE_NOTICE_B_InterruptHandler(void)
{
    uint8_t i;
    uint32_t status;
    GPIO_PIN pin;
    uintptr_t context;

    status  = CNSTATB;
    status &= CNENB;

    PORTB;
    IFS3CLR = _IFS3_CNBIF_MASK;

    /* Check pending events and call callback if registered */
    for(i = 2; i < 5; i++)
    {
        pin = portPinCbObj[i].pin;

        if((portPinCbObj[i].callback != NULL) && ((status & ((uint32_t)1U << (pin & 0xFU))) != 0U))
        {
            context = portPinCbObj[i].context;

            portPinCbObj[i].callback (pin, context);
        }
    }
}

// *****************************************************************************
/* Function:
    void CHANGE_NOTICE_C_InterruptHandler(void)

  Summary:
    Interrupt Handler for change notice interrupt for channel C.

  Remarks:
    It is an internal function called from ISR, user should not call it directly.
*/
    
void __attribute__((used)) CHANGE_NOTICE_C_InterruptHandler(void)
{
    uint8_t i;
    uint32_t status;
    GPIO_PIN pin;
    uintptr_t context;

    status  = CNSTATC;
    status &= CNENC;

    PORTC;
    IFS3CLR = _IFS3_CNCIF_MASK;

    /* Check pending events and call callback if registered */
    for(i = 5; i < 6; i++)
    {
        pin = portPinCbObj[i].pin;

        if((portPinCbObj[i].callback != NULL) && ((status & ((uint32_t)1U << (pin & 0xFU))) != 0U))
        {
            context = portPinCbObj[i].context;

            portPinCbObj[i].callback (pin, context);
        }
    }
}

// *****************************************************************************
/* Function:
    void CHANGE_NOTICE_D_InterruptHandler(void)

  Summary:
    Interrupt Handler for change notice interrupt for channel D.

  Remarks:
    It is an internal function called from ISR, user should not call it directly.
*/
    
void __attribute__((used)) CHANGE_NOTICE_D_InterruptHandler(void)
{
    uint8_t i;
    uint32_t status;
    GPIO_PIN pin;
    uintptr_t context;

    status  = CNSTATD;
    status &= CNEND;

    PORTD;
    IFS3CLR = _IFS3_CNDIF_MASK;

    /* Check pending events and call callback if registered */
    for(i = 6; i < 7; i++)
    {
        pin = portPinCbObj[i].pin;

        if((portPinCbObj[i].callback != NULL) && ((status & ((uint32_t)1U << (pin & 0xFU))) != 0U))
        {
            context = portPinCbObj[i].context;

            portPinCbObj[i].callback (pin, context);
        }
    }
}

// *****************************************************************************
/* Function:
    void CHANGE_NOTICE_E_InterruptHandler(void)

  Summary:
    Interrupt Handler for change notice interrupt for channel E.

  Remarks:
    It is an internal function called from ISR, user should not call it directly.
*/
    
void __attribute__((used)) CHANGE_NOTICE_E_InterruptHandler(void)
{
    uint8_t i;
    uint32_t status;
    GPIO_PIN pin;
    uintptr_t context;

    status  = CNSTATE;
    status &= CNENE;

    PORTE;
    IFS3CLR = _IFS3_CNEIF_MASK;

    /* Check pending events and call callback if registered */
    for(i = 7; i < 8; i++)
    {
        pin = portPinCbObj[i].pin;

        if((portPinCbObj[i].callback != NULL) && ((status & ((uint32_t)1U << (pin & 0xFU))) != 0U))
        {
            context = portPinCbObj[i].context;

            portPinCbObj[i].callback (pin, context);
        }
    }
}

// *****************************************************************************
/* Function:
    void CHANGE_NOTICE_G_InterruptHandler(void)

  Summary:
    Interrupt Handler for change notice interrupt for channel G.

  Remarks:
    It is an internal function called from ISR, user should not call it directly.
*/
    
void __attribute__((used)) CHANGE_NOTICE_G_InterruptHandler(void)
{
    uint8_t i;
    uint32_t status;
    GPIO_PIN pin;
    uintptr_t context;

    status  = CNSTATG;
    status &= CNENG;

    PORTG;
    IFS3CLR = _IFS3_CNGIF_MASK;

    /* Check pending events and call callback if registered */
    for(i = 8; i < 9; i++)
    {
        pin = portPinCbObj[i].pin;

        if((portPinCbObj[i].callback != NULL) && ((status & ((uint32_t)1U << (pin & 0xFU))) != 0U))
        {
            context = portPinCbObj[i].context;

            portPinCbObj[i].callback (pin, context);
        }
    }
}


/*******************************************************************************
 End of File
*/