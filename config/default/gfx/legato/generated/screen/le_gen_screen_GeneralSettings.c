#include "gfx/legato/generated/screen/le_gen_screen_GeneralSettings.h"

// screen member widget declarations
static leWidget* root0;

leWidget* GeneralSettings_Panel_0;
leLabelWidget* GeneralSettings_LabelWidget_0;
leGroupBoxWidget* GeneralSettings_GroupBoxWidget_0;
leLabelWidget* GeneralSettings_LabelLanguage;
leLabelWidget* GeneralSettings_LabelWidget_2_0;
leLabelWidget* GeneralSettings_LabelWidget_2_1;
leWidget* GeneralSettings_PanelWidget_0;
leListWheelWidget* GeneralSettings_ListWheelWidget_0;
leRectangleWidget* GeneralSettings_RectangleWidget_0;
leButtonWidget* GeneralSettings_ButtonBackGeneral;
leLabelWidget* GeneralSettings_ScreenbrightLabel;
leLabelWidget* GeneralSettings_UIDlabel;
leLabelWidget* GeneralSettings_FirmwareLabel;
leLabelWidget* GeneralSettings_LanguageLabel;
leButtonWidget* GeneralSettings_ButtonValidateSettings;
leTextFieldWidget* GeneralSettings_TextFieldWidget_0_0_0_6_2;
leTextFieldWidget* GeneralSettings_TextFieldWidget_0_0_0_6_2_0;
leTextFieldWidget* GeneralSettings_TextFieldWidget_0_0_0_6_2_1;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_GeneralSettings(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_GeneralSettings(void)
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

    GeneralSettings_Panel_0 = leWidget_New();
    GeneralSettings_Panel_0->fn->setPosition(GeneralSettings_Panel_0, 0, 0);
    GeneralSettings_Panel_0->fn->setSize(GeneralSettings_Panel_0, 800, 480);
    GeneralSettings_Panel_0->fn->setScheme(GeneralSettings_Panel_0, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)GeneralSettings_Panel_0);

    GeneralSettings_LabelWidget_0 = leLabelWidget_New();
    GeneralSettings_LabelWidget_0->fn->setPosition(GeneralSettings_LabelWidget_0, 237, 24);
    GeneralSettings_LabelWidget_0->fn->setSize(GeneralSettings_LabelWidget_0, 319, 45);
    GeneralSettings_LabelWidget_0->fn->setScheme(GeneralSettings_LabelWidget_0, &BlackBackground);
    GeneralSettings_LabelWidget_0->fn->setHAlignment(GeneralSettings_LabelWidget_0, LE_HALIGN_CENTER);
    GeneralSettings_LabelWidget_0->fn->setString(GeneralSettings_LabelWidget_0, (leString*)&string_general);
    root0->fn->addChild(root0, (leWidget*)GeneralSettings_LabelWidget_0);

    GeneralSettings_GroupBoxWidget_0 = leGroupBoxWidget_New();
    GeneralSettings_GroupBoxWidget_0->fn->setPosition(GeneralSettings_GroupBoxWidget_0, 56, 92);
    GeneralSettings_GroupBoxWidget_0->fn->setSize(GeneralSettings_GroupBoxWidget_0, 678, 350);
    GeneralSettings_GroupBoxWidget_0->fn->setScheme(GeneralSettings_GroupBoxWidget_0, &lightBlackBackground);
    GeneralSettings_GroupBoxWidget_0->fn->setBorderType(GeneralSettings_GroupBoxWidget_0, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)GeneralSettings_GroupBoxWidget_0);

    GeneralSettings_ButtonBackGeneral = leButtonWidget_New();
    GeneralSettings_ButtonBackGeneral->fn->setPosition(GeneralSettings_ButtonBackGeneral, 389, 312);
    GeneralSettings_ButtonBackGeneral->fn->setScheme(GeneralSettings_ButtonBackGeneral, &Tvalidate);
    GeneralSettings_ButtonBackGeneral->fn->setString(GeneralSettings_ButtonBackGeneral, (leString*)&string_Back);
    GeneralSettings_GroupBoxWidget_0->fn->addChild(GeneralSettings_GroupBoxWidget_0, (leWidget*)GeneralSettings_ButtonBackGeneral);

    GeneralSettings_ScreenbrightLabel = leLabelWidget_New();
    GeneralSettings_ScreenbrightLabel->fn->setPosition(GeneralSettings_ScreenbrightLabel, 65, 249);
    GeneralSettings_ScreenbrightLabel->fn->setSize(GeneralSettings_ScreenbrightLabel, 215, 25);
    GeneralSettings_ScreenbrightLabel->fn->setScheme(GeneralSettings_ScreenbrightLabel, &BlackBackground);
    GeneralSettings_ScreenbrightLabel->fn->setBackgroundType(GeneralSettings_ScreenbrightLabel, LE_WIDGET_BACKGROUND_NONE);
    GeneralSettings_ScreenbrightLabel->fn->setString(GeneralSettings_ScreenbrightLabel, (leString*)&string_ScreenBrightness);
    GeneralSettings_GroupBoxWidget_0->fn->addChild(GeneralSettings_GroupBoxWidget_0, (leWidget*)GeneralSettings_ScreenbrightLabel);

    GeneralSettings_UIDlabel = leLabelWidget_New();
    GeneralSettings_UIDlabel->fn->setPosition(GeneralSettings_UIDlabel, 69, 195);
    GeneralSettings_UIDlabel->fn->setSize(GeneralSettings_UIDlabel, 215, 25);
    GeneralSettings_UIDlabel->fn->setScheme(GeneralSettings_UIDlabel, &BlackBackground);
    GeneralSettings_UIDlabel->fn->setBackgroundType(GeneralSettings_UIDlabel, LE_WIDGET_BACKGROUND_NONE);
    GeneralSettings_UIDlabel->fn->setString(GeneralSettings_UIDlabel, (leString*)&string_UID);
    GeneralSettings_GroupBoxWidget_0->fn->addChild(GeneralSettings_GroupBoxWidget_0, (leWidget*)GeneralSettings_UIDlabel);

    GeneralSettings_FirmwareLabel = leLabelWidget_New();
    GeneralSettings_FirmwareLabel->fn->setPosition(GeneralSettings_FirmwareLabel, 67, 142);
    GeneralSettings_FirmwareLabel->fn->setSize(GeneralSettings_FirmwareLabel, 215, 25);
    GeneralSettings_FirmwareLabel->fn->setScheme(GeneralSettings_FirmwareLabel, &BlackBackground);
    GeneralSettings_FirmwareLabel->fn->setBackgroundType(GeneralSettings_FirmwareLabel, LE_WIDGET_BACKGROUND_NONE);
    GeneralSettings_FirmwareLabel->fn->setString(GeneralSettings_FirmwareLabel, (leString*)&string_FirmwareVersion);
    GeneralSettings_GroupBoxWidget_0->fn->addChild(GeneralSettings_GroupBoxWidget_0, (leWidget*)GeneralSettings_FirmwareLabel);

    GeneralSettings_LanguageLabel = leLabelWidget_New();
    GeneralSettings_LanguageLabel->fn->setPosition(GeneralSettings_LanguageLabel, 67, 77);
    GeneralSettings_LanguageLabel->fn->setSize(GeneralSettings_LanguageLabel, 215, 25);
    GeneralSettings_LanguageLabel->fn->setScheme(GeneralSettings_LanguageLabel, &BlackBackground);
    GeneralSettings_LanguageLabel->fn->setBackgroundType(GeneralSettings_LanguageLabel, LE_WIDGET_BACKGROUND_NONE);
    GeneralSettings_LanguageLabel->fn->setString(GeneralSettings_LanguageLabel, (leString*)&string_Language);
    GeneralSettings_GroupBoxWidget_0->fn->addChild(GeneralSettings_GroupBoxWidget_0, (leWidget*)GeneralSettings_LanguageLabel);

    GeneralSettings_ButtonValidateSettings = leButtonWidget_New();
    GeneralSettings_ButtonValidateSettings->fn->setPosition(GeneralSettings_ButtonValidateSettings, 167, 311);
    GeneralSettings_ButtonValidateSettings->fn->setScheme(GeneralSettings_ButtonValidateSettings, &Tvalidate);
    GeneralSettings_ButtonValidateSettings->fn->setString(GeneralSettings_ButtonValidateSettings, (leString*)&string_Validate);
    GeneralSettings_GroupBoxWidget_0->fn->addChild(GeneralSettings_GroupBoxWidget_0, (leWidget*)GeneralSettings_ButtonValidateSettings);

    GeneralSettings_LabelLanguage = leLabelWidget_New();
    GeneralSettings_LabelLanguage->fn->setPosition(GeneralSettings_LabelLanguage, 367, 163);
    GeneralSettings_LabelLanguage->fn->setSize(GeneralSettings_LabelLanguage, 294, 41);
    GeneralSettings_LabelLanguage->fn->setScheme(GeneralSettings_LabelLanguage, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)GeneralSettings_LabelLanguage);

    GeneralSettings_LabelWidget_2_0 = leLabelWidget_New();
    GeneralSettings_LabelWidget_2_0->fn->setPosition(GeneralSettings_LabelWidget_2_0, 369, 224);
    GeneralSettings_LabelWidget_2_0->fn->setSize(GeneralSettings_LabelWidget_2_0, 294, 41);
    GeneralSettings_LabelWidget_2_0->fn->setScheme(GeneralSettings_LabelWidget_2_0, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)GeneralSettings_LabelWidget_2_0);

    GeneralSettings_LabelWidget_2_1 = leLabelWidget_New();
    GeneralSettings_LabelWidget_2_1->fn->setPosition(GeneralSettings_LabelWidget_2_1, 368, 280);
    GeneralSettings_LabelWidget_2_1->fn->setSize(GeneralSettings_LabelWidget_2_1, 294, 41);
    GeneralSettings_LabelWidget_2_1->fn->setScheme(GeneralSettings_LabelWidget_2_1, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)GeneralSettings_LabelWidget_2_1);

    GeneralSettings_PanelWidget_0 = leWidget_New();
    GeneralSettings_PanelWidget_0->fn->setPosition(GeneralSettings_PanelWidget_0, 428, 343);
    GeneralSettings_PanelWidget_0->fn->setSize(GeneralSettings_PanelWidget_0, 144, 32);
    GeneralSettings_PanelWidget_0->fn->setScheme(GeneralSettings_PanelWidget_0, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)GeneralSettings_PanelWidget_0);

    GeneralSettings_TextFieldWidget_0_0_0_6_2 = leTextFieldWidget_New();
    GeneralSettings_TextFieldWidget_0_0_0_6_2->fn->setPosition(GeneralSettings_TextFieldWidget_0_0_0_6_2, 33, 0);
    GeneralSettings_TextFieldWidget_0_0_0_6_2->fn->setSize(GeneralSettings_TextFieldWidget_0_0_0_6_2, 19, 25);
    GeneralSettings_TextFieldWidget_0_0_0_6_2->fn->setScheme(GeneralSettings_TextFieldWidget_0_0_0_6_2, &texfield);
    GeneralSettings_TextFieldWidget_0_0_0_6_2->fn->setHAlignment(GeneralSettings_TextFieldWidget_0_0_0_6_2, LE_HALIGN_LEFT);
    GeneralSettings_TextFieldWidget_0_0_0_6_2->fn->setString(GeneralSettings_TextFieldWidget_0_0_0_6_2, (leString*)&string_ss0);
    GeneralSettings_TextFieldWidget_0_0_0_6_2->fn->setFont(GeneralSettings_TextFieldWidget_0_0_0_6_2, (leFont*)&Roboto_Small);
    GeneralSettings_TextFieldWidget_0_0_0_6_2->fn->setClearValueOnFirstEdit(GeneralSettings_TextFieldWidget_0_0_0_6_2, LE_FALSE);
    GeneralSettings_PanelWidget_0->fn->addChild(GeneralSettings_PanelWidget_0, (leWidget*)GeneralSettings_TextFieldWidget_0_0_0_6_2);

    GeneralSettings_TextFieldWidget_0_0_0_6_2_0 = leTextFieldWidget_New();
    GeneralSettings_TextFieldWidget_0_0_0_6_2_0->fn->setPosition(GeneralSettings_TextFieldWidget_0_0_0_6_2_0, 65, 0);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_0->fn->setSize(GeneralSettings_TextFieldWidget_0_0_0_6_2_0, 19, 25);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_0->fn->setScheme(GeneralSettings_TextFieldWidget_0_0_0_6_2_0, &texfield);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_0->fn->setHAlignment(GeneralSettings_TextFieldWidget_0_0_0_6_2_0, LE_HALIGN_LEFT);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_0->fn->setString(GeneralSettings_TextFieldWidget_0_0_0_6_2_0, (leString*)&string_ss0);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_0->fn->setFont(GeneralSettings_TextFieldWidget_0_0_0_6_2_0, (leFont*)&Roboto_Small);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_0->fn->setClearValueOnFirstEdit(GeneralSettings_TextFieldWidget_0_0_0_6_2_0, LE_FALSE);
    GeneralSettings_PanelWidget_0->fn->addChild(GeneralSettings_PanelWidget_0, (leWidget*)GeneralSettings_TextFieldWidget_0_0_0_6_2_0);

    GeneralSettings_TextFieldWidget_0_0_0_6_2_1 = leTextFieldWidget_New();
    GeneralSettings_TextFieldWidget_0_0_0_6_2_1->fn->setPosition(GeneralSettings_TextFieldWidget_0_0_0_6_2_1, 96, 0);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_1->fn->setSize(GeneralSettings_TextFieldWidget_0_0_0_6_2_1, 19, 25);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_1->fn->setScheme(GeneralSettings_TextFieldWidget_0_0_0_6_2_1, &texfield);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_1->fn->setHAlignment(GeneralSettings_TextFieldWidget_0_0_0_6_2_1, LE_HALIGN_LEFT);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_1->fn->setString(GeneralSettings_TextFieldWidget_0_0_0_6_2_1, (leString*)&string_ss0);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_1->fn->setFont(GeneralSettings_TextFieldWidget_0_0_0_6_2_1, (leFont*)&Roboto_Small);
    GeneralSettings_TextFieldWidget_0_0_0_6_2_1->fn->setClearValueOnFirstEdit(GeneralSettings_TextFieldWidget_0_0_0_6_2_1, LE_FALSE);
    GeneralSettings_PanelWidget_0->fn->addChild(GeneralSettings_PanelWidget_0, (leWidget*)GeneralSettings_TextFieldWidget_0_0_0_6_2_1);

    GeneralSettings_ListWheelWidget_0 = leListWheelWidget_New();
    GeneralSettings_ListWheelWidget_0->fn->setPosition(GeneralSettings_ListWheelWidget_0, 367, 139);
    GeneralSettings_ListWheelWidget_0->fn->setSize(GeneralSettings_ListWheelWidget_0, 297, 87);
    GeneralSettings_ListWheelWidget_0->fn->setVisible(GeneralSettings_ListWheelWidget_0, LE_FALSE);
    GeneralSettings_ListWheelWidget_0->fn->setScheme(GeneralSettings_ListWheelWidget_0, &wheelScheme);
    GeneralSettings_ListWheelWidget_0->fn->setBackgroundType(GeneralSettings_ListWheelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    GeneralSettings_ListWheelWidget_0->fn->setVisibleItemCount(GeneralSettings_ListWheelWidget_0, 3);
    GeneralSettings_ListWheelWidget_0->fn->appendItem(GeneralSettings_ListWheelWidget_0);
    GeneralSettings_ListWheelWidget_0->fn->setItemString(GeneralSettings_ListWheelWidget_0, 0, (leString*)&string_en);
    GeneralSettings_ListWheelWidget_0->fn->appendItem(GeneralSettings_ListWheelWidget_0);
    GeneralSettings_ListWheelWidget_0->fn->setItemString(GeneralSettings_ListWheelWidget_0, 1, (leString*)&string_Default);
    GeneralSettings_ListWheelWidget_0->fn->appendItem(GeneralSettings_ListWheelWidget_0);
    GeneralSettings_ListWheelWidget_0->fn->setItemString(GeneralSettings_ListWheelWidget_0, 2, (leString*)&string_french);
    root0->fn->addChild(root0, (leWidget*)GeneralSettings_ListWheelWidget_0);

    GeneralSettings_RectangleWidget_0 = leRectangleWidget_New();
    GeneralSettings_RectangleWidget_0->fn->setPosition(GeneralSettings_RectangleWidget_0, 30, 19);
    GeneralSettings_RectangleWidget_0->fn->setSize(GeneralSettings_RectangleWidget_0, 100, 56);
    GeneralSettings_RectangleWidget_0->fn->setScheme(GeneralSettings_RectangleWidget_0, &selector);
    GeneralSettings_RectangleWidget_0->fn->setBackgroundType(GeneralSettings_RectangleWidget_0, LE_WIDGET_BACKGROUND_NONE);
    GeneralSettings_RectangleWidget_0->fn->setBorderType(GeneralSettings_RectangleWidget_0, LE_WIDGET_BORDER_NONE);
    GeneralSettings_RectangleWidget_0->fn->setThickness(GeneralSettings_RectangleWidget_0, 2);
    root0->fn->addChild(root0, (leWidget*)GeneralSettings_RectangleWidget_0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_GeneralSettings(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_GeneralSettings(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    GeneralSettings_Panel_0 = NULL;
    GeneralSettings_LabelWidget_0 = NULL;
    GeneralSettings_GroupBoxWidget_0 = NULL;
    GeneralSettings_LabelLanguage = NULL;
    GeneralSettings_LabelWidget_2_0 = NULL;
    GeneralSettings_LabelWidget_2_1 = NULL;
    GeneralSettings_PanelWidget_0 = NULL;
    GeneralSettings_ListWheelWidget_0 = NULL;
    GeneralSettings_RectangleWidget_0 = NULL;
    GeneralSettings_ButtonBackGeneral = NULL;
    GeneralSettings_ScreenbrightLabel = NULL;
    GeneralSettings_UIDlabel = NULL;
    GeneralSettings_FirmwareLabel = NULL;
    GeneralSettings_LanguageLabel = NULL;
    GeneralSettings_ButtonValidateSettings = NULL;
    GeneralSettings_TextFieldWidget_0_0_0_6_2 = NULL;
    GeneralSettings_TextFieldWidget_0_0_0_6_2_0 = NULL;
    GeneralSettings_TextFieldWidget_0_0_0_6_2_1 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_GeneralSettings(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_GeneralSettings(uint32_t lyrIdx)
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

