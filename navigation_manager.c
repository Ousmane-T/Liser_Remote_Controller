
#include "navigation_manager.h"
#include "flash_sst26.h"

Widget_cr widgetsScreen_SourceControl[15]; // 6 widgets pour Screen0
Widget_cr widgetsScreen_AddChannel[15]; // 15 widgets pour Screen1
Widget_cr widgetsScreen_TimeSeries[4]; // 15 widgets pour Screen1
ScreenState screenStates[5];  // 2 ScreenStates
Channel_Configuration channelConfigs[8] = {0};

int totalDuration = 0;
bool statusPanelViewConfig_1 = false;
bool statusPanelViewConfig_2 = false;

uint32_t numOfSeries = 0;
uint32_t timeOnSeriesMilli = 0;
uint32_t periodeBetweenSeriesMilli = 0;

int currentConfigIndex = 0;

void updateCursorAndFindClosestWidget(int presentScreen, int direction) {
    int closestIndex = -1;
    int minDistance = 9999;
    int currentX = screenStates[presentScreen].widgets[screenStates[presentScreen].currentWidgetIndex].x;
    int currentY = screenStates[presentScreen].widgets[screenStates[presentScreen].currentWidgetIndex].y;

    for (int i = 0; i <= screenStates[presentScreen].widgetCount; i++) {
        if (i == screenStates[presentScreen].currentWidgetIndex) continue;

        // Ignorer les widgets de type PANEL ou BUTTON qui ne sont pas visibles
        if ((screenStates[presentScreen].widgets[i].widgetType == WIDGET_TYPE_PANEL &&
             screenStates[presentScreen].widgets[i].content.panelWidget.visible == false) ||
            (screenStates[presentScreen].widgets[i].widgetType == WIDGET_TYPE_BUTTON &&
             screenStates[presentScreen].widgets[i].content.buttonWidget.visible == false)) {
            continue;
        }

        int dx = screenStates[presentScreen].widgets[i].x - currentX;
        int dy = screenStates[presentScreen].widgets[i].y - currentY;
        int distance = abs(dx) + abs(dy);

        if ((direction == 0 && dy < 0 && abs(dy) > abs(dx)) ||   // Vers le haut
            (direction == 1 && dy > 0 && abs(dy) > abs(dx)) ||   // Vers le bas
            (direction == 2 && dx < 0 && abs(dx) > abs(dy)) ||   // Vers la gauche
            (direction == 3 && dx > 0 && abs(dx) > abs(dy))) {   // Vers la droite

            if (distance < minDistance) {
                minDistance = distance;
                closestIndex = i;
            }
        }
    }

    // Mettre à jour l'index du widget le plus proche
    if (closestIndex != -1) {
        screenStates[presentScreen].currentWidgetIndex = closestIndex;
    }

    // Obtenir la position et la taille du widget sélectionné pour ajuster le curseur
    int widgetX = screenStates[presentScreen].widgets[screenStates[presentScreen].currentWidgetIndex].x;
    int widgetY = screenStates[presentScreen].widgets[screenStates[presentScreen].currentWidgetIndex].y;
    int widgetWidth = screenStates[presentScreen].widgets[screenStates[presentScreen].currentWidgetIndex].width;
    int widgetHeight = screenStates[presentScreen].widgets[screenStates[presentScreen].currentWidgetIndex].height;

    int cursorWidth = widgetWidth + 6;
    int cursorHeight = widgetHeight + 6;

    // Ajuster le curseur en fonction de l'écran actif
    if (presentScreen == SourceControl) {
        SourceControl_RectangleWidget_0->fn->setSize(SourceControl_RectangleWidget_0, cursorWidth, cursorHeight);
        SourceControl_RectangleWidget_0->fn->setPosition(SourceControl_RectangleWidget_0, widgetX - 3, widgetY - 3);
    } else if (presentScreen == AddChannel) {
        AddChannel_RectangleWidget_0->fn->setSize(AddChannel_RectangleWidget_0, cursorWidth, cursorHeight);
        AddChannel_RectangleWidget_0->fn->setPosition(AddChannel_RectangleWidget_0, widgetX - 3, widgetY - 3);
    } else if (presentScreen == TimeSeries) {
        TimeSeries_RectangleWidget_0->fn->setSize(TimeSeries_RectangleWidget_0, cursorWidth, cursorHeight);
        TimeSeries_RectangleWidget_0->fn->setPosition(TimeSeries_RectangleWidget_0, widgetX - 3, widgetY - 3);
    }
}



void handleAction(uint32_t currentScreen, int action) {
    switch (screenStates[currentScreen].currentState) {
        case STATE_INIT:
            break;
        case STATE_NAVIGATION:
            if (action == RIGHT || action == LEFT || action == UP || action == DOWN) {
                updateCursorAndFindClosestWidget(currentScreen, action);
            }
            if (action == CONFIRM) {
                screenStates[currentScreen].currentState = STATE_SELECTION;
            } else if (action == BACK) {
                screenStates[currentScreen].currentState = STATE_INIT;
                legato_showScreen(screenID_SourceControl);
            }
            break;

        case STATE_SELECTION:
            switch (screenStates[currentScreen].widgets[screenStates[currentScreen].currentWidgetIndex].widgetType) {
                case WIDGET_TYPE_PANEL:
                    if(screenStates[currentScreen].currentWidgetIndex == PANEL_START_DELAY || screenStates[currentScreen].currentWidgetIndex == PANEL_DELAY_SEQ){
                        handleTimePanelWidgetAction(currentScreen, action);
                    } 
                    else{
                        handlePanelWidgetAction(currentScreen, action);
                    }
                    
                    break;

                case WIDGET_TYPE_LISTWHEEL:
                    handleListWidgetAction(currentScreen, action);
                    break;

                case WIDGET_TYPE_BUTTON:
                    break;

                default:
                    break;
            }
            break;

        default:
            break;
    }
}

void handleListWidgetAction(uint32_t currentScreen, int action) {
    
    Widget_cr* currentWidget = &screenStates[currentScreen].widgets[screenStates[currentScreen].currentWidgetIndex];
    leListWidget* listWidget = currentWidget->content.labelListWidget.listWidget;
    int itemCount = listWidget->fn->getItemCount(listWidget);
    
    switch (action) {
        case UP:
            if (currentWidget->content.labelListWidget.selectedIndex > 0) {
                currentWidget->content.labelListWidget.selectedIndex--;
            }
            break;
        case DOWN:
            if (currentWidget->content.labelListWidget.selectedIndex < itemCount - 1) {
                currentWidget->content.labelListWidget.selectedIndex++;
            }
            break;
        case CONFIRM:
            currentWidget->content.labelListWidget.list_state = CONFIRM_SELECTION_LIST;
            break;
        case BACK:
            currentWidget->content.labelListWidget.list_state = CONFIRM_SELECTION_LIST;
            break;
    }
}

void processListWidgetSelection(Widget_cr* curentWidget, leListWidget* listWidget, leLabelWidget* labelWidget) {
    uint32_t currentScreen = legato_getCurrentScreen();
    int selectedIndex = listWidget->fn->getFirstSelectedItem(listWidget);
    leString* selectedString = listWidget->fn->getItemString(listWidget, selectedIndex);
    labelWidget->fn->setString(labelWidget, selectedString);

    switch(screenStates[currentScreen].currentWidgetIndex) {
        case LISTWIDGET_CHANNEL:
            break;

        case LISTWIDGET_MODE:
            if(curentWidget->content.labelListWidget.selectedIndex == MODE_SQUARE_SEQ){

                AddChannel_PanelWidget_1->fn->setVisible(AddChannel_PanelWidget_1, LE_TRUE);
                
                screenStates[AddChannel].widgets[PANEL_START_DELAY].content.panelWidget.visible = true;
                screenStates[AddChannel].widgets[PANEL_FREQUENCY].content.panelWidget.visible   = true;
                screenStates[AddChannel].widgets[PANEL_TIME_ON].content.panelWidget.visible     = true;
                screenStates[AddChannel].widgets[PANEL_PULSE_SEQ].content.panelWidget.visible   = true;
                screenStates[AddChannel].widgets[PANEL_NUM_SEQ].content.panelWidget.visible     = true;
                screenStates[AddChannel].widgets[PANEL_DELAY_SEQ].content.panelWidget.visible   = true;
            }
            else{
                AddChannel_PanelWidget_1->fn->setVisible(AddChannel_PanelWidget_1, LE_FALSE);
                
                screenStates[AddChannel].widgets[PANEL_START_DELAY].content.panelWidget.visible = false;
                screenStates[AddChannel].widgets[PANEL_FREQUENCY].content.panelWidget.visible   = false;
                screenStates[AddChannel].widgets[PANEL_TIME_ON].content.panelWidget.visible     = false;
                screenStates[AddChannel].widgets[PANEL_PULSE_SEQ].content.panelWidget.visible   = false;
                screenStates[AddChannel].widgets[PANEL_NUM_SEQ].content.panelWidget.visible     = false;
                screenStates[AddChannel].widgets[PANEL_DELAY_SEQ].content.panelWidget.visible   = false;
            }
            break;

        case LISTWIDGET_CURRENT_MODE:
            break;

        case LISTWIDGET_TRIGGER:
            break;

        default:
            break;
    }
}

void EventListWidget() {
    uint32_t curentScreen = legato_getCurrentScreen();
    Widget_cr* curentWidget = &screenStates[curentScreen].widgets[screenStates[curentScreen].currentWidgetIndex];
    leLabelWidget* curentLabelWidget = curentWidget->content.labelListWidget.labelWidget;
    leListWidget*  curentListWidget  = curentWidget->content.labelListWidget.listWidget;
    List_Navigation_Step stateList   = curentWidget->content.labelListWidget.list_state;
    int curentSelectedItem = curentWidget->content.labelListWidget.selectedIndex;

    switch (stateList) {
        case INIT_LIST:
            curentLabelWidget->fn->setVisible(curentLabelWidget, LE_FALSE);
            curentListWidget->fn->setVisible(curentListWidget, LE_TRUE);
            curentWidget->content.labelListWidget.list_state = SCROLL_LIST;
            break;

        case SCROLL_LIST:
            curentListWidget->fn->setItemSelected(curentListWidget, curentSelectedItem, LE_TRUE);
            break;

        case CONFIRM_SELECTION_LIST:
            curentLabelWidget->fn->setVisible(curentLabelWidget, LE_TRUE);
            curentListWidget->fn->setVisible(curentListWidget, LE_FALSE);
            curentWidget->content.labelListWidget.list_state = INIT_LIST;
            screenStates[curentScreen].currentState = STATE_NAVIGATION;
            
            processListWidgetSelection(curentWidget, curentListWidget, curentLabelWidget);
            
            break;

        default:
            break;
    }
}

void displayTimeInTextField(leTextFieldWidget* textField, uint32_t milliseconds, bool showDaysFormat)
{
    // Variables pour stocker les unités de temps
    uint32_t days = 0, hours = 0, minutes = 0, seconds = 0, milli = 0;
    char buffer[20];  // Buffer pour stocker la chaîne formatée

    // Format d'affichage : avec ou sans jours
    if (showDaysFormat) {
        // Format avec jours: d:hh:mm:ss
        seconds = milliseconds / 1000;
        days = seconds / (24 * 3600);
        seconds = seconds % (24 * 3600);
        hours = seconds / 3600;
        seconds %= 3600;
        minutes = seconds / 60;
        seconds %= 60;

        snprintf(buffer, sizeof(buffer), "%u:%02u:%02u:%02u", days, hours, minutes, seconds);
    } else {
        // Format sans jours: hh:mm:ss:ms
        hours = (milliseconds / (1000 * 3600)) % 24;
        minutes = (milliseconds / (1000 * 60)) % 60;
        seconds = (milliseconds / 1000) % 60;
        milli = milliseconds % 1000;

        snprintf(buffer, sizeof(buffer), "%02u:%02u:%02u:%03u", hours, minutes, seconds, milli);
    }

    // Initialiser et assigner la chaîne dynamique
    leDynamicString myString;
    leDynamicString_Constructor(&myString);
    myString.fn->setFromCStr(&myString, buffer);
    textField->fn->setString(textField, (leString*)&myString);

    // Libérer la mémoire de la chaîne dynamique
    myString.fn->destructor(&myString);
}




void processPanelWidgetSelection(uint32_t currentScreen, Widget_cr* curentWidget, leWidget* panelWidget){
    if(currentScreen == SourceControl){
        
    }
    else if(currentScreen == TimeSeries){
        
        switch(screenStates[currentScreen].currentWidgetIndex){
            case PANEL_NUM_SERIES:
                numOfSeries = calculateTotalValue(screenStates[TimeSeries].widgets[PANEL_NUM_SERIES].content.panelWidget.textFieldValues, 5);
                break;
            case PANEL_TIME_ON_SERIES:
                timeOnSeriesMilli = calculateTimeInMilliseconds(screenStates[TimeSeries].widgets[PANEL_TIME_ON_SERIES].content.panelWidget.textFieldValues, false);
                break;
            case PANEL_PERIOD_BET_SEQ_SERIES:
                periodeBetweenSeriesMilli = calculateTimeInMilliseconds(screenStates[TimeSeries].widgets[PANEL_PERIOD_BET_SEQ_SERIES].content.panelWidget.textFieldValues, false);
                break;
            default: 
                break;
        }
        
        totalDuration = numOfSeries * timeOnSeriesMilli + (numOfSeries - 1) * periodeBetweenSeriesMilli;
        displayTimeInTextField(TimeSeries_TextFieldWidget_0, totalDuration, true);
    
    }
        
       
}

void EventPanelWidget() {
    uint32_t currentScreen = legato_getCurrentScreen();
    Widget_cr* currentWidget = &screenStates[currentScreen].widgets[screenStates[currentScreen].currentWidgetIndex];
    int currentIndex = currentWidget->content.panelWidget.currentTextField;
    leWidget* panelWidget_select = currentWidget->content.panelWidget.panelWidget;
    Panel_Navigation_Step statePanel = currentWidget->content.panelWidget.panel_state;

    // Utiliser previous_TextField pour garder en mémoire le champ de texte précédent
    static leTextFieldWidget* previous_TextField = NULL;
    leTextFieldWidget* curent_TextField = (leTextFieldWidget*)_leWidget_GetChildAtIndex((leWidget*)panelWidget_select, currentIndex);

    switch(statePanel) {
        case INIT_PANEL:
            if (curent_TextField != NULL) {
                curent_TextField->fn->setScheme(curent_TextField, &textField_blue_background);
                panelWidget_select->fn->setScheme(panelWidget_select, &panel_blue_background);
            }
            currentWidget->content.panelWidget.panel_state = NAVIG_PANEL;
            break;

        case NAVIG_PANEL:
            if (previous_TextField != NULL) {
                previous_TextField->fn->setScheme(previous_TextField, &BlackBackground);
            }
            if (curent_TextField != NULL) {
                curent_TextField->fn->setScheme(curent_TextField, &textField_blue_background);
                updateTextField(curent_TextField, currentWidget->content.panelWidget.textFieldValues[currentIndex]);
            }
            previous_TextField = curent_TextField;
            break;

        case CONFIRM_VALUE_PANEL:
            panelWidget_select->fn->setScheme(panelWidget_select, &BlackBackground);
            if (curent_TextField != NULL) {
                curent_TextField->fn->setScheme(curent_TextField, &texfield);
            }
            previous_TextField = NULL;
            currentWidget->content.panelWidget.panel_state = INIT_PANEL;
            
            processPanelWidgetSelection(currentScreen, currentWidget, currentWidget->content.panelWidget.panelWidget);
            
            screenStates[currentScreen].currentState = STATE_NAVIGATION;
            

            
            break;

        default:
            break;
    }
}

void EventCheckBoxWidget() {
    uint32_t curentScreen = legato_getCurrentScreen();
    Widget_cr* curentWidget = &screenStates[curentScreen].widgets[screenStates[curentScreen].currentWidgetIndex];
    leCheckBoxWidget* checkBoxWidget = curentWidget->content.checkBoxWidget.checkBoxWidget;
    
    bool state_checkbox = checkBoxWidget->fn->getChecked(checkBoxWidget);
    
    if (state_checkbox == LE_FALSE) {
        checkBoxWidget->fn->setChecked(checkBoxWidget, LE_TRUE);
        curentWidget->content.checkBoxWidget.is_checked = true;
    } else {
        checkBoxWidget->fn->setChecked(checkBoxWidget, LE_FALSE);
        curentWidget->content.checkBoxWidget.is_checked = false;
    }
        
  
    screenStates[curentScreen].currentState = STATE_NAVIGATION;
}

void updateTextField(leTextFieldWidget* textField, int value)
{
    leDynamicString myString;  
    char buffer[10];
    
    snprintf(buffer, sizeof(buffer), "%d", value);

    leDynamicString_Constructor(&myString);
    myString.fn->setFromCStr(&myString, buffer);

    textField->fn->setString(textField, (leString*)&myString);

    myString.fn->destructor(&myString);
}




void handleTimePanelWidgetAction(uint32_t currentScreen, int action) {
    Widget_cr* currentWidget = &screenStates[currentScreen].widgets[screenStates[currentScreen].currentWidgetIndex];
    
    int* textFieldValues = currentWidget->content.panelWidget.textFieldValues;  // Tableau des valeurs des champs texte
    int textFields_count = currentWidget->content.panelWidget.totalTextFields;  // Nombre total de champs de texte
    int currentIndex = currentWidget->content.panelWidget.currentTextField;     // Index du champ de texte actuel
    

    switch (action) {
        case RIGHT:
            if (currentIndex < textFields_count - 1) {
                currentWidget->content.panelWidget.currentTextField++;
            }
            break;

        case LEFT:
            if (currentIndex > 0) {
                currentWidget->content.panelWidget.currentTextField--;
            }
            break;

        case UP:
            if ((currentIndex == 0 && textFieldValues[currentIndex] < 2) ||                    // Limite 0-2 pour le premier chiffre des heures
                (currentIndex == 1 && textFieldValues[0] < 2 && textFieldValues[currentIndex] < 9) ||
                (currentIndex == 1 && textFieldValues[0] == 2 && textFieldValues[currentIndex] < 3) || // Limite 0-3 pour le second chiffre des heures si premier chiffre est 2
                (currentIndex == 2 && textFieldValues[currentIndex] < 5) ||                           // Limite 0-5 pour le premier chiffre des minutes
                (currentIndex == 4 && textFieldValues[currentIndex] < 5) ||                           // Limite 0-5 pour le premier chiffre des secondes
                ((currentIndex == 3 || currentIndex == 5 || currentIndex >= 6) && textFieldValues[currentIndex] < 9)) {  // Sans limite pour le second chiffre des minutes et secondes, ainsi que millisecondes
                textFieldValues[currentIndex]++;
            }
            break;

        case DOWN:
            if (textFieldValues[currentIndex] > 0) {
                textFieldValues[currentIndex]--;
            }
            break;

        case CONFIRM:
            currentWidget->content.panelWidget.panel_state = CONFIRM_VALUE_PANEL;
            break;

        case BACK:
            screenStates[currentScreen].currentState = STATE_NAVIGATION;
            break;
    }
}







uint32_t calculateTimeInMilliseconds(int* timeValues, bool includeMilliseconds) {
    uint32_t hours = timeValues[0] * 10 + timeValues[1];      
    uint32_t minutes = timeValues[2] * 10 + timeValues[3];     
    uint32_t seconds = timeValues[4] * 10 + timeValues[5];  
    uint32_t milliseconds = 0;

    if (includeMilliseconds) {
        milliseconds = timeValues[6] * 100 + timeValues[7] * 10 + timeValues[8]; 
    }

    uint32_t totalMilliseconds = (hours * 3600000) + (minutes * 60000) + (seconds * 1000) + milliseconds;
    return totalMilliseconds;
}


void send_configurations(){
    //int selectedIndex = AddChannel_ListWidget_0->fn->getFirstSelectedItem(AddChannel_ListWidget_0);
    
    Channel_Configuration config;
    
    config.mode = screenStates[AddChannel].widgets[LISTWIDGET_MODE].content.labelListWidget.selectedIndex;
    config.currentMode = screenStates[AddChannel].widgets[LISTWIDGET_CURRENT_MODE].content.labelListWidget.selectedIndex;
    config.triggerType = screenStates[AddChannel].widgets[LISTWIDGET_TRIGGER].content.labelListWidget.selectedIndex;
    config.ttlOutputState = screenStates[AddChannel].widgets[CHECKBOX_TTL].content.checkBoxWidget.is_checked;
    config.repeatableState = screenStates[AddChannel].widgets[CHECKBOX_REPEATABLE].content.checkBoxWidget.is_checked;

    switch(config.mode){
        case MODE_OFF:
            config.currentValue = 0;
            break;
        case MODE_CW:
        case MODE_EXT_TTL:
        case MODE_EXT_ANA:
            config.currentValue = calculateTotalValue(screenStates[AddChannel].widgets[PANEL_CURRENT_SET].content.panelWidget.textFieldValues, 3);
            break;
        case MODE_SQUARE_SEQ:
            
            config.currentValue = calculateTotalValue(screenStates[AddChannel].widgets[PANEL_CURRENT_SET].content.panelWidget.textFieldValues, 3);     
            
            config.TTLModulation.startingDelay = calculateTimeInMilliseconds(screenStates[AddChannel].widgets[PANEL_START_DELAY].content.panelWidget.textFieldValues, true);           
            config.TTLModulation.frequency = calculateTotalValue(screenStates[AddChannel].widgets[PANEL_FREQUENCY].content.panelWidget.textFieldValues, 5);           
            config.TTLModulation.timeOn = calculateTotalValue(screenStates[AddChannel].widgets[PANEL_TIME_ON].content.panelWidget.textFieldValues, 5);           
            config.TTLModulation.pulsePerSequence = calculateTotalValue(screenStates[AddChannel].widgets[PANEL_PULSE_SEQ].content.panelWidget.textFieldValues, 5);          
            config.TTLModulation.numberSequence = calculateTotalValue(screenStates[AddChannel].widgets[PANEL_NUM_SEQ].content.panelWidget.textFieldValues, 5);           
            config.TTLModulation.delayBetweenSequences = calculateTimeInMilliseconds(screenStates[AddChannel].widgets[PANEL_DELAY_SEQ].content.panelWidget.textFieldValues, true);
            
            break;
            
        default:
            break;
    
    }
    
    if (currentConfigIndex < 8) {
        channelConfigs[currentConfigIndex] = config;
        currentConfigIndex++;
    }
    
    if(currentConfigIndex == 1){
        statusPanelViewConfig_1 = true;
    }
    else if(currentConfigIndex == 2){
        statusPanelViewConfig_2 = true;
    }
    
    
 
    screenStates[AddChannel].currentState = STATE_INIT;
    
    for(int i = 0 ; i < 10000000 ; i++){}
    
    legato_showScreen(screenID_SourceControl);
    
    //legato_showScreen(screenID_SourceControl);
    
    
    
    
    
    
//    
//    liserSetChannelMode(0, selectedIndex_Mode);
//    liserSetChannelCurrentMode(0, selectedIndex_Current_Mode);
//    liserSetChannelTriggerType(0, selectedIndex_Trigger);
//    liserSetTTLOutputState(0, state_TTLOutput);
//    liserSetChannelRepeatability(0, state_REPEATABLE);
    
    
    
//    if(state_TTLOutput == 1){
//        legato_showScreen(screenID_SourceControl);
//    }
    

    //selectedIndex = selectedIndex + 0;
//    selectedIndex_Mode = selectedIndex_Mode + 0;
//    selectedIndex_Current_Mode = selectedIndex_Current_Mode + 0;
//    selectedIndex_Trigger = selectedIndex_Trigger + 0;
    
    
    
    
}

#define MAX_CONFIGS 8
#define CONFIG_SIZE 33  // Estimation du nombre d'octets nécessaires pour une configuration

uint8_t configurations[MAX_CONFIGS][CONFIG_SIZE];

void save_configuration() {
    if (currentConfigIndex > 0) {
        for (int i = 0; i < currentConfigIndex; i++) {
            int index = 0;
            Channel_Configuration config = channelConfigs[i];
            
            // Convertir chaque champ en octets et les stocker dans configurations[i]
            
            // Mode
            configurations[i][index++] = (uint8_t)config.mode;
            
            // Current Mode
            configurations[i][index++] = (uint8_t)config.currentMode;
            
            // Trigger Type
            configurations[i][index++] = (uint8_t)config.triggerType;
            
            // Current Value (4 octets)
            configurations[i][index++] = (config.currentValue >> 24) & 0xFF;
            configurations[i][index++] = (config.currentValue >> 16) & 0xFF;
            configurations[i][index++] = (config.currentValue >> 8) & 0xFF;
            configurations[i][index++] = config.currentValue & 0xFF;
            
            // TTL Output State
            configurations[i][index++] = config.ttlOutputState ? 1 : 0;
            
            // Repeatable State
            configurations[i][index++] = config.repeatableState ? 1 : 0;
            
            if(config.mode == MODE_SQUARE_SEQ){
            
            
                // TTLModulation Starting Delay (4 octets)
                configurations[i][index++] = (config.TTLModulation.startingDelay >> 24) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.startingDelay >> 16) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.startingDelay >> 8) & 0xFF;
                configurations[i][index++] = config.TTLModulation.startingDelay & 0xFF;

                // Frequency (4 octets)
                configurations[i][index++] = (config.TTLModulation.frequency >> 24) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.frequency >> 16) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.frequency >> 8) & 0xFF;
                configurations[i][index++] = config.TTLModulation.frequency & 0xFF;

                // Time On (4 octets)
                configurations[i][index++] = (config.TTLModulation.timeOn >> 24) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.timeOn >> 16) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.timeOn >> 8) & 0xFF;
                configurations[i][index++] = config.TTLModulation.timeOn & 0xFF;

                // Number Sequence (4 octets)
                configurations[i][index++] = (config.TTLModulation.numberSequence >> 24) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.numberSequence >> 16) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.numberSequence >> 8) & 0xFF;
                configurations[i][index++] = config.TTLModulation.numberSequence & 0xFF;

                // Pulse Per Sequence (4 octets)
                configurations[i][index++] = (config.TTLModulation.pulsePerSequence >> 24) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.pulsePerSequence >> 16) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.pulsePerSequence >> 8) & 0xFF;
                configurations[i][index++] = config.TTLModulation.pulsePerSequence & 0xFF;

                // Delay Between Sequences (4 octets)
                configurations[i][index++] = (config.TTLModulation.delayBetweenSequences >> 24) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.delayBetweenSequences >> 16) & 0xFF;
                configurations[i][index++] = (config.TTLModulation.delayBetweenSequences >> 8) & 0xFF;
                configurations[i][index++] = config.TTLModulation.delayBetweenSequences & 0xFF;
            }
        }
        
        // Ici appeler la fonction de saveConfiguration dans la memoire , en passant le nombre de configuration aussi dans le parametres alors
        sst26Data.writeState = SST26_STATES_WRITE_INIT;
        while(sst26Data.writeState != SST26_STATES_WRITE_IDLE){
            SST26_SaveConfig(configurations, 2);
        }
        
        printf("ggsfgsdf");
        
    }
}


void load_configuration() {
    
    int configCount = 2;
    sst26Data.readState = SST26_STATES_READ_MEMORY;
    while(sst26Data.readState != SST26_STATES_READ_IDLE){
            SST26_LoadConfig(rdata);
    }
    
    statusPanelViewConfig_1 = false;
    statusPanelViewConfig_2 = false;
    currentConfigIndex = configCount;
    for (int i = 0; i < configCount; i++) {
        if(i == 0){
            statusPanelViewConfig_1 = true;
        }
        else if(i == 1){
            statusPanelViewConfig_2 = true;
        }
        int index = 0;

        // Mode
        channelConfigs[i].mode = rdata[i][index++];
        
        // Current Mode
        channelConfigs[i].currentMode = rdata[i][index++];
        
        // Trigger Type
        channelConfigs[i].triggerType = rdata[i][index++];

        // Current Value (4 octets)
        uint8_t byte1 = rdata[i][index++];
        uint8_t byte2 = rdata[i][index++];
        uint8_t byte3 = rdata[i][index++];
        uint8_t byte4 = rdata[i][index++];
        channelConfigs[i].currentValue = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

        // TTL Output State
        channelConfigs[i].ttlOutputState = rdata[i][index++] ? true : false;
        
        // Repeatable State
        channelConfigs[i].repeatableState = rdata[i][index++] ? true : false;

        // Vérifie si le mode est MODE_SQUARE_SEQ pour lire les champs de modulation TTL
        if (channelConfigs[i].mode == MODE_SQUARE_SEQ) {
            // TTLModulation Starting Delay (4 octets)
            byte1 = rdata[i][index++];
            byte2 = rdata[i][index++];
            byte3 = rdata[i][index++];
            byte4 = rdata[i][index++];
            channelConfigs[i].TTLModulation.startingDelay = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

            // Frequency (4 octets)
            byte1 = rdata[i][index++];
            byte2 = rdata[i][index++];
            byte3 = rdata[i][index++];
            byte4 = rdata[i][index++];
            channelConfigs[i].TTLModulation.frequency = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

            // Time On (4 octets)
            byte1 = rdata[i][index++];
            byte2 = rdata[i][index++];
            byte3 = rdata[i][index++];
            byte4 = rdata[i][index++];
            channelConfigs[i].TTLModulation.timeOn = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

            // Number Sequence (4 octets)
            byte1 = rdata[i][index++];
            byte2 = rdata[i][index++];
            byte3 = rdata[i][index++];
            byte4 = rdata[i][index++];
            channelConfigs[i].TTLModulation.numberSequence = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

            // Pulse Per Sequence (4 octets)
            byte1 = rdata[i][index++];
            byte2 = rdata[i][index++];
            byte3 = rdata[i][index++];
            byte4 = rdata[i][index++];
            channelConfigs[i].TTLModulation.pulsePerSequence = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

            // Delay Between Sequences (4 octets)
            byte1 = rdata[i][index++];
            byte2 = rdata[i][index++];
            byte3 = rdata[i][index++];
            byte4 = rdata[i][index++];
            channelConfigs[i].TTLModulation.delayBetweenSequences = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;
        }
    }
}






void handlePanelWidgetAction(uint32_t currentScreen, int action) {
    Widget_cr* currentWidget = &screenStates[currentScreen].widgets[screenStates[currentScreen].currentWidgetIndex];
    
    
    int textFields_count = currentWidget->content.panelWidget.totalTextFields;
    
    int currentValue = calculateTotalValue(currentWidget->content.panelWidget.textFieldValues, textFields_count);

    
    int maxValue = 120000000;
    
//    switch(currentWidget->widgetID.id_screen1){
//        case PANEL_FREQUENCY:
//            maxValue = 10000;
//            break;
//        case PANEL_PULSE_SEQ:
//            maxValue = 65535;
//            break;
//        case PANEL_NUM_SEQ:
//            maxValue = 65536;
//            break;
//        case PANEL_TIME_ON:
//            maxValue = 100000;
//            break;
//        default:
//            break;
//    }
    
    
    
    switch (action) {
        case RIGHT:
            if(currentWidget->content.panelWidget.currentTextField < textFields_count - 1){
                currentWidget->content.panelWidget.currentTextField++;
            }
            
            break;
        case LEFT:
            if(currentWidget->content.panelWidget.currentTextField > 0)
            currentWidget->content.panelWidget.currentTextField--;
            break;
        case UP:
            if (currentWidget->content.panelWidget.textFieldValues[currentWidget->content.panelWidget.currentTextField] < 9) {
                currentWidget->content.panelWidget.textFieldValues[currentWidget->content.panelWidget.currentTextField]++;
            } else {
                currentWidget->content.panelWidget.textFieldValues[currentWidget->content.panelWidget.currentTextField] = 0;
            }
            currentValue = calculateTotalValue(currentWidget->content.panelWidget.textFieldValues, textFields_count);
            if (currentValue > maxValue) {
                if (currentWidget->content.panelWidget.textFieldValues[currentWidget->content.panelWidget.currentTextField] == 0) {
                    currentWidget->content.panelWidget.textFieldValues[currentWidget->content.panelWidget.currentTextField] = 9;
                } else {
                    currentWidget->content.panelWidget.textFieldValues[currentWidget->content.panelWidget.currentTextField]--;
                }
            }
            break;
        case DOWN:
            if (currentWidget->content.panelWidget.textFieldValues[currentWidget->content.panelWidget.currentTextField] > 0) {
                currentWidget->content.panelWidget.textFieldValues[currentWidget->content.panelWidget.currentTextField]--;
            }
            break;
        case CONFIRM:
            currentWidget->content.panelWidget.panel_state = CONFIRM_VALUE_PANEL;
            break;
        case BACK:
            screenStates[currentScreen].currentState = STATE_NAVIGATION;
            break;
    }
}
int counter_time_series = 0;


uint32_t counterCycle = 0;
bool timeSeriesStarted = false;

bool flagStartCycle = false;
bool flagStopCycle = false;
int totalElapsedTime = 0;
void TIMER5_InterruptSvcRoutine(){
    counter_time_series++;
    totalElapsedTime++;
    
        if(counter_time_series == timeOnSeriesMilli && flagStartCycle == true){
            // ici envoyer la commande stop to ALL
            //legato_showScreen(screenID_TimeSeries);
            flagStartCycle = false;
            flagStopCycle = true;
            counter_time_series = 0;
            counterCycle++;

        }
        else if(counterCycle != numOfSeries){
             if(counter_time_series == periodeBetweenSeriesMilli && flagStopCycle == true){
                //envoyer start to ALL
                flagStopCycle = false;
                flagStartCycle = true;
                counter_time_series = 0;

            }
        
        }
        
    
    

}



void timeSeriesLaunch(){
   
    if(timeSeriesStarted == false){
        TMR5_Start();
        timeSeriesStarted = true;
        flagStartCycle = true;
        //envoyer start to ALL
        //legato_showScreen(screenID_SourceControl);
        
        
        
    }
    
    //displayTimeInTextField(TimeSeries_TextFieldWidget_0, 400000);
    if(timeSeriesStarted == true){
        
        int progressPercentage = (int)((float)totalElapsedTime / totalDuration * 100);
        displayTimeInTextField(TimeSeries_TextFieldWidget_1, totalElapsedTime, true);
        TimeSeries_ProgressBarWidget_0->fn->setValue(TimeSeries_ProgressBarWidget_0, progressPercentage);
    }
    
    


}

int calculateTotalValue(int* textFieldValues, int textFieldCount) {
    int totalValue = 0;
    for (int i = 0; i < textFieldCount; i++) {
        totalValue = totalValue * 10 + textFieldValues[i];
    }
    return totalValue;
}

void moveUp(){
    if (UP_GPIO_Get() == 0) {
        uint32_t currentScreen = legato_getCurrentScreen();
        handleAction(currentScreen, UP);
    }
}

void moveDown() {
    if (DOWN_GPIO_Get() == 0) {
        uint32_t currentScreen = legato_getCurrentScreen();
        handleAction(currentScreen, DOWN);
    }
}

void moveRight(){
    if (RIGHT_GPIO_Get() == 0) {
        uint32_t currentScreen = legato_getCurrentScreen();  // Récupère l'écran actuel
        handleAction(currentScreen, RIGHT);  // Appelle la fonction avec l'action correspondante
    }
}

void moveLeft() {
    if (LEFT_GPIO_Get() == 0) {  // Bouton gauche pressé
        uint32_t currentScreen = legato_getCurrentScreen();  // Récupère l'écran actuel
        handleAction(currentScreen, LEFT);  // Appelle la fonction pour déplacer à gauche
    }
}

void confirmSelection() {
    if (CONFIRM_GPIO_Get() == 0) {
        uint32_t currentScreen = legato_getCurrentScreen();
        handleAction(currentScreen, CONFIRM);
    }
}

void moveBack() {
    if (BACK_GPIO_Get() == 0) {
        uint32_t currentScreen = legato_getCurrentScreen();
        handleAction(currentScreen, BACK);
    }
}



