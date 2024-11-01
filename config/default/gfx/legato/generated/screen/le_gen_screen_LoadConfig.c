#include "gfx/legato/generated/screen/le_gen_screen_LoadConfig.h"

// screen member widget declarations
static leWidget* root0;

leWidget* LoadConfig_Panel_config;
leLabelWidget* LoadConfig_title_config;
leButtonWidget* LoadConfig_load_config;
leWidget* LoadConfig_PanelAllConfigIn;
leLabelWidget* LoadConfig_PanelConfig1;
leLabelWidget* LoadConfig_PanelConfig2;
leLabelWidget* LoadConfig_PanelConfig3;
leLabelWidget* LoadConfig_PanelConfig4;
leLabelWidget* LoadConfig_PanelConfig5;
leLabelWidget* LoadConfig_PanelConfig6;
leLabelWidget* LoadConfig_panelNumber1;
leLabelWidget* LoadConfig_panelNumber3;
leLabelWidget* LoadConfig_panelNumber4;
leLabelWidget* LoadConfig_panelNumber6;
leLabelWidget* LoadConfig_panelNumber5;
leLabelWidget* LoadConfig_panelNumber2;
leRectangleWidget* LoadConfig_RectangleWidget_0;
leLabelWidget* LoadConfig_panelNumber7;
leLabelWidget* LoadConfig_PanelConfig7;
leLabelWidget* LoadConfig_PanelConfig8;
leLabelWidget* LoadConfig_panelNumber8;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_LoadConfig(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_LoadConfig(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 800, 480);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    LoadConfig_Panel_config = leWidget_New();
    LoadConfig_Panel_config->fn->setPosition(LoadConfig_Panel_config, 0, 0);
    LoadConfig_Panel_config->fn->setSize(LoadConfig_Panel_config, 800, 480);
    LoadConfig_Panel_config->fn->setScheme(LoadConfig_Panel_config, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_Panel_config);

    LoadConfig_title_config = leLabelWidget_New();
    LoadConfig_title_config->fn->setPosition(LoadConfig_title_config, 181, 12);
    LoadConfig_title_config->fn->setSize(LoadConfig_title_config, 408, 41);
    LoadConfig_title_config->fn->setScheme(LoadConfig_title_config, &BlackBackground);
    LoadConfig_title_config->fn->setBackgroundType(LoadConfig_title_config, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_title_config->fn->setHAlignment(LoadConfig_title_config, LE_HALIGN_CENTER);
    LoadConfig_title_config->fn->setString(LoadConfig_title_config, (leString*)&string_Load);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_title_config);

    LoadConfig_load_config = leButtonWidget_New();
    LoadConfig_load_config->fn->setPosition(LoadConfig_load_config, 350, 434);
    LoadConfig_load_config->fn->setScheme(LoadConfig_load_config, &validateButton);
    LoadConfig_load_config->fn->setString(LoadConfig_load_config, (leString*)&string_Loading);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_load_config);

    LoadConfig_PanelAllConfigIn = leWidget_New();
    LoadConfig_PanelAllConfigIn->fn->setPosition(LoadConfig_PanelAllConfigIn, 17, 65);
    LoadConfig_PanelAllConfigIn->fn->setSize(LoadConfig_PanelAllConfigIn, 765, 345);
    LoadConfig_PanelAllConfigIn->fn->setScheme(LoadConfig_PanelAllConfigIn, &lightBlackBackground);
    LoadConfig_PanelAllConfigIn->fn->setBorderType(LoadConfig_PanelAllConfigIn, LE_WIDGET_BORDER_LINE);
    LoadConfig_PanelAllConfigIn->fn->setMargins(LoadConfig_PanelAllConfigIn, 29, 4, 4, 4);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_PanelAllConfigIn);

    LoadConfig_PanelConfig1 = leLabelWidget_New();
    LoadConfig_PanelConfig1->fn->setPosition(LoadConfig_PanelConfig1, 203, 94);
    LoadConfig_PanelConfig1->fn->setSize(LoadConfig_PanelConfig1, 426, 25);
    LoadConfig_PanelConfig1->fn->setScheme(LoadConfig_PanelConfig1, &BlackBackground);
    LoadConfig_PanelConfig1->fn->setMargins(LoadConfig_PanelConfig1, 10, 4, 4, 4);
    LoadConfig_PanelConfig1->fn->setString(LoadConfig_PanelConfig1, (leString*)&string_Empty);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_PanelConfig1);

    LoadConfig_PanelConfig2 = leLabelWidget_New();
    LoadConfig_PanelConfig2->fn->setPosition(LoadConfig_PanelConfig2, 203, 131);
    LoadConfig_PanelConfig2->fn->setSize(LoadConfig_PanelConfig2, 426, 25);
    LoadConfig_PanelConfig2->fn->setAlphaAmount(LoadConfig_PanelConfig2, 252);
    LoadConfig_PanelConfig2->fn->setScheme(LoadConfig_PanelConfig2, &BlackBackground);
    LoadConfig_PanelConfig2->fn->setMargins(LoadConfig_PanelConfig2, 10, 8, 4, 4);
    LoadConfig_PanelConfig2->fn->setString(LoadConfig_PanelConfig2, (leString*)&string_Empty);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_PanelConfig2);

    LoadConfig_PanelConfig3 = leLabelWidget_New();
    LoadConfig_PanelConfig3->fn->setPosition(LoadConfig_PanelConfig3, 203, 167);
    LoadConfig_PanelConfig3->fn->setSize(LoadConfig_PanelConfig3, 425, 25);
    LoadConfig_PanelConfig3->fn->setScheme(LoadConfig_PanelConfig3, &BlackBackground);
    LoadConfig_PanelConfig3->fn->setMargins(LoadConfig_PanelConfig3, 10, 4, 4, 4);
    LoadConfig_PanelConfig3->fn->setString(LoadConfig_PanelConfig3, (leString*)&string_Empty);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_PanelConfig3);

    LoadConfig_PanelConfig4 = leLabelWidget_New();
    LoadConfig_PanelConfig4->fn->setPosition(LoadConfig_PanelConfig4, 203, 204);
    LoadConfig_PanelConfig4->fn->setSize(LoadConfig_PanelConfig4, 425, 25);
    LoadConfig_PanelConfig4->fn->setScheme(LoadConfig_PanelConfig4, &BlackBackground);
    LoadConfig_PanelConfig4->fn->setMargins(LoadConfig_PanelConfig4, 10, 4, 4, 4);
    LoadConfig_PanelConfig4->fn->setString(LoadConfig_PanelConfig4, (leString*)&string_Empty);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_PanelConfig4);

    LoadConfig_PanelConfig5 = leLabelWidget_New();
    LoadConfig_PanelConfig5->fn->setPosition(LoadConfig_PanelConfig5, 203, 240);
    LoadConfig_PanelConfig5->fn->setSize(LoadConfig_PanelConfig5, 425, 25);
    LoadConfig_PanelConfig5->fn->setScheme(LoadConfig_PanelConfig5, &BlackBackground);
    LoadConfig_PanelConfig5->fn->setMargins(LoadConfig_PanelConfig5, 10, 4, 4, 4);
    LoadConfig_PanelConfig5->fn->setString(LoadConfig_PanelConfig5, (leString*)&string_Empty);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_PanelConfig5);

    LoadConfig_PanelConfig6 = leLabelWidget_New();
    LoadConfig_PanelConfig6->fn->setPosition(LoadConfig_PanelConfig6, 202, 275);
    LoadConfig_PanelConfig6->fn->setSize(LoadConfig_PanelConfig6, 425, 25);
    LoadConfig_PanelConfig6->fn->setScheme(LoadConfig_PanelConfig6, &BlackBackground);
    LoadConfig_PanelConfig6->fn->setMargins(LoadConfig_PanelConfig6, 10, 4, 4, 4);
    LoadConfig_PanelConfig6->fn->setString(LoadConfig_PanelConfig6, (leString*)&string_Empty);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_PanelConfig6);

    LoadConfig_panelNumber1 = leLabelWidget_New();
    LoadConfig_panelNumber1->fn->setPosition(LoadConfig_panelNumber1, 167, 94);
    LoadConfig_panelNumber1->fn->setSize(LoadConfig_panelNumber1, 24, 25);
    LoadConfig_panelNumber1->fn->setScheme(LoadConfig_panelNumber1, &BlackBackground);
    LoadConfig_panelNumber1->fn->setBackgroundType(LoadConfig_panelNumber1, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_panelNumber1->fn->setString(LoadConfig_panelNumber1, (leString*)&string_s1);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_panelNumber1);

    LoadConfig_panelNumber3 = leLabelWidget_New();
    LoadConfig_panelNumber3->fn->setPosition(LoadConfig_panelNumber3, 168, 167);
    LoadConfig_panelNumber3->fn->setSize(LoadConfig_panelNumber3, 24, 25);
    LoadConfig_panelNumber3->fn->setScheme(LoadConfig_panelNumber3, &BlackBackground);
    LoadConfig_panelNumber3->fn->setBackgroundType(LoadConfig_panelNumber3, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_panelNumber3->fn->setString(LoadConfig_panelNumber3, (leString*)&string_s3);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_panelNumber3);

    LoadConfig_panelNumber4 = leLabelWidget_New();
    LoadConfig_panelNumber4->fn->setPosition(LoadConfig_panelNumber4, 168, 204);
    LoadConfig_panelNumber4->fn->setSize(LoadConfig_panelNumber4, 24, 25);
    LoadConfig_panelNumber4->fn->setScheme(LoadConfig_panelNumber4, &BlackBackground);
    LoadConfig_panelNumber4->fn->setBackgroundType(LoadConfig_panelNumber4, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_panelNumber4->fn->setString(LoadConfig_panelNumber4, (leString*)&string_s4);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_panelNumber4);

    LoadConfig_panelNumber6 = leLabelWidget_New();
    LoadConfig_panelNumber6->fn->setPosition(LoadConfig_panelNumber6, 168, 276);
    LoadConfig_panelNumber6->fn->setSize(LoadConfig_panelNumber6, 24, 25);
    LoadConfig_panelNumber6->fn->setScheme(LoadConfig_panelNumber6, &BlackBackground);
    LoadConfig_panelNumber6->fn->setBackgroundType(LoadConfig_panelNumber6, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_panelNumber6->fn->setString(LoadConfig_panelNumber6, (leString*)&string_s6);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_panelNumber6);

    LoadConfig_panelNumber5 = leLabelWidget_New();
    LoadConfig_panelNumber5->fn->setPosition(LoadConfig_panelNumber5, 168, 240);
    LoadConfig_panelNumber5->fn->setSize(LoadConfig_panelNumber5, 24, 25);
    LoadConfig_panelNumber5->fn->setScheme(LoadConfig_panelNumber5, &BlackBackground);
    LoadConfig_panelNumber5->fn->setBackgroundType(LoadConfig_panelNumber5, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_panelNumber5->fn->setString(LoadConfig_panelNumber5, (leString*)&string_s5);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_panelNumber5);

    LoadConfig_panelNumber2 = leLabelWidget_New();
    LoadConfig_panelNumber2->fn->setPosition(LoadConfig_panelNumber2, 167, 131);
    LoadConfig_panelNumber2->fn->setSize(LoadConfig_panelNumber2, 24, 25);
    LoadConfig_panelNumber2->fn->setScheme(LoadConfig_panelNumber2, &BlackBackground);
    LoadConfig_panelNumber2->fn->setBackgroundType(LoadConfig_panelNumber2, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_panelNumber2->fn->setString(LoadConfig_panelNumber2, (leString*)&string_s2);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_panelNumber2);

    LoadConfig_RectangleWidget_0 = leRectangleWidget_New();
    LoadConfig_RectangleWidget_0->fn->setPosition(LoadConfig_RectangleWidget_0, 58, 10);
    LoadConfig_RectangleWidget_0->fn->setSize(LoadConfig_RectangleWidget_0, 100, 48);
    LoadConfig_RectangleWidget_0->fn->setScheme(LoadConfig_RectangleWidget_0, &selector);
    LoadConfig_RectangleWidget_0->fn->setBackgroundType(LoadConfig_RectangleWidget_0, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_RectangleWidget_0->fn->setBorderType(LoadConfig_RectangleWidget_0, LE_WIDGET_BORDER_NONE);
    LoadConfig_RectangleWidget_0->fn->setThickness(LoadConfig_RectangleWidget_0, 2);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_RectangleWidget_0);

    LoadConfig_panelNumber7 = leLabelWidget_New();
    LoadConfig_panelNumber7->fn->setPosition(LoadConfig_panelNumber7, 168, 309);
    LoadConfig_panelNumber7->fn->setSize(LoadConfig_panelNumber7, 24, 25);
    LoadConfig_panelNumber7->fn->setScheme(LoadConfig_panelNumber7, &BlackBackground);
    LoadConfig_panelNumber7->fn->setBackgroundType(LoadConfig_panelNumber7, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_panelNumber7->fn->setString(LoadConfig_panelNumber7, (leString*)&string_s7);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_panelNumber7);

    LoadConfig_PanelConfig7 = leLabelWidget_New();
    LoadConfig_PanelConfig7->fn->setPosition(LoadConfig_PanelConfig7, 203, 309);
    LoadConfig_PanelConfig7->fn->setSize(LoadConfig_PanelConfig7, 425, 25);
    LoadConfig_PanelConfig7->fn->setScheme(LoadConfig_PanelConfig7, &BlackBackground);
    LoadConfig_PanelConfig7->fn->setMargins(LoadConfig_PanelConfig7, 10, 4, 4, 4);
    LoadConfig_PanelConfig7->fn->setString(LoadConfig_PanelConfig7, (leString*)&string_Empty);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_PanelConfig7);

    LoadConfig_PanelConfig8 = leLabelWidget_New();
    LoadConfig_PanelConfig8->fn->setPosition(LoadConfig_PanelConfig8, 203, 343);
    LoadConfig_PanelConfig8->fn->setSize(LoadConfig_PanelConfig8, 425, 25);
    LoadConfig_PanelConfig8->fn->setScheme(LoadConfig_PanelConfig8, &BlackBackground);
    LoadConfig_PanelConfig8->fn->setMargins(LoadConfig_PanelConfig8, 10, 4, 4, 4);
    LoadConfig_PanelConfig8->fn->setString(LoadConfig_PanelConfig8, (leString*)&string_Empty);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_PanelConfig8);

    LoadConfig_panelNumber8 = leLabelWidget_New();
    LoadConfig_panelNumber8->fn->setPosition(LoadConfig_panelNumber8, 168, 343);
    LoadConfig_panelNumber8->fn->setSize(LoadConfig_panelNumber8, 24, 25);
    LoadConfig_panelNumber8->fn->setScheme(LoadConfig_panelNumber8, &BlackBackground);
    LoadConfig_panelNumber8->fn->setBackgroundType(LoadConfig_panelNumber8, LE_WIDGET_BACKGROUND_NONE);
    LoadConfig_panelNumber8->fn->setString(LoadConfig_panelNumber8, (leString*)&string_s8);
    root0->fn->addChild(root0, (leWidget*)LoadConfig_panelNumber8);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_LoadConfig(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_LoadConfig(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    LoadConfig_Panel_config = NULL;
    LoadConfig_title_config = NULL;
    LoadConfig_load_config = NULL;
    LoadConfig_PanelAllConfigIn = NULL;
    LoadConfig_PanelConfig1 = NULL;
    LoadConfig_PanelConfig2 = NULL;
    LoadConfig_PanelConfig3 = NULL;
    LoadConfig_PanelConfig4 = NULL;
    LoadConfig_PanelConfig5 = NULL;
    LoadConfig_PanelConfig6 = NULL;
    LoadConfig_panelNumber1 = NULL;
    LoadConfig_panelNumber3 = NULL;
    LoadConfig_panelNumber4 = NULL;
    LoadConfig_panelNumber6 = NULL;
    LoadConfig_panelNumber5 = NULL;
    LoadConfig_panelNumber2 = NULL;
    LoadConfig_RectangleWidget_0 = NULL;
    LoadConfig_panelNumber7 = NULL;
    LoadConfig_PanelConfig7 = NULL;
    LoadConfig_PanelConfig8 = NULL;
    LoadConfig_panelNumber8 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_LoadConfig(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_LoadConfig(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

