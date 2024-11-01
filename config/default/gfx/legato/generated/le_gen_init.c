#include "gfx/legato/generated/le_gen_init.h"

static int32_t currentScreen;
static int32_t changingToScreen;

void legato_initializeScreenState(void)
{
    leSetStringTable(&stringTable);

    initializeStrings();

    screenInit_AddChannel();
    screenInit_GeneralSettings();
    screenInit_LoadConfig();
    screenInit_SourceControl();
    screenInit_TimeSeries();

    currentScreen = -1;
    changingToScreen = -1;

    legato_showScreen(screenID_SourceControl);
}

uint32_t legato_getCurrentScreen(void)
{
    return currentScreen;
}

static void legato_hideCurrentScreen(void)
{
    switch(currentScreen)
    {
        case screenID_AddChannel:
        {
            screenHide_AddChannel();
            currentScreen = 0;
            break;
        }
        case screenID_GeneralSettings:
        {
            screenHide_GeneralSettings();
            currentScreen = 0;
            break;
        }
        case screenID_LoadConfig:
        {
            screenHide_LoadConfig();
            currentScreen = 0;
            break;
        }
        case screenID_SourceControl:
        {
            screenHide_SourceControl();
            currentScreen = 0;
            break;
        }
        case screenID_TimeSeries:
        {
            screenHide_TimeSeries();
            currentScreen = 0;
            break;
        }
    }
}

void legato_showScreen(uint32_t id)
{
    if(changingToScreen >= 0)
        return;

    changingToScreen = id;
}

void legato_updateScreenState(void)
{
    if(leIsDrawing() == LE_TRUE)
        return;

    if(changingToScreen >= 0)
    {
        legato_hideCurrentScreen();

        switch(changingToScreen)
        {
            case screenID_AddChannel:
            {
                screenShow_AddChannel();
                break;
            }
            case screenID_GeneralSettings:
            {
                screenShow_GeneralSettings();
                break;
            }
            case screenID_LoadConfig:
            {
                screenShow_LoadConfig();
                break;
            }
            case screenID_SourceControl:
            {
                screenShow_SourceControl();
                break;
            }
            case screenID_TimeSeries:
            {
                screenShow_TimeSeries();
                break;
            }
        }

        currentScreen = changingToScreen;
        changingToScreen = -1;
    }

    switch(currentScreen)
    {
        case screenID_AddChannel:
        {
            screenUpdate_AddChannel();
            break;
        }
        case screenID_GeneralSettings:
        {
            screenUpdate_GeneralSettings();
            break;
        }
        case screenID_LoadConfig:
        {
            screenUpdate_LoadConfig();
            break;
        }
        case screenID_SourceControl:
        {
            screenUpdate_SourceControl();
            break;
        }
        case screenID_TimeSeries:
        {
            screenUpdate_TimeSeries();
            break;
        }
    }
}

leBool legato_isChangingScreens(void)
{
    return changingToScreen != -1;
}

