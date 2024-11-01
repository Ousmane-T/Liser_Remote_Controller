#include "gfx/legato/generated/screen/le_gen_screen_SourceControl.h"

// screen member widget declarations
static leWidget* root0;

leWidget* SourceControl_Panel_0;
leLabelWidget* SourceControl_LabelWidget_0;
leGroupBoxWidget* SourceControl_GroupBoxWidget_0;
leButtonWidget* SourceControl_ButtonWidget_2;
leButtonWidget* SourceControl_ButtonWidget_3;
leButtonWidget* SourceControl_ButtonWidget_4;
leGroupBoxWidget* SourceControl_GroupBoxWidget_4;
leButtonWidget* SourceControl_ButtonWidget_5;
leRectangleWidget* SourceControl_RectangleWidget_0;
leButtonWidget* SourceControl_ButtonWidget_0;
leButtonWidget* SourceControl_ButtonWidget_1;
leWidget* SourceControl_PanelWidget_0;
leButtonWidget* SourceControl_ButtonWidget_6;
leButtonWidget* SourceControl_ButtonWidget_7;
leWidget* SourceControl_PanelWidget_1;
leLabelWidget* SourceControl_CurrentTittle_1;
leLabelWidget* SourceControl_CurrentTittle;
leLabelWidget* SourceControl_CurrentTittle_3;
leButtonWidget* SourceControl_ButtonWidget_8;
leTextFieldWidget* SourceControl_TextFieldWidget_0;
leTextFieldWidget* SourceControl_TextFieldWidget_1;
leLabelWidget* SourceControl_CurrentTittle_0;
leLabelWidget* SourceControl_CurrentTittle_2;
leLabelWidget* SourceControl_CurrentTittle_3_0;
leButtonWidget* SourceControl_ButtonWidget_9;
leTextFieldWidget* SourceControl_TextFieldWidget_2;
leTextFieldWidget* SourceControl_TextFieldWidget_3;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_SourceControl(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_SourceControl(void)
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

    SourceControl_Panel_0 = leWidget_New();
    SourceControl_Panel_0->fn->setPosition(SourceControl_Panel_0, 0, 0);
    SourceControl_Panel_0->fn->setSize(SourceControl_Panel_0, 800, 480);
    SourceControl_Panel_0->fn->setScheme(SourceControl_Panel_0, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)SourceControl_Panel_0);

    SourceControl_LabelWidget_0 = leLabelWidget_New();
    SourceControl_LabelWidget_0->fn->setPosition(SourceControl_LabelWidget_0, 197, 17);
    SourceControl_LabelWidget_0->fn->setSize(SourceControl_LabelWidget_0, 319, 44);
    SourceControl_LabelWidget_0->fn->setScheme(SourceControl_LabelWidget_0, &BlackBackground);
    SourceControl_LabelWidget_0->fn->setString(SourceControl_LabelWidget_0, (leString*)&string_Lightsource);
    root0->fn->addChild(root0, (leWidget*)SourceControl_LabelWidget_0);

    SourceControl_GroupBoxWidget_0 = leGroupBoxWidget_New();
    SourceControl_GroupBoxWidget_0->fn->setPosition(SourceControl_GroupBoxWidget_0, 289, 75);
    SourceControl_GroupBoxWidget_0->fn->setSize(SourceControl_GroupBoxWidget_0, 326, 107);
    SourceControl_GroupBoxWidget_0->fn->setScheme(SourceControl_GroupBoxWidget_0, &lightBlackBackground);
    SourceControl_GroupBoxWidget_0->fn->setBorderType(SourceControl_GroupBoxWidget_0, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)SourceControl_GroupBoxWidget_0);

    SourceControl_ButtonWidget_2 = leButtonWidget_New();
    SourceControl_ButtonWidget_2->fn->setPosition(SourceControl_ButtonWidget_2, 316, 100);
    SourceControl_ButtonWidget_2->fn->setSize(SourceControl_ButtonWidget_2, 70, 60);
    SourceControl_ButtonWidget_2->fn->setScheme(SourceControl_ButtonWidget_2, &BlueScheme);
    root0->fn->addChild(root0, (leWidget*)SourceControl_ButtonWidget_2);

    SourceControl_ButtonWidget_3 = leButtonWidget_New();
    SourceControl_ButtonWidget_3->fn->setPosition(SourceControl_ButtonWidget_3, 407, 97);
    SourceControl_ButtonWidget_3->fn->setSize(SourceControl_ButtonWidget_3, 69, 68);
    SourceControl_ButtonWidget_3->fn->setScheme(SourceControl_ButtonWidget_3, &progressBar);
    root0->fn->addChild(root0, (leWidget*)SourceControl_ButtonWidget_3);

    SourceControl_ButtonWidget_4 = leButtonWidget_New();
    SourceControl_ButtonWidget_4->fn->setPosition(SourceControl_ButtonWidget_4, 505, 101);
    SourceControl_ButtonWidget_4->fn->setSize(SourceControl_ButtonWidget_4, 77, 59);
    SourceControl_ButtonWidget_4->fn->setScheme(SourceControl_ButtonWidget_4, &WhiteScheme);
    root0->fn->addChild(root0, (leWidget*)SourceControl_ButtonWidget_4);

    SourceControl_GroupBoxWidget_4 = leGroupBoxWidget_New();
    SourceControl_GroupBoxWidget_4->fn->setPosition(SourceControl_GroupBoxWidget_4, 641, 76);
    SourceControl_GroupBoxWidget_4->fn->setSize(SourceControl_GroupBoxWidget_4, 100, 100);
    SourceControl_GroupBoxWidget_4->fn->setScheme(SourceControl_GroupBoxWidget_4, &lightBlackBackground);
    SourceControl_GroupBoxWidget_4->fn->setBorderType(SourceControl_GroupBoxWidget_4, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)SourceControl_GroupBoxWidget_4);

    SourceControl_ButtonWidget_5 = leButtonWidget_New();
    SourceControl_ButtonWidget_5->fn->setPosition(SourceControl_ButtonWidget_5, 648, 85);
    SourceControl_ButtonWidget_5->fn->setSize(SourceControl_ButtonWidget_5, 87, 81);
    SourceControl_ButtonWidget_5->fn->setScheme(SourceControl_ButtonWidget_5, &RedScheme);
    root0->fn->addChild(root0, (leWidget*)SourceControl_ButtonWidget_5);

    SourceControl_RectangleWidget_0 = leRectangleWidget_New();
    SourceControl_RectangleWidget_0->fn->setPosition(SourceControl_RectangleWidget_0, 43, 15);
    SourceControl_RectangleWidget_0->fn->setSize(SourceControl_RectangleWidget_0, 100, 54);
    SourceControl_RectangleWidget_0->fn->setScheme(SourceControl_RectangleWidget_0, &selector);
    SourceControl_RectangleWidget_0->fn->setBackgroundType(SourceControl_RectangleWidget_0, LE_WIDGET_BACKGROUND_NONE);
    SourceControl_RectangleWidget_0->fn->setBorderType(SourceControl_RectangleWidget_0, LE_WIDGET_BORDER_NONE);
    SourceControl_RectangleWidget_0->fn->setThickness(SourceControl_RectangleWidget_0, 2);
    root0->fn->addChild(root0, (leWidget*)SourceControl_RectangleWidget_0);

    SourceControl_ButtonWidget_0 = leButtonWidget_New();
    SourceControl_ButtonWidget_0->fn->setPosition(SourceControl_ButtonWidget_0, 61, 103);
    SourceControl_ButtonWidget_0->fn->setSize(SourceControl_ButtonWidget_0, 73, 59);
    SourceControl_ButtonWidget_0->fn->setScheme(SourceControl_ButtonWidget_0, &RedScheme);
    root0->fn->addChild(root0, (leWidget*)SourceControl_ButtonWidget_0);

    SourceControl_ButtonWidget_1 = leButtonWidget_New();
    SourceControl_ButtonWidget_1->fn->setPosition(SourceControl_ButtonWidget_1, 157, 103);
    SourceControl_ButtonWidget_1->fn->setSize(SourceControl_ButtonWidget_1, 80, 64);
    SourceControl_ButtonWidget_1->fn->setScheme(SourceControl_ButtonWidget_1, &GreenScheme);
    root0->fn->addChild(root0, (leWidget*)SourceControl_ButtonWidget_1);

    SourceControl_PanelWidget_0 = leWidget_New();
    SourceControl_PanelWidget_0->fn->setPosition(SourceControl_PanelWidget_0, 55, 209);
    SourceControl_PanelWidget_0->fn->setSize(SourceControl_PanelWidget_0, 331, 248);
    SourceControl_PanelWidget_0->fn->setVisible(SourceControl_PanelWidget_0, statusPanelViewConfig_1);
    SourceControl_PanelWidget_0->fn->setScheme(SourceControl_PanelWidget_0, &transparent);
    SourceControl_PanelWidget_0->fn->setBackgroundType(SourceControl_PanelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)SourceControl_PanelWidget_0);

    SourceControl_CurrentTittle_1 = leLabelWidget_New();
    SourceControl_CurrentTittle_1->fn->setPosition(SourceControl_CurrentTittle_1, 17, 117);
    SourceControl_CurrentTittle_1->fn->setScheme(SourceControl_CurrentTittle_1, &BlackBackground);
    SourceControl_CurrentTittle_1->fn->setBackgroundType(SourceControl_CurrentTittle_1, LE_WIDGET_BACKGROUND_NONE);
    SourceControl_CurrentTittle_1->fn->setString(SourceControl_CurrentTittle_1, (leString*)&string_Status);
    SourceControl_PanelWidget_0->fn->addChild(SourceControl_PanelWidget_0, (leWidget*)SourceControl_CurrentTittle_1);

    SourceControl_CurrentTittle = leLabelWidget_New();
    SourceControl_CurrentTittle->fn->setPosition(SourceControl_CurrentTittle, 18, 74);
    SourceControl_CurrentTittle->fn->setScheme(SourceControl_CurrentTittle, &BlackBackground);
    SourceControl_CurrentTittle->fn->setBackgroundType(SourceControl_CurrentTittle, LE_WIDGET_BACKGROUND_NONE);
    SourceControl_CurrentTittle->fn->setString(SourceControl_CurrentTittle, (leString*)&string_Current);
    SourceControl_PanelWidget_0->fn->addChild(SourceControl_PanelWidget_0, (leWidget*)SourceControl_CurrentTittle);

    SourceControl_CurrentTittle_3 = leLabelWidget_New();
    SourceControl_CurrentTittle_3->fn->setPosition(SourceControl_CurrentTittle_3, 102, 117);
    SourceControl_CurrentTittle_3->fn->setSize(SourceControl_CurrentTittle_3, 144, 25);
    SourceControl_CurrentTittle_3->fn->setScheme(SourceControl_CurrentTittle_3, &running);
    SourceControl_PanelWidget_0->fn->addChild(SourceControl_PanelWidget_0, (leWidget*)SourceControl_CurrentTittle_3);

    SourceControl_ButtonWidget_8 = leButtonWidget_New();
    SourceControl_ButtonWidget_8->fn->setPosition(SourceControl_ButtonWidget_8, 109, 7);
    SourceControl_ButtonWidget_8->fn->setSize(SourceControl_ButtonWidget_8, 84, 54);
    SourceControl_ButtonWidget_8->fn->setString(SourceControl_ButtonWidget_8, (leString*)&string_start_);
    SourceControl_PanelWidget_0->fn->addChild(SourceControl_PanelWidget_0, (leWidget*)SourceControl_ButtonWidget_8);

    SourceControl_TextFieldWidget_0 = leTextFieldWidget_New();
    SourceControl_TextFieldWidget_0->fn->setPosition(SourceControl_TextFieldWidget_0, 101, 182);
    SourceControl_TextFieldWidget_0->fn->setSize(SourceControl_TextFieldWidget_0, 117, 25);
    SourceControl_TextFieldWidget_0->fn->setHAlignment(SourceControl_TextFieldWidget_0, LE_HALIGN_LEFT);
    SourceControl_TextFieldWidget_0->fn->setString(SourceControl_TextFieldWidget_0, (leString*)&string_init_timer);
    SourceControl_TextFieldWidget_0->fn->setFont(SourceControl_TextFieldWidget_0, (leFont*)&Roboto_Small);
    SourceControl_PanelWidget_0->fn->addChild(SourceControl_PanelWidget_0, (leWidget*)SourceControl_TextFieldWidget_0);

    SourceControl_TextFieldWidget_1 = leTextFieldWidget_New();
    SourceControl_TextFieldWidget_1->fn->setPosition(SourceControl_TextFieldWidget_1, 101, 75);
    SourceControl_TextFieldWidget_1->fn->setSize(SourceControl_TextFieldWidget_1, 113, 25);
    SourceControl_TextFieldWidget_1->fn->setHAlignment(SourceControl_TextFieldWidget_1, LE_HALIGN_LEFT);
    SourceControl_TextFieldWidget_1->fn->setString(SourceControl_TextFieldWidget_1, (leString*)&string_ss0);
    SourceControl_TextFieldWidget_1->fn->setFont(SourceControl_TextFieldWidget_1, (leFont*)&Roboto_Small);
    SourceControl_PanelWidget_0->fn->addChild(SourceControl_PanelWidget_0, (leWidget*)SourceControl_TextFieldWidget_1);

    SourceControl_ButtonWidget_6 = leButtonWidget_New();
    SourceControl_ButtonWidget_6->fn->setPosition(SourceControl_ButtonWidget_6, 754, 283);
    SourceControl_ButtonWidget_6->fn->setSize(SourceControl_ButtonWidget_6, 31, 31);
    root0->fn->addChild(root0, (leWidget*)SourceControl_ButtonWidget_6);

    SourceControl_ButtonWidget_7 = leButtonWidget_New();
    SourceControl_ButtonWidget_7->fn->setPosition(SourceControl_ButtonWidget_7, 754, 324);
    SourceControl_ButtonWidget_7->fn->setSize(SourceControl_ButtonWidget_7, 31, 31);
    root0->fn->addChild(root0, (leWidget*)SourceControl_ButtonWidget_7);

    SourceControl_PanelWidget_1 = leWidget_New();
    SourceControl_PanelWidget_1->fn->setPosition(SourceControl_PanelWidget_1, 415, 208);
    SourceControl_PanelWidget_1->fn->setSize(SourceControl_PanelWidget_1, 331, 248);
    SourceControl_PanelWidget_1->fn->setVisible(SourceControl_PanelWidget_1, statusPanelViewConfig_2);
    SourceControl_PanelWidget_1->fn->setScheme(SourceControl_PanelWidget_1, &transparent);
    SourceControl_PanelWidget_1->fn->setBackgroundType(SourceControl_PanelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)SourceControl_PanelWidget_1);

    SourceControl_CurrentTittle_0 = leLabelWidget_New();
    SourceControl_CurrentTittle_0->fn->setPosition(SourceControl_CurrentTittle_0, 21, 75);
    SourceControl_CurrentTittle_0->fn->setScheme(SourceControl_CurrentTittle_0, &BlackBackground);
    SourceControl_CurrentTittle_0->fn->setBackgroundType(SourceControl_CurrentTittle_0, LE_WIDGET_BACKGROUND_NONE);
    SourceControl_CurrentTittle_0->fn->setString(SourceControl_CurrentTittle_0, (leString*)&string_Current);
    SourceControl_PanelWidget_1->fn->addChild(SourceControl_PanelWidget_1, (leWidget*)SourceControl_CurrentTittle_0);

    SourceControl_CurrentTittle_2 = leLabelWidget_New();
    SourceControl_CurrentTittle_2->fn->setPosition(SourceControl_CurrentTittle_2, 21, 117);
    SourceControl_CurrentTittle_2->fn->setScheme(SourceControl_CurrentTittle_2, &BlackBackground);
    SourceControl_CurrentTittle_2->fn->setBackgroundType(SourceControl_CurrentTittle_2, LE_WIDGET_BACKGROUND_NONE);
    SourceControl_CurrentTittle_2->fn->setString(SourceControl_CurrentTittle_2, (leString*)&string_Status);
    SourceControl_PanelWidget_1->fn->addChild(SourceControl_PanelWidget_1, (leWidget*)SourceControl_CurrentTittle_2);

    SourceControl_CurrentTittle_3_0 = leLabelWidget_New();
    SourceControl_CurrentTittle_3_0->fn->setPosition(SourceControl_CurrentTittle_3_0, 128, 120);
    SourceControl_CurrentTittle_3_0->fn->setSize(SourceControl_CurrentTittle_3_0, 144, 25);
    SourceControl_CurrentTittle_3_0->fn->setScheme(SourceControl_CurrentTittle_3_0, &stopped);
    SourceControl_PanelWidget_1->fn->addChild(SourceControl_PanelWidget_1, (leWidget*)SourceControl_CurrentTittle_3_0);

    SourceControl_ButtonWidget_9 = leButtonWidget_New();
    SourceControl_ButtonWidget_9->fn->setPosition(SourceControl_ButtonWidget_9, 135, 4);
    SourceControl_ButtonWidget_9->fn->setSize(SourceControl_ButtonWidget_9, 86, 54);
    SourceControl_ButtonWidget_9->fn->setString(SourceControl_ButtonWidget_9, (leString*)&string_start_);
    SourceControl_PanelWidget_1->fn->addChild(SourceControl_PanelWidget_1, (leWidget*)SourceControl_ButtonWidget_9);

    SourceControl_TextFieldWidget_2 = leTextFieldWidget_New();
    SourceControl_TextFieldWidget_2->fn->setPosition(SourceControl_TextFieldWidget_2, 120, 74);
    SourceControl_TextFieldWidget_2->fn->setSize(SourceControl_TextFieldWidget_2, 129, 25);
    SourceControl_TextFieldWidget_2->fn->setHAlignment(SourceControl_TextFieldWidget_2, LE_HALIGN_LEFT);
    SourceControl_TextFieldWidget_2->fn->setString(SourceControl_TextFieldWidget_2, (leString*)&string_ss0);
    SourceControl_TextFieldWidget_2->fn->setFont(SourceControl_TextFieldWidget_2, (leFont*)&Roboto_Small);
    SourceControl_PanelWidget_1->fn->addChild(SourceControl_PanelWidget_1, (leWidget*)SourceControl_TextFieldWidget_2);

    SourceControl_TextFieldWidget_3 = leTextFieldWidget_New();
    SourceControl_TextFieldWidget_3->fn->setPosition(SourceControl_TextFieldWidget_3, 131, 178);
    SourceControl_TextFieldWidget_3->fn->setSize(SourceControl_TextFieldWidget_3, 116, 25);
    SourceControl_TextFieldWidget_3->fn->setHAlignment(SourceControl_TextFieldWidget_3, LE_HALIGN_LEFT);
    SourceControl_TextFieldWidget_3->fn->setString(SourceControl_TextFieldWidget_3, (leString*)&string_init_timer);
    SourceControl_TextFieldWidget_3->fn->setFont(SourceControl_TextFieldWidget_3, (leFont*)&Roboto_Small);
    SourceControl_PanelWidget_1->fn->addChild(SourceControl_PanelWidget_1, (leWidget*)SourceControl_TextFieldWidget_3);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    showing = LE_TRUE;
    init_widgetScreenSourceControl();

    return LE_SUCCESS;
}

void screenUpdate_SourceControl(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    navigation_SourceControl();
}

void screenHide_SourceControl(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    SourceControl_Panel_0 = NULL;
    SourceControl_LabelWidget_0 = NULL;
    SourceControl_GroupBoxWidget_0 = NULL;
    SourceControl_ButtonWidget_2 = NULL;
    SourceControl_ButtonWidget_3 = NULL;
    SourceControl_ButtonWidget_4 = NULL;
    SourceControl_GroupBoxWidget_4 = NULL;
    SourceControl_ButtonWidget_5 = NULL;
    SourceControl_RectangleWidget_0 = NULL;
    SourceControl_ButtonWidget_0 = NULL;
    SourceControl_ButtonWidget_1 = NULL;
    SourceControl_PanelWidget_0 = NULL;
    SourceControl_ButtonWidget_6 = NULL;
    SourceControl_ButtonWidget_7 = NULL;
    SourceControl_PanelWidget_1 = NULL;
    SourceControl_CurrentTittle_1 = NULL;
    SourceControl_CurrentTittle = NULL;
    SourceControl_CurrentTittle_3 = NULL;
    SourceControl_ButtonWidget_8 = NULL;
    SourceControl_TextFieldWidget_0 = NULL;
    SourceControl_TextFieldWidget_1 = NULL;
    SourceControl_CurrentTittle_0 = NULL;
    SourceControl_CurrentTittle_2 = NULL;
    SourceControl_CurrentTittle_3_0 = NULL;
    SourceControl_ButtonWidget_9 = NULL;
    SourceControl_TextFieldWidget_2 = NULL;
    SourceControl_TextFieldWidget_3 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_SourceControl(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_SourceControl(uint32_t lyrIdx)
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

