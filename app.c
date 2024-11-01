/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "app.h"
#include "configuration.h"
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

APP_DATA appData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************


/* TODO:  Add any necessary local functions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;



    /* TODO: Initialize your application's state machine and other
     * parameters.
     */
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            bool appInitialized = true;


            if (appInitialized)
            {

                appData.state = APP_STATE_SERVICE_TASKS;
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {

            break;
        }

        /* TODO: implement your application state machine.*/


        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}

uint8_t test_config[2][33] = {
    {   
        // Configuration 1
        0x01,                   // mode
        0x02,                   // currentMode
        0x03,                   // triggerType
        0x00, 0x00, 0x03, 0xE8, // currentValue (1000 en 4 octets)
        0x01,                   // ttlOutputState (1 = true)
        0x00,                   // repeatableState (0 = false)
        
        // TTLModulation structure
        0x00, 0x00, 0x01, 0xF4, // startingDelay (500 en 4 octets)
        0x00, 0x00, 0x00, 0x64, // frequency (100 en 4 octets)
        0x00, 0x00, 0x00, 0x32, // timeOn (50 en 4 octets)
        0x00, 0x00, 0x00, 0x0A, // numberSequence (10 en 4 octets)
        0x00, 0x00, 0x00, 0x05, // pulsePerSequence (5 en 4 octets)
        0x00, 0x00, 0x01, 0x00  // delayBetweenSequences (256 en 4 octets)
    },
    {   
        // Configuration 2
        0x02,                   // mode
        0x03,                   // currentMode
        0x04,                   // triggerType
        0x00, 0x00, 0x07, 0xD0, // currentValue (2000 en 4 octets)
        0x00,                   // ttlOutputState (0 = false)
        0x01,                   // repeatableState (1 = true)
        
        // TTLModulation structure
        0x00, 0x00, 0x00, 0xC8, // startingDelay (200 en 4 octets)
        0x00, 0x00, 0x01, 0x2C, // frequency (300 en 4 octets)
        0x00, 0x00, 0x00, 0x3C, // timeOn (60 en 4 octets)
        0x00, 0x00, 0x00, 0x0F, // numberSequence (15 en 4 octets)
        0x00, 0x00, 0x00, 0x06, // pulsePerSequence (6 en 4 octets)
        0x00, 0x00, 0x00, 0x80  // delayBetweenSequences (128 en 4 octets)
    }
};



void initButtonWidget(Widget_cr* widget, leButtonWidget* buttonWidget, bool visible_status) {
    int x = buttonWidget->fn->getX(buttonWidget);
    int y = buttonWidget->fn->getY(buttonWidget);
    leWidget* parentWidget = buttonWidget->widget.parent;
    if (parentWidget != NULL){
        x += parentWidget->fn->getX(parentWidget);
        y += parentWidget->fn->getY(parentWidget);
    }
    
    

    
    widget->x = x;
    widget->y = y;
    widget->width = buttonWidget->fn->getWidth(buttonWidget);
    widget->height = buttonWidget->fn->getHeight(buttonWidget);
    widget->widgetType = WIDGET_TYPE_BUTTON;
    widget->content.buttonWidget.visible = visible_status;
    
}

void initListWidget(Widget_cr* widget, leLabelWidget* labelWidget, leListWidget* listWidget) {
    widget->x = labelWidget->fn->getX(labelWidget);
    widget->y = labelWidget->fn->getY(labelWidget);
    widget->width = labelWidget->fn->getWidth(labelWidget);
    widget->height = labelWidget->fn->getHeight(labelWidget);
    widget->widgetType = WIDGET_TYPE_LISTWHEEL;
    
    widget->content.labelListWidget.labelWidget = labelWidget;
    widget->content.labelListWidget.listWidget =  listWidget;
    widget->content.labelListWidget.list_state =  INIT_LIST;
    widget->content.labelListWidget.selectedIndex = 0;        

    leString* firstItemString = listWidget->fn->getItemString(listWidget, 0);
    labelWidget->fn->setString(labelWidget, firstItemString);
}

void initPanelWidget(Widget_cr* widget, leWidget* panelWidget, int textFieldCount, bool visible_status) {
    
    int x = panelWidget->fn->getX(panelWidget);
    int y = panelWidget->fn->getY(panelWidget);
    
 

    leWidget* rootWidget = panelWidget->parent;
    if (rootWidget != NULL) {
        x += rootWidget->fn->getX(rootWidget);
        y += rootWidget->fn->getY(rootWidget);
    }
 
    widget->x = x;
    widget->y = y;
    widget->width = panelWidget->fn->getWidth(panelWidget);
    widget->height = panelWidget->fn->getHeight(panelWidget);
    widget->widgetType = WIDGET_TYPE_PANEL;
    

    widget->content.panelWidget = (typeof(widget->content.panelWidget)){
        .currentTextField = 0,
        .panelWidget = panelWidget,
        .panel_state = INIT_PANEL,
        .visible = visible_status,
        .totalTextFields = textFieldCount,
          
    };
    
    for (int i = 0; i < 10; i++) {
        widget->content.panelWidget.textFieldValues[i] = 0;
    }

}

void initCheckboxWidget(Widget_cr* widget, leCheckBoxWidget* checkBoxWidget) {
    widget->x = checkBoxWidget->fn->getX(checkBoxWidget);
    widget->y = checkBoxWidget->fn->getY(checkBoxWidget);
    widget->width = checkBoxWidget->fn->getWidth(checkBoxWidget);
    widget->height = checkBoxWidget->fn->getHeight(checkBoxWidget);
    widget->widgetType = WIDGET_TYPE_CHECKBOX;
    
    widget->content.checkBoxWidget = (typeof(widget->content.checkBoxWidget)){
        .checkBoxWidget = checkBoxWidget,
        .is_checked = false
    };
}

// Fonction pour mettre à jour un TextField avec une valeur uint32_t formatée
void updateTextFieldWithUint32(leTextFieldWidget* textField, uint32_t value)
{
    leDynamicString myString;  
    char buffer[20];  // Taille suffisante pour représenter les grandes valeurs de uint32_t

    // Convertir la valeur uint32_t en chaîne de caractères
    snprintf(buffer, sizeof(buffer), "%u", value);

    // Initialiser la chaîne dynamique
    leDynamicString_Constructor(&myString);

    // Affecter la chaîne convertie au `leDynamicString`
    myString.fn->setFromCStr(&myString, buffer);

    // Mettre à jour la chaîne dans le widget TextField
    textField->fn->setString(textField, (leString*)&myString);

    // Libérer la mémoire de la chaîne dynamique
    myString.fn->destructor(&myString);
}




void init_widgetScreenSourceControl() {
    initButtonWidget(&widgetsScreen_SourceControl[BUTTON_START_STOP], SourceControl_ButtonWidget_0, true);
    initButtonWidget(&widgetsScreen_SourceControl[BUTTON_TIME_SERIES], SourceControl_ButtonWidget_1, true);
    initButtonWidget(&widgetsScreen_SourceControl[BUTTON_ADD_CHANNEL], SourceControl_ButtonWidget_2, true);
    initButtonWidget(&widgetsScreen_SourceControl[BUTTON_DOWNLOAD], SourceControl_ButtonWidget_3, true);
    initButtonWidget(&widgetsScreen_SourceControl[BUTTON_UPLOAD], SourceControl_ButtonWidget_4, true);
    initButtonWidget(&widgetsScreen_SourceControl[BUTTON_GENERAL_CONFIG], SourceControl_ButtonWidget_5, true);
    
    initButtonWidget(&widgetsScreen_SourceControl[BUTTON_START_STOP_CONFIG_1], SourceControl_ButtonWidget_8, false);
    initButtonWidget(&widgetsScreen_SourceControl[BUTTON_START_STOP_CONFIG_2], SourceControl_ButtonWidget_9, false);
    if(statusPanelViewConfig_1 == true){
        updateTextFieldWithUint32(SourceControl_TextFieldWidget_1, channelConfigs[0].currentValue);
        screenStates[SourceControl].widgets[BUTTON_START_STOP_CONFIG_1].content.buttonWidget.visible = true;
    }
    if(statusPanelViewConfig_2 == true){
        updateTextFieldWithUint32(SourceControl_TextFieldWidget_2, channelConfigs[1].currentValue);
        screenStates[SourceControl].widgets[BUTTON_START_STOP_CONFIG_2].content.buttonWidget.visible = true;
    }
    
}



void init_widgetScreenAddChannel() {
    // Initialize List Widgets
    initListWidget(&widgetsScreen_AddChannel[LISTWIDGET_CHANNEL], AddChannel_LabelWidget_channel, AddChannel_ListWidget_0);
    initListWidget(&widgetsScreen_AddChannel[LISTWIDGET_MODE], AddChannel_LabelWidget_mode, AddChannel_ListWidget_1);
    initListWidget(&widgetsScreen_AddChannel[LISTWIDGET_CURRENT_MODE], AddChannel_LabelWidget_current, AddChannel_ListWidget_2);
    initListWidget(&widgetsScreen_AddChannel[LISTWIDGET_TRIGGER], AddChannel_LabelWidget_trigger, AddChannel_ListWidget_3);

    initPanelWidget(&widgetsScreen_AddChannel[PANEL_CURRENT_SET], AddChannel_PanelWidget_current, 3, true);
    initPanelWidget(&widgetsScreen_AddChannel[PANEL_START_DELAY], AddChannel_PanelWidget_0_4, 9, false);
    initPanelWidget(&widgetsScreen_AddChannel[PANEL_FREQUENCY], AddChannel_PanelWidget_0_0, 5, false);
    initPanelWidget(&widgetsScreen_AddChannel[PANEL_TIME_ON], AddChannel_PanelWidget_0_1, 5, false);
    initPanelWidget(&widgetsScreen_AddChannel[PANEL_PULSE_SEQ], AddChannel_PanelWidget_0_2, 5, false);
    initPanelWidget(&widgetsScreen_AddChannel[PANEL_NUM_SEQ], AddChannel_PanelWidget_0_3, 5, false);
    initPanelWidget(&widgetsScreen_AddChannel[PANEL_DELAY_SEQ], AddChannel_PanelWidget_0, 9, false);
    
    initCheckboxWidget(&widgetsScreen_AddChannel[CHECKBOX_TTL], AddChannel_CheckBoxWidget_0);
    initCheckboxWidget(&widgetsScreen_AddChannel[CHECKBOX_REPEATABLE], AddChannel_CheckBoxWidget_1);
    
    initButtonWidget(&widgetsScreen_AddChannel[BUTTON_ADD], AddChannel_HomeButton, true);
}

void init_widgetScreenTimeSeries() {
    // Initialize List Widgets
    
    initPanelWidget(&widgetsScreen_TimeSeries[PANEL_NUM_SERIES], TimeSeries_NumOfSerisPanel, 5, true);
    initPanelWidget(&widgetsScreen_TimeSeries[PANEL_TIME_ON_SERIES], TimeSeries_PanelWidget_0_4_0, 6, true);
    initPanelWidget(&widgetsScreen_TimeSeries[PANEL_PERIOD_BET_SEQ_SERIES], TimeSeries_PanelWidget_0_4_1, 6, true);
    
    initButtonWidget(&widgetsScreen_TimeSeries[BUTTON_LAUNCH], TimeSeries_ButtonWidget_1, true);
    
}
int time_elapsed_config_1 = 0;
int time_elapsed_config_2 = 0;
void TIMER6_InterruptSvcRoutine(){
    time_elapsed_config_1++;
}

void TIMER7_InterruptSvcRoutine(){
    time_elapsed_config_2++;
    //displayTimeInTextField(SourceControl_TextFieldWidget_3, time_elapsed_config_2, false);
}

void navigation_SourceControl(){
    switch(screenStates[SourceControl].currentState){
        case STATE_INIT:
            
            SourceControl_RectangleWidget_0->fn->setSize(SourceControl_RectangleWidget_0, screenStates[SourceControl].widgets[screenStates[SourceControl].currentWidgetIndex].width + 6, screenStates[SourceControl].widgets[screenStates[SourceControl].currentWidgetIndex].height + 6);
            SourceControl_RectangleWidget_0->fn->setPosition(SourceControl_RectangleWidget_0, screenStates[SourceControl].widgets[screenStates[SourceControl].currentWidgetIndex].x - 3, screenStates[SourceControl].widgets[screenStates[SourceControl].currentWidgetIndex].y - 3);

            screenStates[SourceControl].currentState = STATE_NAVIGATION;
            
            break;
        case STATE_NAVIGATION:
            break;
        case STATE_SELECTION:
            switch (screenStates[SourceControl].currentWidgetIndex) {
                case BUTTON_START_STOP:
                    // 
                    break;
                case BUTTON_TIME_SERIES:
                    legato_showScreen(screenID_TimeSeries);
                    screenStates[SourceControl].currentState = STATE_INIT;
                    break;
                case BUTTON_ADD_CHANNEL:
                    legato_showScreen(screenID_AddChannel);
                    screenStates[SourceControl].currentState = STATE_INIT;
                    break;
                case BUTTON_DOWNLOAD:
                    //legato_showScreen(screenID_LoadConfig);
                    //statusPanelViewConfig_1 = false;
                    //statusPanelViewConfig_2 = false;
                    
                    //legato_showScreen(screenID_LoadConfig);
                    load_configuration(test_config, 2);
                    legato_showScreen(screenID_SourceControl);
                    screenStates[SourceControl].currentState = STATE_INIT;
                    break;
                case BUTTON_UPLOAD:
                    save_configuration();
                    //init_widgetScreenSourceControl();
                    screenStates[SourceControl].currentState = STATE_NAVIGATION;
                    break;
                case BUTTON_GENERAL_CONFIG:
                    legato_showScreen(screenID_GeneralSettings);
                    screenStates[SourceControl].currentState = STATE_INIT;
                    break;
                case BUTTON_START_STOP_CONFIG_1:
                    TMR6_Start();
                    //Ici envoyer la commande de start ou stop
                    screenStates[SourceControl].currentState = STATE_NAVIGATION;
                    break;
                case BUTTON_START_STOP_CONFIG_2:
                    // Ici envoyer la commande de start ou stop
                    TMR7_Start();
                    screenStates[SourceControl].currentState = STATE_NAVIGATION;
                    break;
                default:
                    break;
            }
        default:
            break;
    
    }
    
    displayTimeInTextField(SourceControl_TextFieldWidget_0, time_elapsed_config_1, false);
    displayTimeInTextField(SourceControl_TextFieldWidget_3, time_elapsed_config_2, false);

}

void navigation_AddChannel(){

    switch(screenStates[AddChannel].currentState){
        case STATE_INIT:
            AddChannel_RectangleWidget_0->fn->setSize(AddChannel_RectangleWidget_0, screenStates[AddChannel].widgets[screenStates[AddChannel].currentWidgetIndex].width + 6, screenStates[AddChannel].widgets[screenStates[AddChannel].currentWidgetIndex].height + 6);
            AddChannel_RectangleWidget_0->fn->setPosition(AddChannel_RectangleWidget_0, screenStates[AddChannel].widgets[screenStates[AddChannel].currentWidgetIndex].x - 3, screenStates[AddChannel].widgets[screenStates[AddChannel].currentWidgetIndex].y - 3);
            
            
            screenStates[AddChannel].currentState = STATE_NAVIGATION;
            
            break;
        case STATE_NAVIGATION:
            break;
        case STATE_SELECTION:
            switch (screenStates[AddChannel].currentWidgetIndex) {
                case LISTWIDGET_CHANNEL:
                    EventListWidget();
                    break;
                case LISTWIDGET_MODE:
                    EventListWidget();
                    break;
                case LISTWIDGET_CURRENT_MODE:
                    EventListWidget();
                    break;
                case PANEL_CURRENT_SET:
                    EventPanelWidget();
                    break;
                case LISTWIDGET_TRIGGER:
                    EventListWidget();
                    break;
                    
                case PANEL_START_DELAY:
                    EventPanelWidget();
                    break;
                case CHECKBOX_TTL:
                    EventCheckBoxWidget();   
                    break;
                    
                case PANEL_FREQUENCY:
                    EventPanelWidget();
                    break;
                case PANEL_TIME_ON:
                    EventPanelWidget();
                    break;
                case PANEL_PULSE_SEQ:
                    EventPanelWidget();
                    break;
                    
                case PANEL_NUM_SEQ:
                    EventPanelWidget();
                    break;
                    
                case PANEL_DELAY_SEQ:
                    EventPanelWidget();
                    break;
                case BUTTON_ADD:
                    send_configurations();
                    break;
                case CHECKBOX_REPEATABLE:
                    EventCheckBoxWidget();         
                    break;
                    
                default:
                    break;
            }
            
        default:
            break;
    
    }
}
 

void navigation_TimeSeries(){
    switch(screenStates[TimeSeries].currentState){
        case STATE_INIT:
            TimeSeries_RectangleWidget_0->fn->setSize(TimeSeries_RectangleWidget_0, screenStates[TimeSeries].widgets[screenStates[TimeSeries].currentWidgetIndex].width + 6, screenStates[TimeSeries].widgets[screenStates[TimeSeries].currentWidgetIndex].height + 6);
            TimeSeries_RectangleWidget_0->fn->setPosition(TimeSeries_RectangleWidget_0, screenStates[TimeSeries].widgets[screenStates[TimeSeries].currentWidgetIndex].x - 3, screenStates[TimeSeries].widgets[screenStates[TimeSeries].currentWidgetIndex].y - 3);
            
            screenStates[TimeSeries].currentState = STATE_NAVIGATION;
            break;
        case STATE_NAVIGATION:
            break;
        case STATE_SELECTION:
            switch (screenStates[TimeSeries].currentWidgetIndex) {
                case PANEL_NUM_SERIES:
                    EventPanelWidget();
                    break;
                case PANEL_TIME_ON_SERIES:
                    EventPanelWidget();
                    break;
                case PANEL_PERIOD_BET_SEQ_SERIES:
                    EventPanelWidget();
                    break;
                case BUTTON_LAUNCH:
                    timeSeriesLaunch();
                    break;
                
                default:
                    break;
            }
        default:
            break;
    
    }

}



/*******************************************************************************
 End of File
 */
