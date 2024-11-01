/* 
 * File:   navigation_manager.h
 * Author: hamza
 *
 * Created on October 13, 2024, 3:47 PM
 */

#ifndef NAVIGATION_MANAGER_H
#define	NAVIGATION_MANAGER_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include "configuration.h"
#include "config/default/peripheral/gpio/plib_gpio.h"
#include "config/default/gfx/legato/generated/le_gen_init.h"
#include "common.h"
#include "can_com.h"
#include "config/default/peripheral/tmr/plib_tmr5.h"

    
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define CONFIRM 4
#define BACK 5

typedef enum {
    INIT_LIST,
    SCROLL_LIST,
    CONFIRM_SELECTION_LIST        
} List_Navigation_Step;

typedef enum {
    INIT_PANEL,
    NAVIG_PANEL,
    CONFIRM_VALUE_PANEL        
} Panel_Navigation_Step;

typedef enum {
    AddChannel,        
    GeneralSettings,  
    LoadConfig,
    SourceControl,
    TimeSeries        
} Screen_ID;

typedef enum {
    STATE_INIT,        
    STATE_NAVIGATION,  
    STATE_SELECTION   
} State;

typedef enum {
    BUTTON_START_STOP,
    BUTTON_TIME_SERIES,
    BUTTON_ADD_CHANNEL,
    BUTTON_DOWNLOAD,
    BUTTON_UPLOAD,
    BUTTON_GENERAL_CONFIG,
    BUTTON_START_STOP_CONFIG_1,
    BUTTON_START_STOP_CONFIG_2
} WidgetID_Screen0;

typedef enum {
    LISTWIDGET_CHANNEL,
    LISTWIDGET_MODE,
    LISTWIDGET_CURRENT_MODE,
    PANEL_CURRENT_SET,
    LISTWIDGET_TRIGGER,
    CHECKBOX_TTL,
    CHECKBOX_REPEATABLE,
    PANEL_START_DELAY,
    PANEL_FREQUENCY,
    PANEL_TIME_ON,
    PANEL_PULSE_SEQ,
    PANEL_NUM_SEQ,
    PANEL_DELAY_SEQ,
    BUTTON_ADD        
            
} WidgetID_Screen1;

typedef enum {
    PANEL_NUM_SERIES,
    PANEL_TIME_ON_SERIES,
    PANEL_PERIOD_BET_SEQ_SERIES,
    BUTTON_LAUNCH,
            
} WidgetID_Screen2;


typedef enum {
    WIDGET_TYPE_BUTTON,
    WIDGET_TYPE_PANEL,
    WIDGET_TYPE_LISTWHEEL,
    WIDGET_TYPE_CHECKBOX
} WidgetType;

typedef struct {
    int mode;
    int currentMode;
    int triggerType;
    uint32_t currentValue;
    bool ttlOutputState;
    bool repeatableState;
    
    struct {
        uint32_t startingDelay;
        uint32_t frequency;
        uint32_t timeOn;
        uint32_t numberSequence;
        uint32_t pulsePerSequence;
        uint32_t delayBetweenSequences;
        
    } TTLModulation;
    
} Channel_Configuration;

typedef struct {
    int x;
    int y;
    int width;
    int height;
    WidgetType widgetType;
    
    union {
        struct {
            int currentTextField;
            int totalTextFields;
            int textFieldValues[10];
            leWidget* panelWidget;
            Panel_Navigation_Step panel_state;
            bool visible;
            uint32_t maxValue;
        } panelWidget;

        struct {
            bool visible;
        } buttonWidget;
        
        struct {
            leLabelWidget* labelWidget;  
            leListWidget* listWidget;
            List_Navigation_Step list_state;
            int selectedIndex;
        } labelListWidget;
        
        struct {
            leCheckBoxWidget* checkBoxWidget;
            bool is_checked;
           
        } checkBoxWidget;

    } content;
} Widget_cr;


typedef struct {
    Widget_cr *widgets;        
    int widgetCount;         
    int currentWidgetIndex; 
    State currentState;
} ScreenState;




extern int currentConfigIndex;
extern Channel_Configuration channelConfigs[8];
extern Widget_cr widgetsScreen_SourceControl[15]; // 6 widgets pour Screen0
extern Widget_cr widgetsScreen_AddChannel[15];
extern Widget_cr widgetsScreen_TimeSeries[4];
extern ScreenState screenStates[5];  // 2 ScreenStates
extern bool statusPanelViewConfig_1;
extern bool statusPanelViewConfig_2;
extern uint8_t configurations[8][33];

void moveLeft();
void moveRight();
void confirmSelection();
void moveUp();
void moveDown();
void moveBack();

void handleAction(uint32_t currentScreen, int action);

void handleListWidgetAction(uint32_t currentScreen, int action);
void handlePanelWidgetAction(uint32_t currentScreen, int action);

void processListWidgetSelection(Widget_cr* curentWidget, leListWidget* listWidget, leLabelWidget* labelWidget);
void processPanelWidgetSelection(uint32_t currentScreen, Widget_cr* curentWidget, leWidget* panelWidget);

void updateCursorAndFindClosestWidget(int presentScreen, int direction);
int calculateTotalValue(int* textFieldValues, int textFieldCount);
void updateTextField(leTextFieldWidget* textField, int value);
uint32_t calculateTimeInMilliseconds(int* timeValues, bool includeMilliseconds);
void displayTimeInTextField(leTextFieldWidget* textField, uint32_t milliseconds, bool showDaysFormat);

void handleTimePanelWidgetAction(uint32_t currentScreen, int action);
void displayTimeInTextField22(leTextFieldWidget* textField, uint32_t milliseconds, bool showDaysFormat);
void save_configuration();

void EventListWidget();
void EventPanelWidget();
void EventCheckBoxWidget();

void TIMER5_InterruptSvcRoutine();
void TIMER6_InterruptSvcRoutine();
void TIMER7_InterruptSvcRoutine();
void load_configuration(uint8_t configurations[][33], int configCount);

void send_configurations();
void timeSeriesLaunch();


#ifdef	__cplusplus
}
#endif

#endif	/* NAVIGATION_MANAGER_H */

