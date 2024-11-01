#include "gfx/legato/generated/screen/le_gen_screen_AddChannel.h"

// screen member widget declarations
static leWidget* root0;

leWidget* AddChannel_Panel_Channel;
leLabelWidget* AddChannel_TitleChannel;
leButtonWidget* AddChannel_HomeButton;
leButtonWidget* AddChannel_BackButtonChanne;
leGroupBoxWidget* AddChannel_Channel_part1;
leGroupBoxWidget* AddChannel_Channel_part2;
leRectangleWidget* AddChannel_RectangleWidget_0;
leLabelWidget* AddChannel_Channel;
leLabelWidget* AddChannel_ModeTitle;
leLabelWidget* AddChannel_CurrentTittle;
leLabelWidget* AddChannel_TriggerTittle;
leLabelWidget* AddChannel_LabelWidget_channel;
leLabelWidget* AddChannel_LabelWidget_mode;
leLabelWidget* AddChannel_LabelWidget_trigger;
leWidget* AddChannel_PanelWidget_current;
leLabelWidget* AddChannel_LabelWidget_unite;
leLabelWidget* AddChannel_LabelWidget_current;
leListWidget* AddChannel_ListWidget_0;
leListWidget* AddChannel_ListWidget_1;
leListWidget* AddChannel_ListWidget_2;
leListWidget* AddChannel_ListWidget_3;
leCheckBoxWidget* AddChannel_CheckBoxWidget_0;
leWidget* AddChannel_PanelWidget_1;
leCheckBoxWidget* AddChannel_CheckBoxWidget_1;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_6_0;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_6_1;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_6_2;
leLabelWidget* AddChannel_SartTitle;
leWidget* AddChannel_PanelWidget_0_4;
leLabelWidget* AddChannel_frequencyTitle;
leLabelWidget* AddChannel_TimeOnTitle;
leLabelWidget* AddChannel_pulsefeqTitle;
leLabelWidget* AddChannel_NumSeqTitle;
leLabelWidget* AddChannel_delayBetTitle;
leWidget* AddChannel_PanelWidget_0_0;
leWidget* AddChannel_PanelWidget_0_1;
leWidget* AddChannel_PanelWidget_0_2;
leWidget* AddChannel_PanelWidget_0_3;
leWidget* AddChannel_PanelWidget_0;
leTextFieldWidget* AddChannel_TextFieldWidget_0;
leTextFieldWidget* AddChannel_TextFieldWidget_1;
leTextFieldWidget* AddChannel_TextFieldWidget_2;
leTextFieldWidget* AddChannel_TextFieldWidget_3;
leTextFieldWidget* AddChannel_TextFieldWidget_4;
leTextFieldWidget* AddChannel_TextFieldWidget_5;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_5;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_4;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_3;
leLabelWidget* AddChannel_LabelWidget_1;
leLabelWidget* AddChannel_LabelWidget_1_0;
leLabelWidget* AddChannel_LabelWidget_1_0_0;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0;
leTextFieldWidget* AddChannel_TextFieldWidget_0_1;
leTextFieldWidget* AddChannel_TextFieldWidget_0_2;
leTextFieldWidget* AddChannel_TextFieldWidget_0_3;
leTextFieldWidget* AddChannel_TextFieldWidget_0_4;
leLabelWidget* AddChannel_LabelWidget_1_1;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_1;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_2;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_3;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_4;
leLabelWidget* AddChannel_LabelWidget_1_1_0;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_6;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_5;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_13;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_12;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_14;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_7;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_8;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_9;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_10;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_11;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_0;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_1;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_2;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_3;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_4;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_0;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_1;
leTextFieldWidget* AddChannel_TextFieldWidget_0_0_0_15_2;
leLabelWidget* AddChannel_LabelWidget_1_2;
leLabelWidget* AddChannel_LabelWidget_1_3;
leLabelWidget* AddChannel_LabelWidget_1_2_0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_AddChannel(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_AddChannel(void)
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

    AddChannel_Panel_Channel = leWidget_New();
    AddChannel_Panel_Channel->fn->setPosition(AddChannel_Panel_Channel, -1, 0);
    AddChannel_Panel_Channel->fn->setSize(AddChannel_Panel_Channel, 800, 480);
    AddChannel_Panel_Channel->fn->setScheme(AddChannel_Panel_Channel, &running);
    root0->fn->addChild(root0, (leWidget*)AddChannel_Panel_Channel);

    AddChannel_TitleChannel = leLabelWidget_New();
    AddChannel_TitleChannel->fn->setPosition(AddChannel_TitleChannel, 207, 16);
    AddChannel_TitleChannel->fn->setSize(AddChannel_TitleChannel, 374, 37);
    AddChannel_TitleChannel->fn->setScheme(AddChannel_TitleChannel, &BlackBackground);
    AddChannel_TitleChannel->fn->setBackgroundType(AddChannel_TitleChannel, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_TitleChannel->fn->setHAlignment(AddChannel_TitleChannel, LE_HALIGN_CENTER);
    AddChannel_TitleChannel->fn->setString(AddChannel_TitleChannel, (leString*)&string_AddChannel);
    root0->fn->addChild(root0, (leWidget*)AddChannel_TitleChannel);

    AddChannel_HomeButton = leButtonWidget_New();
    AddChannel_HomeButton->fn->setPosition(AddChannel_HomeButton, 444, 437);
    AddChannel_HomeButton->fn->setScheme(AddChannel_HomeButton, &Tvalidate);
    AddChannel_HomeButton->fn->setString(AddChannel_HomeButton, (leString*)&string_Validate);
    root0->fn->addChild(root0, (leWidget*)AddChannel_HomeButton);

    AddChannel_BackButtonChanne = leButtonWidget_New();
    AddChannel_BackButtonChanne->fn->setPosition(AddChannel_BackButtonChanne, 555, 437);
    AddChannel_BackButtonChanne->fn->setScheme(AddChannel_BackButtonChanne, &Tvalidate);
    AddChannel_BackButtonChanne->fn->setString(AddChannel_BackButtonChanne, (leString*)&string_Back);
    root0->fn->addChild(root0, (leWidget*)AddChannel_BackButtonChanne);

    AddChannel_Channel_part1 = leGroupBoxWidget_New();
    AddChannel_Channel_part1->fn->setPosition(AddChannel_Channel_part1, 33, 78);
    AddChannel_Channel_part1->fn->setSize(AddChannel_Channel_part1, 341, 389);
    AddChannel_Channel_part1->fn->setScheme(AddChannel_Channel_part1, &lightBlackBackground);
    AddChannel_Channel_part1->fn->setBorderType(AddChannel_Channel_part1, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)AddChannel_Channel_part1);

    AddChannel_Channel_part2 = leGroupBoxWidget_New();
    AddChannel_Channel_part2->fn->setPosition(AddChannel_Channel_part2, 409, 78);
    AddChannel_Channel_part2->fn->setSize(AddChannel_Channel_part2, 355, 346);
    AddChannel_Channel_part2->fn->setScheme(AddChannel_Channel_part2, &lightBlackBackground);
    AddChannel_Channel_part2->fn->setBorderType(AddChannel_Channel_part2, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)AddChannel_Channel_part2);

    AddChannel_RectangleWidget_0 = leRectangleWidget_New();
    AddChannel_RectangleWidget_0->fn->setPosition(AddChannel_RectangleWidget_0, 23, 13);
    AddChannel_RectangleWidget_0->fn->setSize(AddChannel_RectangleWidget_0, 100, 51);
    AddChannel_RectangleWidget_0->fn->setScheme(AddChannel_RectangleWidget_0, &selector);
    AddChannel_RectangleWidget_0->fn->setBackgroundType(AddChannel_RectangleWidget_0, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_RectangleWidget_0->fn->setBorderType(AddChannel_RectangleWidget_0, LE_WIDGET_BORDER_NONE);
    AddChannel_RectangleWidget_0->fn->setThickness(AddChannel_RectangleWidget_0, 2);
    root0->fn->addChild(root0, (leWidget*)AddChannel_RectangleWidget_0);

    AddChannel_Channel = leLabelWidget_New();
    AddChannel_Channel->fn->setPosition(AddChannel_Channel, 50, 109);
    AddChannel_Channel->fn->setScheme(AddChannel_Channel, &BlackBackground);
    AddChannel_Channel->fn->setBackgroundType(AddChannel_Channel, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_Channel->fn->setString(AddChannel_Channel, (leString*)&string_Channel);
    root0->fn->addChild(root0, (leWidget*)AddChannel_Channel);

    AddChannel_ModeTitle = leLabelWidget_New();
    AddChannel_ModeTitle->fn->setPosition(AddChannel_ModeTitle, 53, 165);
    AddChannel_ModeTitle->fn->setScheme(AddChannel_ModeTitle, &BlackBackground);
    AddChannel_ModeTitle->fn->setBackgroundType(AddChannel_ModeTitle, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_ModeTitle->fn->setString(AddChannel_ModeTitle, (leString*)&string_Mode);
    root0->fn->addChild(root0, (leWidget*)AddChannel_ModeTitle);

    AddChannel_CurrentTittle = leLabelWidget_New();
    AddChannel_CurrentTittle->fn->setPosition(AddChannel_CurrentTittle, 52, 223);
    AddChannel_CurrentTittle->fn->setScheme(AddChannel_CurrentTittle, &BlackBackground);
    AddChannel_CurrentTittle->fn->setBackgroundType(AddChannel_CurrentTittle, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_CurrentTittle->fn->setString(AddChannel_CurrentTittle, (leString*)&string_Current);
    root0->fn->addChild(root0, (leWidget*)AddChannel_CurrentTittle);

    AddChannel_TriggerTittle = leLabelWidget_New();
    AddChannel_TriggerTittle->fn->setPosition(AddChannel_TriggerTittle, 50, 322);
    AddChannel_TriggerTittle->fn->setScheme(AddChannel_TriggerTittle, &BlackBackground);
    AddChannel_TriggerTittle->fn->setBackgroundType(AddChannel_TriggerTittle, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_TriggerTittle->fn->setString(AddChannel_TriggerTittle, (leString*)&string_Trigger);
    root0->fn->addChild(root0, (leWidget*)AddChannel_TriggerTittle);

    AddChannel_LabelWidget_channel = leLabelWidget_New();
    AddChannel_LabelWidget_channel->fn->setPosition(AddChannel_LabelWidget_channel, 134, 102);
    AddChannel_LabelWidget_channel->fn->setSize(AddChannel_LabelWidget_channel, 193, 39);
    AddChannel_LabelWidget_channel->fn->setScheme(AddChannel_LabelWidget_channel, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)AddChannel_LabelWidget_channel);

    AddChannel_LabelWidget_mode = leLabelWidget_New();
    AddChannel_LabelWidget_mode->fn->setPosition(AddChannel_LabelWidget_mode, 132, 159);
    AddChannel_LabelWidget_mode->fn->setSize(AddChannel_LabelWidget_mode, 193, 39);
    AddChannel_LabelWidget_mode->fn->setScheme(AddChannel_LabelWidget_mode, &BlackBackground);
    AddChannel_LabelWidget_mode->fn->setString(AddChannel_LabelWidget_mode, (leString*)&string_current1);
    root0->fn->addChild(root0, (leWidget*)AddChannel_LabelWidget_mode);

    AddChannel_LabelWidget_trigger = leLabelWidget_New();
    AddChannel_LabelWidget_trigger->fn->setPosition(AddChannel_LabelWidget_trigger, 133, 319);
    AddChannel_LabelWidget_trigger->fn->setSize(AddChannel_LabelWidget_trigger, 193, 39);
    AddChannel_LabelWidget_trigger->fn->setScheme(AddChannel_LabelWidget_trigger, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)AddChannel_LabelWidget_trigger);

    AddChannel_PanelWidget_current = leWidget_New();
    AddChannel_PanelWidget_current->fn->setPosition(AddChannel_PanelWidget_current, 135, 280);
    AddChannel_PanelWidget_current->fn->setSize(AddChannel_PanelWidget_current, 191, 29);
    AddChannel_PanelWidget_current->fn->setScheme(AddChannel_PanelWidget_current, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)AddChannel_PanelWidget_current);

    AddChannel_TextFieldWidget_0_0_0_6_0 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_6_0->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_6_0, 50, 1);
    AddChannel_TextFieldWidget_0_0_0_6_0->fn->setSize(AddChannel_TextFieldWidget_0_0_0_6_0, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_6_0->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_6_0, &texfield);
    AddChannel_TextFieldWidget_0_0_0_6_0->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_6_0, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_6_0->fn->setString(AddChannel_TextFieldWidget_0_0_0_6_0, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_6_0->fn->setFont(AddChannel_TextFieldWidget_0_0_0_6_0, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_6_0->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_6_0, LE_FALSE);
    AddChannel_PanelWidget_current->fn->addChild(AddChannel_PanelWidget_current, (leWidget*)AddChannel_TextFieldWidget_0_0_0_6_0);

    AddChannel_TextFieldWidget_0_0_0_6_1 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_6_1->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_6_1, 74, 1);
    AddChannel_TextFieldWidget_0_0_0_6_1->fn->setSize(AddChannel_TextFieldWidget_0_0_0_6_1, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_6_1->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_6_1, &texfield);
    AddChannel_TextFieldWidget_0_0_0_6_1->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_6_1, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_6_1->fn->setString(AddChannel_TextFieldWidget_0_0_0_6_1, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_6_1->fn->setFont(AddChannel_TextFieldWidget_0_0_0_6_1, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_6_1->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_6_1, LE_FALSE);
    AddChannel_PanelWidget_current->fn->addChild(AddChannel_PanelWidget_current, (leWidget*)AddChannel_TextFieldWidget_0_0_0_6_1);

    AddChannel_TextFieldWidget_0_0_0_6_2 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_6_2->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_6_2, 99, 1);
    AddChannel_TextFieldWidget_0_0_0_6_2->fn->setSize(AddChannel_TextFieldWidget_0_0_0_6_2, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_6_2->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_6_2, &texfield);
    AddChannel_TextFieldWidget_0_0_0_6_2->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_6_2, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_6_2->fn->setString(AddChannel_TextFieldWidget_0_0_0_6_2, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_6_2->fn->setFont(AddChannel_TextFieldWidget_0_0_0_6_2, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_6_2->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_6_2, LE_FALSE);
    AddChannel_PanelWidget_current->fn->addChild(AddChannel_PanelWidget_current, (leWidget*)AddChannel_TextFieldWidget_0_0_0_6_2);

    AddChannel_LabelWidget_unite = leLabelWidget_New();
    AddChannel_LabelWidget_unite->fn->setPosition(AddChannel_LabelWidget_unite, 270, 286);
    AddChannel_LabelWidget_unite->fn->setSize(AddChannel_LabelWidget_unite, 31, 18);
    AddChannel_LabelWidget_unite->fn->setScheme(AddChannel_LabelWidget_unite, &BlackBackground);
    AddChannel_LabelWidget_unite->fn->setString(AddChannel_LabelWidget_unite, (leString*)&string_mA);
    root0->fn->addChild(root0, (leWidget*)AddChannel_LabelWidget_unite);

    AddChannel_LabelWidget_current = leLabelWidget_New();
    AddChannel_LabelWidget_current->fn->setPosition(AddChannel_LabelWidget_current, 132, 222);
    AddChannel_LabelWidget_current->fn->setSize(AddChannel_LabelWidget_current, 193, 39);
    AddChannel_LabelWidget_current->fn->setScheme(AddChannel_LabelWidget_current, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)AddChannel_LabelWidget_current);

    AddChannel_ListWidget_0 = leListWidget_New();
    AddChannel_ListWidget_0->fn->setPosition(AddChannel_ListWidget_0, 132, 107);
    AddChannel_ListWidget_0->fn->setSize(AddChannel_ListWidget_0, 191, 130);
    AddChannel_ListWidget_0->fn->setVisible(AddChannel_ListWidget_0, LE_FALSE);
    AddChannel_ListWidget_0->fn->setMargins(AddChannel_ListWidget_0, 4, 4, 2, 1);
    AddChannel_ListWidget_0->fn->appendItem(AddChannel_ListWidget_0);
    AddChannel_ListWidget_0->fn->setItemString(AddChannel_ListWidget_0, 0, (leString*)&string_ch1);
    AddChannel_ListWidget_0->fn->appendItem(AddChannel_ListWidget_0);
    AddChannel_ListWidget_0->fn->setItemString(AddChannel_ListWidget_0, 1, (leString*)&string_ch2);
    AddChannel_ListWidget_0->fn->appendItem(AddChannel_ListWidget_0);
    AddChannel_ListWidget_0->fn->setItemString(AddChannel_ListWidget_0, 2, (leString*)&string_ch3);
    AddChannel_ListWidget_0->fn->appendItem(AddChannel_ListWidget_0);
    AddChannel_ListWidget_0->fn->setItemString(AddChannel_ListWidget_0, 3, (leString*)&string_ch4);
    root0->fn->addChild(root0, (leWidget*)AddChannel_ListWidget_0);

    AddChannel_ListWidget_1 = leListWidget_New();
    AddChannel_ListWidget_1->fn->setPosition(AddChannel_ListWidget_1, 131, 162);
    AddChannel_ListWidget_1->fn->setSize(AddChannel_ListWidget_1, 191, 154);
    AddChannel_ListWidget_1->fn->setVisible(AddChannel_ListWidget_1, LE_FALSE);
    AddChannel_ListWidget_1->fn->appendItem(AddChannel_ListWidget_1);
    AddChannel_ListWidget_1->fn->setItemString(AddChannel_ListWidget_1, 0, (leString*)&string_mode0);
    AddChannel_ListWidget_1->fn->appendItem(AddChannel_ListWidget_1);
    AddChannel_ListWidget_1->fn->setItemString(AddChannel_ListWidget_1, 1, (leString*)&string_mode1);
    AddChannel_ListWidget_1->fn->appendItem(AddChannel_ListWidget_1);
    AddChannel_ListWidget_1->fn->setItemString(AddChannel_ListWidget_1, 2, (leString*)&string_mode2);
    AddChannel_ListWidget_1->fn->appendItem(AddChannel_ListWidget_1);
    AddChannel_ListWidget_1->fn->setItemString(AddChannel_ListWidget_1, 3, (leString*)&string_mode3);
    AddChannel_ListWidget_1->fn->appendItem(AddChannel_ListWidget_1);
    AddChannel_ListWidget_1->fn->setItemString(AddChannel_ListWidget_1, 4, (leString*)&string_mode4);
    root0->fn->addChild(root0, (leWidget*)AddChannel_ListWidget_1);

    AddChannel_ListWidget_2 = leListWidget_New();
    AddChannel_ListWidget_2->fn->setPosition(AddChannel_ListWidget_2, 129, 230);
    AddChannel_ListWidget_2->fn->setSize(AddChannel_ListWidget_2, 192, 85);
    AddChannel_ListWidget_2->fn->setVisible(AddChannel_ListWidget_2, LE_FALSE);
    AddChannel_ListWidget_2->fn->appendItem(AddChannel_ListWidget_2);
    AddChannel_ListWidget_2->fn->setItemString(AddChannel_ListWidget_2, 0, (leString*)&string_current1);
    AddChannel_ListWidget_2->fn->appendItem(AddChannel_ListWidget_2);
    AddChannel_ListWidget_2->fn->setItemString(AddChannel_ListWidget_2, 1, (leString*)&string_current2);
    AddChannel_ListWidget_2->fn->appendItem(AddChannel_ListWidget_2);
    AddChannel_ListWidget_2->fn->setItemString(AddChannel_ListWidget_2, 2, (leString*)&string_current3);
    root0->fn->addChild(root0, (leWidget*)AddChannel_ListWidget_2);

    AddChannel_ListWidget_3 = leListWidget_New();
    AddChannel_ListWidget_3->fn->setPosition(AddChannel_ListWidget_3, 134, 319);
    AddChannel_ListWidget_3->fn->setSize(AddChannel_ListWidget_3, 197, 100);
    AddChannel_ListWidget_3->fn->setVisible(AddChannel_ListWidget_3, LE_FALSE);
    AddChannel_ListWidget_3->fn->appendItem(AddChannel_ListWidget_3);
    AddChannel_ListWidget_3->fn->setItemString(AddChannel_ListWidget_3, 0, (leString*)&string_trigger1);
    AddChannel_ListWidget_3->fn->appendItem(AddChannel_ListWidget_3);
    AddChannel_ListWidget_3->fn->setItemString(AddChannel_ListWidget_3, 1, (leString*)&string_trigger2);
    AddChannel_ListWidget_3->fn->appendItem(AddChannel_ListWidget_3);
    AddChannel_ListWidget_3->fn->setItemString(AddChannel_ListWidget_3, 2, (leString*)&string_trigger3);
    root0->fn->addChild(root0, (leWidget*)AddChannel_ListWidget_3);

    AddChannel_CheckBoxWidget_0 = leCheckBoxWidget_New();
    AddChannel_CheckBoxWidget_0->fn->setPosition(AddChannel_CheckBoxWidget_0, 118, 399);
    AddChannel_CheckBoxWidget_0->fn->setSize(AddChannel_CheckBoxWidget_0, 210, 33);
    AddChannel_CheckBoxWidget_0->fn->setScheme(AddChannel_CheckBoxWidget_0, &RadioButton);
    AddChannel_CheckBoxWidget_0->fn->setString(AddChannel_CheckBoxWidget_0, (leString*)&string_TTLOUTPUT);
    root0->fn->addChild(root0, (leWidget*)AddChannel_CheckBoxWidget_0);

    AddChannel_PanelWidget_1 = leWidget_New();
    AddChannel_PanelWidget_1->fn->setPosition(AddChannel_PanelWidget_1, 430, 94);
    AddChannel_PanelWidget_1->fn->setSize(AddChannel_PanelWidget_1, 326, 319);
    AddChannel_PanelWidget_1->fn->setVisible(AddChannel_PanelWidget_1, LE_FALSE);
    AddChannel_PanelWidget_1->fn->setBackgroundType(AddChannel_PanelWidget_1, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)AddChannel_PanelWidget_1);

    AddChannel_SartTitle = leLabelWidget_New();
    AddChannel_SartTitle->fn->setPosition(AddChannel_SartTitle, 2, 20);
    AddChannel_SartTitle->fn->setScheme(AddChannel_SartTitle, &BlackBackground);
    AddChannel_SartTitle->fn->setBackgroundType(AddChannel_SartTitle, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_SartTitle->fn->setString(AddChannel_SartTitle, (leString*)&string_SartDelay);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_SartTitle);

    AddChannel_PanelWidget_0_4 = leWidget_New();
    AddChannel_PanelWidget_0_4->fn->setPosition(AddChannel_PanelWidget_0_4, 118, 14);
    AddChannel_PanelWidget_0_4->fn->setSize(AddChannel_PanelWidget_0_4, 189, 30);
    AddChannel_PanelWidget_0_4->fn->setScheme(AddChannel_PanelWidget_0_4, &BlackBackground);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_PanelWidget_0_4);

    AddChannel_TextFieldWidget_0 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0->fn->setPosition(AddChannel_TextFieldWidget_0, 4, 0);
    AddChannel_TextFieldWidget_0->fn->setSize(AddChannel_TextFieldWidget_0, 19, 25);
    AddChannel_TextFieldWidget_0->fn->setScheme(AddChannel_TextFieldWidget_0, &texfield);
    AddChannel_TextFieldWidget_0->fn->setHAlignment(AddChannel_TextFieldWidget_0, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0->fn->setString(AddChannel_TextFieldWidget_0, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0->fn->setFont(AddChannel_TextFieldWidget_0, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0, LE_FALSE);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_TextFieldWidget_0);

    AddChannel_TextFieldWidget_1 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_1->fn->setPosition(AddChannel_TextFieldWidget_1, 22, 0);
    AddChannel_TextFieldWidget_1->fn->setSize(AddChannel_TextFieldWidget_1, 19, 25);
    AddChannel_TextFieldWidget_1->fn->setScheme(AddChannel_TextFieldWidget_1, &texfield);
    AddChannel_TextFieldWidget_1->fn->setHAlignment(AddChannel_TextFieldWidget_1, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_1->fn->setString(AddChannel_TextFieldWidget_1, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_1->fn->setFont(AddChannel_TextFieldWidget_1, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_1->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_1, LE_FALSE);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_TextFieldWidget_1);

    AddChannel_TextFieldWidget_2 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_2->fn->setPosition(AddChannel_TextFieldWidget_2, 49, 0);
    AddChannel_TextFieldWidget_2->fn->setSize(AddChannel_TextFieldWidget_2, 19, 25);
    AddChannel_TextFieldWidget_2->fn->setScheme(AddChannel_TextFieldWidget_2, &texfield);
    AddChannel_TextFieldWidget_2->fn->setHAlignment(AddChannel_TextFieldWidget_2, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_2->fn->setString(AddChannel_TextFieldWidget_2, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_2->fn->setFont(AddChannel_TextFieldWidget_2, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_2->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_2, LE_FALSE);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_TextFieldWidget_2);

    AddChannel_TextFieldWidget_3 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_3->fn->setPosition(AddChannel_TextFieldWidget_3, 66, 0);
    AddChannel_TextFieldWidget_3->fn->setSize(AddChannel_TextFieldWidget_3, 19, 25);
    AddChannel_TextFieldWidget_3->fn->setScheme(AddChannel_TextFieldWidget_3, &texfield);
    AddChannel_TextFieldWidget_3->fn->setHAlignment(AddChannel_TextFieldWidget_3, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_3->fn->setString(AddChannel_TextFieldWidget_3, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_3->fn->setFont(AddChannel_TextFieldWidget_3, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_3->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_3, LE_FALSE);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_TextFieldWidget_3);

    AddChannel_TextFieldWidget_4 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_4->fn->setPosition(AddChannel_TextFieldWidget_4, 94, 0);
    AddChannel_TextFieldWidget_4->fn->setSize(AddChannel_TextFieldWidget_4, 18, 25);
    AddChannel_TextFieldWidget_4->fn->setScheme(AddChannel_TextFieldWidget_4, &texfield);
    AddChannel_TextFieldWidget_4->fn->setHAlignment(AddChannel_TextFieldWidget_4, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_4->fn->setString(AddChannel_TextFieldWidget_4, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_4->fn->setFont(AddChannel_TextFieldWidget_4, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_4->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_4, LE_FALSE);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_TextFieldWidget_4);

    AddChannel_TextFieldWidget_5 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_5->fn->setPosition(AddChannel_TextFieldWidget_5, 110, 0);
    AddChannel_TextFieldWidget_5->fn->setSize(AddChannel_TextFieldWidget_5, 19, 25);
    AddChannel_TextFieldWidget_5->fn->setScheme(AddChannel_TextFieldWidget_5, &texfield);
    AddChannel_TextFieldWidget_5->fn->setHAlignment(AddChannel_TextFieldWidget_5, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_5->fn->setString(AddChannel_TextFieldWidget_5, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_5->fn->setFont(AddChannel_TextFieldWidget_5, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_5->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_5, LE_FALSE);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_TextFieldWidget_5);

    AddChannel_TextFieldWidget_0_0_0_15_5 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_15_5->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_15_5, 135, 0);
    AddChannel_TextFieldWidget_0_0_0_15_5->fn->setSize(AddChannel_TextFieldWidget_0_0_0_15_5, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_15_5->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_15_5, &texfield);
    AddChannel_TextFieldWidget_0_0_0_15_5->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_15_5, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_15_5->fn->setString(AddChannel_TextFieldWidget_0_0_0_15_5, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_15_5->fn->setFont(AddChannel_TextFieldWidget_0_0_0_15_5, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_15_5->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_15_5, LE_FALSE);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_TextFieldWidget_0_0_0_15_5);

    AddChannel_TextFieldWidget_0_0_0_15_4 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_15_4->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_15_4, 151, 0);
    AddChannel_TextFieldWidget_0_0_0_15_4->fn->setSize(AddChannel_TextFieldWidget_0_0_0_15_4, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_15_4->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_15_4, &texfield);
    AddChannel_TextFieldWidget_0_0_0_15_4->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_15_4, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_15_4->fn->setString(AddChannel_TextFieldWidget_0_0_0_15_4, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_15_4->fn->setFont(AddChannel_TextFieldWidget_0_0_0_15_4, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_15_4->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_15_4, LE_FALSE);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_TextFieldWidget_0_0_0_15_4);

    AddChannel_TextFieldWidget_0_0_0_15_3 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_15_3->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_15_3, 167, 0);
    AddChannel_TextFieldWidget_0_0_0_15_3->fn->setSize(AddChannel_TextFieldWidget_0_0_0_15_3, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_15_3->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_15_3, &texfield);
    AddChannel_TextFieldWidget_0_0_0_15_3->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_15_3, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_15_3->fn->setString(AddChannel_TextFieldWidget_0_0_0_15_3, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_15_3->fn->setFont(AddChannel_TextFieldWidget_0_0_0_15_3, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_15_3->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_15_3, LE_FALSE);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_TextFieldWidget_0_0_0_15_3);

    AddChannel_LabelWidget_1 = leLabelWidget_New();
    AddChannel_LabelWidget_1->fn->setPosition(AddChannel_LabelWidget_1, 38, 1);
    AddChannel_LabelWidget_1->fn->setSize(AddChannel_LabelWidget_1, 13, 21);
    AddChannel_LabelWidget_1->fn->setScheme(AddChannel_LabelWidget_1, &BlackBackground);
    AddChannel_LabelWidget_1->fn->setString(AddChannel_LabelWidget_1, (leString*)&string_twopoint);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_LabelWidget_1);

    AddChannel_LabelWidget_1_0 = leLabelWidget_New();
    AddChannel_LabelWidget_1_0->fn->setPosition(AddChannel_LabelWidget_1_0, 83, 1);
    AddChannel_LabelWidget_1_0->fn->setSize(AddChannel_LabelWidget_1_0, 13, 21);
    AddChannel_LabelWidget_1_0->fn->setScheme(AddChannel_LabelWidget_1_0, &BlackBackground);
    AddChannel_LabelWidget_1_0->fn->setString(AddChannel_LabelWidget_1_0, (leString*)&string_twopoint);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_LabelWidget_1_0);

    AddChannel_LabelWidget_1_0_0 = leLabelWidget_New();
    AddChannel_LabelWidget_1_0_0->fn->setPosition(AddChannel_LabelWidget_1_0_0, 124, 1);
    AddChannel_LabelWidget_1_0_0->fn->setSize(AddChannel_LabelWidget_1_0_0, 13, 21);
    AddChannel_LabelWidget_1_0_0->fn->setScheme(AddChannel_LabelWidget_1_0_0, &BlackBackground);
    AddChannel_LabelWidget_1_0_0->fn->setString(AddChannel_LabelWidget_1_0_0, (leString*)&string_twopoint);
    AddChannel_PanelWidget_0_4->fn->addChild(AddChannel_PanelWidget_0_4, (leWidget*)AddChannel_LabelWidget_1_0_0);

    AddChannel_frequencyTitle = leLabelWidget_New();
    AddChannel_frequencyTitle->fn->setPosition(AddChannel_frequencyTitle, 0, 71);
    AddChannel_frequencyTitle->fn->setScheme(AddChannel_frequencyTitle, &BlackBackground);
    AddChannel_frequencyTitle->fn->setBackgroundType(AddChannel_frequencyTitle, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_frequencyTitle->fn->setString(AddChannel_frequencyTitle, (leString*)&string_Frequency);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_frequencyTitle);

    AddChannel_TimeOnTitle = leLabelWidget_New();
    AddChannel_TimeOnTitle->fn->setPosition(AddChannel_TimeOnTitle, 0, 124);
    AddChannel_TimeOnTitle->fn->setScheme(AddChannel_TimeOnTitle, &BlackBackground);
    AddChannel_TimeOnTitle->fn->setBackgroundType(AddChannel_TimeOnTitle, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_TimeOnTitle->fn->setString(AddChannel_TimeOnTitle, (leString*)&string_TimeOn);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_TimeOnTitle);

    AddChannel_pulsefeqTitle = leLabelWidget_New();
    AddChannel_pulsefeqTitle->fn->setPosition(AddChannel_pulsefeqTitle, -4, 177);
    AddChannel_pulsefeqTitle->fn->setSize(AddChannel_pulsefeqTitle, 100, 23);
    AddChannel_pulsefeqTitle->fn->setScheme(AddChannel_pulsefeqTitle, &BlackBackground);
    AddChannel_pulsefeqTitle->fn->setBackgroundType(AddChannel_pulsefeqTitle, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_pulsefeqTitle->fn->setString(AddChannel_pulsefeqTitle, (leString*)&string_PULSESEQ);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_pulsefeqTitle);

    AddChannel_NumSeqTitle = leLabelWidget_New();
    AddChannel_NumSeqTitle->fn->setPosition(AddChannel_NumSeqTitle, -3, 229);
    AddChannel_NumSeqTitle->fn->setScheme(AddChannel_NumSeqTitle, &BlackBackground);
    AddChannel_NumSeqTitle->fn->setBackgroundType(AddChannel_NumSeqTitle, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_NumSeqTitle->fn->setString(AddChannel_NumSeqTitle, (leString*)&string_NumofSeq);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_NumSeqTitle);

    AddChannel_delayBetTitle = leLabelWidget_New();
    AddChannel_delayBetTitle->fn->setPosition(AddChannel_delayBetTitle, -13, 276);
    AddChannel_delayBetTitle->fn->setSize(AddChannel_delayBetTitle, 120, 25);
    AddChannel_delayBetTitle->fn->setScheme(AddChannel_delayBetTitle, &BlackBackground);
    AddChannel_delayBetTitle->fn->setBackgroundType(AddChannel_delayBetTitle, LE_WIDGET_BACKGROUND_NONE);
    AddChannel_delayBetTitle->fn->setString(AddChannel_delayBetTitle, (leString*)&string_DelayBetSequence);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_delayBetTitle);

    AddChannel_PanelWidget_0_0 = leWidget_New();
    AddChannel_PanelWidget_0_0->fn->setPosition(AddChannel_PanelWidget_0_0, 117, 70);
    AddChannel_PanelWidget_0_0->fn->setSize(AddChannel_PanelWidget_0_0, 189, 27);
    AddChannel_PanelWidget_0_0->fn->setScheme(AddChannel_PanelWidget_0_0, &BlackBackground);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_PanelWidget_0_0);

    AddChannel_TextFieldWidget_0_0 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0->fn->setPosition(AddChannel_TextFieldWidget_0_0, 26, 0);
    AddChannel_TextFieldWidget_0_0->fn->setSize(AddChannel_TextFieldWidget_0_0, 19, 25);
    AddChannel_TextFieldWidget_0_0->fn->setScheme(AddChannel_TextFieldWidget_0_0, &texfield);
    AddChannel_TextFieldWidget_0_0->fn->setHAlignment(AddChannel_TextFieldWidget_0_0, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0->fn->setString(AddChannel_TextFieldWidget_0_0, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0->fn->setFont(AddChannel_TextFieldWidget_0_0, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0, LE_FALSE);
    AddChannel_PanelWidget_0_0->fn->addChild(AddChannel_PanelWidget_0_0, (leWidget*)AddChannel_TextFieldWidget_0_0);

    AddChannel_TextFieldWidget_0_1 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_1->fn->setPosition(AddChannel_TextFieldWidget_0_1, 46, 0);
    AddChannel_TextFieldWidget_0_1->fn->setSize(AddChannel_TextFieldWidget_0_1, 19, 25);
    AddChannel_TextFieldWidget_0_1->fn->setScheme(AddChannel_TextFieldWidget_0_1, &texfield);
    AddChannel_TextFieldWidget_0_1->fn->setHAlignment(AddChannel_TextFieldWidget_0_1, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_1->fn->setString(AddChannel_TextFieldWidget_0_1, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_1->fn->setFont(AddChannel_TextFieldWidget_0_1, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_1->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_1, LE_FALSE);
    AddChannel_PanelWidget_0_0->fn->addChild(AddChannel_PanelWidget_0_0, (leWidget*)AddChannel_TextFieldWidget_0_1);

    AddChannel_TextFieldWidget_0_2 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_2->fn->setPosition(AddChannel_TextFieldWidget_0_2, 66, 0);
    AddChannel_TextFieldWidget_0_2->fn->setSize(AddChannel_TextFieldWidget_0_2, 17, 25);
    AddChannel_TextFieldWidget_0_2->fn->setScheme(AddChannel_TextFieldWidget_0_2, &texfield);
    AddChannel_TextFieldWidget_0_2->fn->setHAlignment(AddChannel_TextFieldWidget_0_2, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_2->fn->setString(AddChannel_TextFieldWidget_0_2, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_2->fn->setFont(AddChannel_TextFieldWidget_0_2, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_2->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_2, LE_FALSE);
    AddChannel_PanelWidget_0_0->fn->addChild(AddChannel_PanelWidget_0_0, (leWidget*)AddChannel_TextFieldWidget_0_2);

    AddChannel_TextFieldWidget_0_3 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_3->fn->setPosition(AddChannel_TextFieldWidget_0_3, 85, 0);
    AddChannel_TextFieldWidget_0_3->fn->setSize(AddChannel_TextFieldWidget_0_3, 19, 25);
    AddChannel_TextFieldWidget_0_3->fn->setScheme(AddChannel_TextFieldWidget_0_3, &texfield);
    AddChannel_TextFieldWidget_0_3->fn->setHAlignment(AddChannel_TextFieldWidget_0_3, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_3->fn->setString(AddChannel_TextFieldWidget_0_3, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_3->fn->setFont(AddChannel_TextFieldWidget_0_3, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_3->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_3, LE_FALSE);
    AddChannel_PanelWidget_0_0->fn->addChild(AddChannel_PanelWidget_0_0, (leWidget*)AddChannel_TextFieldWidget_0_3);

    AddChannel_TextFieldWidget_0_4 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_4->fn->setPosition(AddChannel_TextFieldWidget_0_4, 101, 0);
    AddChannel_TextFieldWidget_0_4->fn->setSize(AddChannel_TextFieldWidget_0_4, 19, 25);
    AddChannel_TextFieldWidget_0_4->fn->setScheme(AddChannel_TextFieldWidget_0_4, &texfield);
    AddChannel_TextFieldWidget_0_4->fn->setHAlignment(AddChannel_TextFieldWidget_0_4, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_4->fn->setString(AddChannel_TextFieldWidget_0_4, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_4->fn->setFont(AddChannel_TextFieldWidget_0_4, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_4->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_4, LE_FALSE);
    AddChannel_PanelWidget_0_0->fn->addChild(AddChannel_PanelWidget_0_0, (leWidget*)AddChannel_TextFieldWidget_0_4);

    AddChannel_LabelWidget_1_1 = leLabelWidget_New();
    AddChannel_LabelWidget_1_1->fn->setPosition(AddChannel_LabelWidget_1_1, 145, 3);
    AddChannel_LabelWidget_1_1->fn->setSize(AddChannel_LabelWidget_1_1, 31, 21);
    AddChannel_LabelWidget_1_1->fn->setScheme(AddChannel_LabelWidget_1_1, &BlackBackground);
    AddChannel_LabelWidget_1_1->fn->setString(AddChannel_LabelWidget_1_1, (leString*)&string_Hz);
    AddChannel_PanelWidget_0_0->fn->addChild(AddChannel_PanelWidget_0_0, (leWidget*)AddChannel_LabelWidget_1_1);

    AddChannel_PanelWidget_0_1 = leWidget_New();
    AddChannel_PanelWidget_0_1->fn->setPosition(AddChannel_PanelWidget_0_1, 118, 123);
    AddChannel_PanelWidget_0_1->fn->setSize(AddChannel_PanelWidget_0_1, 189, 27);
    AddChannel_PanelWidget_0_1->fn->setScheme(AddChannel_PanelWidget_0_1, &BlackBackground);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_PanelWidget_0_1);

    AddChannel_TextFieldWidget_0_0_0 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0->fn->setPosition(AddChannel_TextFieldWidget_0_0_0, 24, 0);
    AddChannel_TextFieldWidget_0_0_0->fn->setSize(AddChannel_TextFieldWidget_0_0_0, 19, 25);
    AddChannel_TextFieldWidget_0_0_0->fn->setScheme(AddChannel_TextFieldWidget_0_0_0, &texfield);
    AddChannel_TextFieldWidget_0_0_0->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0->fn->setString(AddChannel_TextFieldWidget_0_0_0, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0->fn->setFont(AddChannel_TextFieldWidget_0_0_0, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0, LE_FALSE);
    AddChannel_PanelWidget_0_1->fn->addChild(AddChannel_PanelWidget_0_1, (leWidget*)AddChannel_TextFieldWidget_0_0_0);

    AddChannel_TextFieldWidget_0_0_1 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_1->fn->setPosition(AddChannel_TextFieldWidget_0_0_1, 43, 0);
    AddChannel_TextFieldWidget_0_0_1->fn->setSize(AddChannel_TextFieldWidget_0_0_1, 19, 25);
    AddChannel_TextFieldWidget_0_0_1->fn->setScheme(AddChannel_TextFieldWidget_0_0_1, &texfield);
    AddChannel_TextFieldWidget_0_0_1->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_1, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_1->fn->setString(AddChannel_TextFieldWidget_0_0_1, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_1->fn->setFont(AddChannel_TextFieldWidget_0_0_1, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_1->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_1, LE_FALSE);
    AddChannel_PanelWidget_0_1->fn->addChild(AddChannel_PanelWidget_0_1, (leWidget*)AddChannel_TextFieldWidget_0_0_1);

    AddChannel_TextFieldWidget_0_0_2 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_2->fn->setPosition(AddChannel_TextFieldWidget_0_0_2, 63, 0);
    AddChannel_TextFieldWidget_0_0_2->fn->setSize(AddChannel_TextFieldWidget_0_0_2, 19, 25);
    AddChannel_TextFieldWidget_0_0_2->fn->setScheme(AddChannel_TextFieldWidget_0_0_2, &texfield);
    AddChannel_TextFieldWidget_0_0_2->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_2, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_2->fn->setString(AddChannel_TextFieldWidget_0_0_2, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_2->fn->setFont(AddChannel_TextFieldWidget_0_0_2, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_2->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_2, LE_FALSE);
    AddChannel_PanelWidget_0_1->fn->addChild(AddChannel_PanelWidget_0_1, (leWidget*)AddChannel_TextFieldWidget_0_0_2);

    AddChannel_TextFieldWidget_0_0_3 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_3->fn->setPosition(AddChannel_TextFieldWidget_0_0_3, 83, 0);
    AddChannel_TextFieldWidget_0_0_3->fn->setSize(AddChannel_TextFieldWidget_0_0_3, 19, 25);
    AddChannel_TextFieldWidget_0_0_3->fn->setScheme(AddChannel_TextFieldWidget_0_0_3, &texfield);
    AddChannel_TextFieldWidget_0_0_3->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_3, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_3->fn->setString(AddChannel_TextFieldWidget_0_0_3, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_3->fn->setFont(AddChannel_TextFieldWidget_0_0_3, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_3->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_3, LE_FALSE);
    AddChannel_PanelWidget_0_1->fn->addChild(AddChannel_PanelWidget_0_1, (leWidget*)AddChannel_TextFieldWidget_0_0_3);

    AddChannel_TextFieldWidget_0_0_4 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_4->fn->setPosition(AddChannel_TextFieldWidget_0_0_4, 103, 0);
    AddChannel_TextFieldWidget_0_0_4->fn->setSize(AddChannel_TextFieldWidget_0_0_4, 19, 25);
    AddChannel_TextFieldWidget_0_0_4->fn->setScheme(AddChannel_TextFieldWidget_0_0_4, &texfield);
    AddChannel_TextFieldWidget_0_0_4->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_4, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_4->fn->setString(AddChannel_TextFieldWidget_0_0_4, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_4->fn->setFont(AddChannel_TextFieldWidget_0_0_4, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_4->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_4, LE_FALSE);
    AddChannel_PanelWidget_0_1->fn->addChild(AddChannel_PanelWidget_0_1, (leWidget*)AddChannel_TextFieldWidget_0_0_4);

    AddChannel_LabelWidget_1_1_0 = leLabelWidget_New();
    AddChannel_LabelWidget_1_1_0->fn->setPosition(AddChannel_LabelWidget_1_1_0, 147, 4);
    AddChannel_LabelWidget_1_1_0->fn->setSize(AddChannel_LabelWidget_1_1_0, 31, 18);
    AddChannel_LabelWidget_1_1_0->fn->setScheme(AddChannel_LabelWidget_1_1_0, &BlackBackground);
    AddChannel_LabelWidget_1_1_0->fn->setString(AddChannel_LabelWidget_1_1_0, (leString*)&string_ms);
    AddChannel_PanelWidget_0_1->fn->addChild(AddChannel_PanelWidget_0_1, (leWidget*)AddChannel_LabelWidget_1_1_0);

    AddChannel_PanelWidget_0_2 = leWidget_New();
    AddChannel_PanelWidget_0_2->fn->setPosition(AddChannel_PanelWidget_0_2, 118, 175);
    AddChannel_PanelWidget_0_2->fn->setSize(AddChannel_PanelWidget_0_2, 189, 27);
    AddChannel_PanelWidget_0_2->fn->setScheme(AddChannel_PanelWidget_0_2, &BlackBackground);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_PanelWidget_0_2);

    AddChannel_TextFieldWidget_0_0_0_6 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_6->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_6, 26, 0);
    AddChannel_TextFieldWidget_0_0_0_6->fn->setSize(AddChannel_TextFieldWidget_0_0_0_6, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_6->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_6, &texfield);
    AddChannel_TextFieldWidget_0_0_0_6->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_6, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_6->fn->setString(AddChannel_TextFieldWidget_0_0_0_6, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_6->fn->setFont(AddChannel_TextFieldWidget_0_0_0_6, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_6->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_6, LE_FALSE);
    AddChannel_PanelWidget_0_2->fn->addChild(AddChannel_PanelWidget_0_2, (leWidget*)AddChannel_TextFieldWidget_0_0_0_6);

    AddChannel_TextFieldWidget_0_0_0_5 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_5->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_5, 43, 0);
    AddChannel_TextFieldWidget_0_0_0_5->fn->setSize(AddChannel_TextFieldWidget_0_0_0_5, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_5->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_5, &texfield);
    AddChannel_TextFieldWidget_0_0_0_5->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_5, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_5->fn->setString(AddChannel_TextFieldWidget_0_0_0_5, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_5->fn->setFont(AddChannel_TextFieldWidget_0_0_0_5, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_5->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_5, LE_FALSE);
    AddChannel_PanelWidget_0_2->fn->addChild(AddChannel_PanelWidget_0_2, (leWidget*)AddChannel_TextFieldWidget_0_0_0_5);

    AddChannel_TextFieldWidget_0_0_0_13 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_13->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_13, 63, 0);
    AddChannel_TextFieldWidget_0_0_0_13->fn->setSize(AddChannel_TextFieldWidget_0_0_0_13, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_13->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_13, &texfield);
    AddChannel_TextFieldWidget_0_0_0_13->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_13, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_13->fn->setString(AddChannel_TextFieldWidget_0_0_0_13, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_13->fn->setFont(AddChannel_TextFieldWidget_0_0_0_13, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_13->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_13, LE_FALSE);
    AddChannel_PanelWidget_0_2->fn->addChild(AddChannel_PanelWidget_0_2, (leWidget*)AddChannel_TextFieldWidget_0_0_0_13);

    AddChannel_TextFieldWidget_0_0_0_12 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_12->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_12, 83, 0);
    AddChannel_TextFieldWidget_0_0_0_12->fn->setSize(AddChannel_TextFieldWidget_0_0_0_12, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_12->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_12, &texfield);
    AddChannel_TextFieldWidget_0_0_0_12->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_12, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_12->fn->setString(AddChannel_TextFieldWidget_0_0_0_12, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_12->fn->setFont(AddChannel_TextFieldWidget_0_0_0_12, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_12->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_12, LE_FALSE);
    AddChannel_PanelWidget_0_2->fn->addChild(AddChannel_PanelWidget_0_2, (leWidget*)AddChannel_TextFieldWidget_0_0_0_12);

    AddChannel_TextFieldWidget_0_0_0_14 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_14->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_14, 103, 0);
    AddChannel_TextFieldWidget_0_0_0_14->fn->setSize(AddChannel_TextFieldWidget_0_0_0_14, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_14->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_14, &texfield);
    AddChannel_TextFieldWidget_0_0_0_14->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_14, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_14->fn->setString(AddChannel_TextFieldWidget_0_0_0_14, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_14->fn->setFont(AddChannel_TextFieldWidget_0_0_0_14, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_14->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_14, LE_FALSE);
    AddChannel_PanelWidget_0_2->fn->addChild(AddChannel_PanelWidget_0_2, (leWidget*)AddChannel_TextFieldWidget_0_0_0_14);

    AddChannel_PanelWidget_0_3 = leWidget_New();
    AddChannel_PanelWidget_0_3->fn->setPosition(AddChannel_PanelWidget_0_3, 118, 230);
    AddChannel_PanelWidget_0_3->fn->setSize(AddChannel_PanelWidget_0_3, 189, 25);
    AddChannel_PanelWidget_0_3->fn->setScheme(AddChannel_PanelWidget_0_3, &BlackBackground);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_PanelWidget_0_3);

    AddChannel_TextFieldWidget_0_0_0_7 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_7->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_7, 24, 0);
    AddChannel_TextFieldWidget_0_0_0_7->fn->setSize(AddChannel_TextFieldWidget_0_0_0_7, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_7->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_7, &texfield);
    AddChannel_TextFieldWidget_0_0_0_7->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_7, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_7->fn->setString(AddChannel_TextFieldWidget_0_0_0_7, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_7->fn->setFont(AddChannel_TextFieldWidget_0_0_0_7, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_7->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_7, LE_FALSE);
    AddChannel_PanelWidget_0_3->fn->addChild(AddChannel_PanelWidget_0_3, (leWidget*)AddChannel_TextFieldWidget_0_0_0_7);

    AddChannel_TextFieldWidget_0_0_0_8 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_8->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_8, 42, 0);
    AddChannel_TextFieldWidget_0_0_0_8->fn->setSize(AddChannel_TextFieldWidget_0_0_0_8, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_8->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_8, &texfield);
    AddChannel_TextFieldWidget_0_0_0_8->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_8, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_8->fn->setString(AddChannel_TextFieldWidget_0_0_0_8, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_8->fn->setFont(AddChannel_TextFieldWidget_0_0_0_8, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_8->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_8, LE_FALSE);
    AddChannel_PanelWidget_0_3->fn->addChild(AddChannel_PanelWidget_0_3, (leWidget*)AddChannel_TextFieldWidget_0_0_0_8);

    AddChannel_TextFieldWidget_0_0_0_9 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_9->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_9, 62, 0);
    AddChannel_TextFieldWidget_0_0_0_9->fn->setSize(AddChannel_TextFieldWidget_0_0_0_9, 22, 25);
    AddChannel_TextFieldWidget_0_0_0_9->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_9, &texfield);
    AddChannel_TextFieldWidget_0_0_0_9->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_9, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_9->fn->setString(AddChannel_TextFieldWidget_0_0_0_9, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_9->fn->setFont(AddChannel_TextFieldWidget_0_0_0_9, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_9->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_9, LE_FALSE);
    AddChannel_PanelWidget_0_3->fn->addChild(AddChannel_PanelWidget_0_3, (leWidget*)AddChannel_TextFieldWidget_0_0_0_9);

    AddChannel_TextFieldWidget_0_0_0_10 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_10->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_10, 83, 0);
    AddChannel_TextFieldWidget_0_0_0_10->fn->setSize(AddChannel_TextFieldWidget_0_0_0_10, 18, 25);
    AddChannel_TextFieldWidget_0_0_0_10->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_10, &texfield);
    AddChannel_TextFieldWidget_0_0_0_10->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_10, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_10->fn->setString(AddChannel_TextFieldWidget_0_0_0_10, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_10->fn->setFont(AddChannel_TextFieldWidget_0_0_0_10, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_10->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_10, LE_FALSE);
    AddChannel_PanelWidget_0_3->fn->addChild(AddChannel_PanelWidget_0_3, (leWidget*)AddChannel_TextFieldWidget_0_0_0_10);

    AddChannel_TextFieldWidget_0_0_0_11 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_11->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_11, 102, 0);
    AddChannel_TextFieldWidget_0_0_0_11->fn->setSize(AddChannel_TextFieldWidget_0_0_0_11, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_11->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_11, &texfield);
    AddChannel_TextFieldWidget_0_0_0_11->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_11, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_11->fn->setString(AddChannel_TextFieldWidget_0_0_0_11, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_11->fn->setFont(AddChannel_TextFieldWidget_0_0_0_11, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_11->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_11, LE_FALSE);
    AddChannel_PanelWidget_0_3->fn->addChild(AddChannel_PanelWidget_0_3, (leWidget*)AddChannel_TextFieldWidget_0_0_0_11);

    AddChannel_PanelWidget_0 = leWidget_New();
    AddChannel_PanelWidget_0->fn->setPosition(AddChannel_PanelWidget_0, 118, 277);
    AddChannel_PanelWidget_0->fn->setSize(AddChannel_PanelWidget_0, 189, 27);
    AddChannel_PanelWidget_0->fn->setScheme(AddChannel_PanelWidget_0, &BlackBackground);
    AddChannel_PanelWidget_1->fn->addChild(AddChannel_PanelWidget_1, (leWidget*)AddChannel_PanelWidget_0);

    AddChannel_TextFieldWidget_0_0_0_15 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_15->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_15, 5, 0);
    AddChannel_TextFieldWidget_0_0_0_15->fn->setSize(AddChannel_TextFieldWidget_0_0_0_15, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_15->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_15, &texfield);
    AddChannel_TextFieldWidget_0_0_0_15->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_15, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_15->fn->setString(AddChannel_TextFieldWidget_0_0_0_15, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_15->fn->setFont(AddChannel_TextFieldWidget_0_0_0_15, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_15->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_15, LE_FALSE);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_TextFieldWidget_0_0_0_15);

    AddChannel_TextFieldWidget_0_0_0_0 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_0->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_0, 21, 0);
    AddChannel_TextFieldWidget_0_0_0_0->fn->setSize(AddChannel_TextFieldWidget_0_0_0_0, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_0->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_0, &texfield);
    AddChannel_TextFieldWidget_0_0_0_0->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_0, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_0->fn->setString(AddChannel_TextFieldWidget_0_0_0_0, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_0->fn->setFont(AddChannel_TextFieldWidget_0_0_0_0, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_0->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_0, LE_FALSE);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_TextFieldWidget_0_0_0_0);

    AddChannel_TextFieldWidget_0_0_0_1 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_1->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_1, 51, 0);
    AddChannel_TextFieldWidget_0_0_0_1->fn->setSize(AddChannel_TextFieldWidget_0_0_0_1, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_1->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_1, &texfield);
    AddChannel_TextFieldWidget_0_0_0_1->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_1, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_1->fn->setString(AddChannel_TextFieldWidget_0_0_0_1, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_1->fn->setFont(AddChannel_TextFieldWidget_0_0_0_1, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_1->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_1, LE_FALSE);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_TextFieldWidget_0_0_0_1);

    AddChannel_TextFieldWidget_0_0_0_2 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_2->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_2, 67, 0);
    AddChannel_TextFieldWidget_0_0_0_2->fn->setSize(AddChannel_TextFieldWidget_0_0_0_2, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_2->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_2, &texfield);
    AddChannel_TextFieldWidget_0_0_0_2->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_2, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_2->fn->setString(AddChannel_TextFieldWidget_0_0_0_2, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_2->fn->setFont(AddChannel_TextFieldWidget_0_0_0_2, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_2->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_2, LE_FALSE);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_TextFieldWidget_0_0_0_2);

    AddChannel_TextFieldWidget_0_0_0_3 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_3->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_3, 94, 0);
    AddChannel_TextFieldWidget_0_0_0_3->fn->setSize(AddChannel_TextFieldWidget_0_0_0_3, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_3->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_3, &texfield);
    AddChannel_TextFieldWidget_0_0_0_3->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_3, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_3->fn->setString(AddChannel_TextFieldWidget_0_0_0_3, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_3->fn->setFont(AddChannel_TextFieldWidget_0_0_0_3, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_3->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_3, LE_FALSE);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_TextFieldWidget_0_0_0_3);

    AddChannel_TextFieldWidget_0_0_0_4 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_4->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_4, 111, 0);
    AddChannel_TextFieldWidget_0_0_0_4->fn->setSize(AddChannel_TextFieldWidget_0_0_0_4, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_4->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_4, &texfield);
    AddChannel_TextFieldWidget_0_0_0_4->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_4, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_4->fn->setString(AddChannel_TextFieldWidget_0_0_0_4, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_4->fn->setFont(AddChannel_TextFieldWidget_0_0_0_4, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_4->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_4, LE_FALSE);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_TextFieldWidget_0_0_0_4);

    AddChannel_TextFieldWidget_0_0_0_15_0 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_15_0->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_15_0, 134, 0);
    AddChannel_TextFieldWidget_0_0_0_15_0->fn->setSize(AddChannel_TextFieldWidget_0_0_0_15_0, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_15_0->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_15_0, &texfield);
    AddChannel_TextFieldWidget_0_0_0_15_0->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_15_0, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_15_0->fn->setString(AddChannel_TextFieldWidget_0_0_0_15_0, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_15_0->fn->setFont(AddChannel_TextFieldWidget_0_0_0_15_0, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_15_0->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_15_0, LE_FALSE);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_TextFieldWidget_0_0_0_15_0);

    AddChannel_TextFieldWidget_0_0_0_15_1 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_15_1->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_15_1, 150, 0);
    AddChannel_TextFieldWidget_0_0_0_15_1->fn->setSize(AddChannel_TextFieldWidget_0_0_0_15_1, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_15_1->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_15_1, &texfield);
    AddChannel_TextFieldWidget_0_0_0_15_1->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_15_1, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_15_1->fn->setString(AddChannel_TextFieldWidget_0_0_0_15_1, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_15_1->fn->setFont(AddChannel_TextFieldWidget_0_0_0_15_1, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_15_1->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_15_1, LE_FALSE);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_TextFieldWidget_0_0_0_15_1);

    AddChannel_TextFieldWidget_0_0_0_15_2 = leTextFieldWidget_New();
    AddChannel_TextFieldWidget_0_0_0_15_2->fn->setPosition(AddChannel_TextFieldWidget_0_0_0_15_2, 167, 0);
    AddChannel_TextFieldWidget_0_0_0_15_2->fn->setSize(AddChannel_TextFieldWidget_0_0_0_15_2, 19, 25);
    AddChannel_TextFieldWidget_0_0_0_15_2->fn->setScheme(AddChannel_TextFieldWidget_0_0_0_15_2, &texfield);
    AddChannel_TextFieldWidget_0_0_0_15_2->fn->setHAlignment(AddChannel_TextFieldWidget_0_0_0_15_2, LE_HALIGN_LEFT);
    AddChannel_TextFieldWidget_0_0_0_15_2->fn->setString(AddChannel_TextFieldWidget_0_0_0_15_2, (leString*)&string_ss0);
    AddChannel_TextFieldWidget_0_0_0_15_2->fn->setFont(AddChannel_TextFieldWidget_0_0_0_15_2, (leFont*)&Roboto_Small);
    AddChannel_TextFieldWidget_0_0_0_15_2->fn->setClearValueOnFirstEdit(AddChannel_TextFieldWidget_0_0_0_15_2, LE_FALSE);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_TextFieldWidget_0_0_0_15_2);

    AddChannel_LabelWidget_1_2 = leLabelWidget_New();
    AddChannel_LabelWidget_1_2->fn->setPosition(AddChannel_LabelWidget_1_2, 84, 1);
    AddChannel_LabelWidget_1_2->fn->setSize(AddChannel_LabelWidget_1_2, 13, 21);
    AddChannel_LabelWidget_1_2->fn->setScheme(AddChannel_LabelWidget_1_2, &BlackBackground);
    AddChannel_LabelWidget_1_2->fn->setString(AddChannel_LabelWidget_1_2, (leString*)&string_twopoint);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_LabelWidget_1_2);

    AddChannel_LabelWidget_1_3 = leLabelWidget_New();
    AddChannel_LabelWidget_1_3->fn->setPosition(AddChannel_LabelWidget_1_3, 39, 1);
    AddChannel_LabelWidget_1_3->fn->setSize(AddChannel_LabelWidget_1_3, 13, 21);
    AddChannel_LabelWidget_1_3->fn->setScheme(AddChannel_LabelWidget_1_3, &BlackBackground);
    AddChannel_LabelWidget_1_3->fn->setString(AddChannel_LabelWidget_1_3, (leString*)&string_twopoint);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_LabelWidget_1_3);

    AddChannel_LabelWidget_1_2_0 = leLabelWidget_New();
    AddChannel_LabelWidget_1_2_0->fn->setPosition(AddChannel_LabelWidget_1_2_0, 125, 1);
    AddChannel_LabelWidget_1_2_0->fn->setSize(AddChannel_LabelWidget_1_2_0, 13, 21);
    AddChannel_LabelWidget_1_2_0->fn->setScheme(AddChannel_LabelWidget_1_2_0, &BlackBackground);
    AddChannel_LabelWidget_1_2_0->fn->setString(AddChannel_LabelWidget_1_2_0, (leString*)&string_twopoint);
    AddChannel_PanelWidget_0->fn->addChild(AddChannel_PanelWidget_0, (leWidget*)AddChannel_LabelWidget_1_2_0);

    AddChannel_CheckBoxWidget_1 = leCheckBoxWidget_New();
    AddChannel_CheckBoxWidget_1->fn->setPosition(AddChannel_CheckBoxWidget_1, 118, 434);
    AddChannel_CheckBoxWidget_1->fn->setSize(AddChannel_CheckBoxWidget_1, 211, 29);
    AddChannel_CheckBoxWidget_1->fn->setScheme(AddChannel_CheckBoxWidget_1, &RadioButton);
    AddChannel_CheckBoxWidget_1->fn->setString(AddChannel_CheckBoxWidget_1, (leString*)&string_repeatable_sequence);
    root0->fn->addChild(root0, (leWidget*)AddChannel_CheckBoxWidget_1);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    showing = LE_TRUE;
    
    init_widgetScreenAddChannel();

    return LE_SUCCESS;
}

void screenUpdate_AddChannel(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    navigation_AddChannel();
}

void screenHide_AddChannel(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    AddChannel_Panel_Channel = NULL;
    AddChannel_TitleChannel = NULL;
    AddChannel_HomeButton = NULL;
    AddChannel_BackButtonChanne = NULL;
    AddChannel_Channel_part1 = NULL;
    AddChannel_Channel_part2 = NULL;
    AddChannel_RectangleWidget_0 = NULL;
    AddChannel_Channel = NULL;
    AddChannel_ModeTitle = NULL;
    AddChannel_CurrentTittle = NULL;
    AddChannel_TriggerTittle = NULL;
    AddChannel_LabelWidget_channel = NULL;
    AddChannel_LabelWidget_mode = NULL;
    AddChannel_LabelWidget_trigger = NULL;
    AddChannel_PanelWidget_current = NULL;
    AddChannel_LabelWidget_unite = NULL;
    AddChannel_LabelWidget_current = NULL;
    AddChannel_ListWidget_0 = NULL;
    AddChannel_ListWidget_1 = NULL;
    AddChannel_ListWidget_2 = NULL;
    AddChannel_ListWidget_3 = NULL;
    AddChannel_CheckBoxWidget_0 = NULL;
    AddChannel_PanelWidget_1 = NULL;
    AddChannel_CheckBoxWidget_1 = NULL;
    AddChannel_TextFieldWidget_0_0_0_6_0 = NULL;
    AddChannel_TextFieldWidget_0_0_0_6_1 = NULL;
    AddChannel_TextFieldWidget_0_0_0_6_2 = NULL;
    AddChannel_SartTitle = NULL;
    AddChannel_PanelWidget_0_4 = NULL;
    AddChannel_frequencyTitle = NULL;
    AddChannel_TimeOnTitle = NULL;
    AddChannel_pulsefeqTitle = NULL;
    AddChannel_NumSeqTitle = NULL;
    AddChannel_delayBetTitle = NULL;
    AddChannel_PanelWidget_0_0 = NULL;
    AddChannel_PanelWidget_0_1 = NULL;
    AddChannel_PanelWidget_0_2 = NULL;
    AddChannel_PanelWidget_0_3 = NULL;
    AddChannel_PanelWidget_0 = NULL;
    AddChannel_TextFieldWidget_0 = NULL;
    AddChannel_TextFieldWidget_1 = NULL;
    AddChannel_TextFieldWidget_2 = NULL;
    AddChannel_TextFieldWidget_3 = NULL;
    AddChannel_TextFieldWidget_4 = NULL;
    AddChannel_TextFieldWidget_5 = NULL;
    AddChannel_TextFieldWidget_0_0_0_15_5 = NULL;
    AddChannel_TextFieldWidget_0_0_0_15_4 = NULL;
    AddChannel_TextFieldWidget_0_0_0_15_3 = NULL;
    AddChannel_LabelWidget_1 = NULL;
    AddChannel_LabelWidget_1_0 = NULL;
    AddChannel_LabelWidget_1_0_0 = NULL;
    AddChannel_TextFieldWidget_0_0 = NULL;
    AddChannel_TextFieldWidget_0_1 = NULL;
    AddChannel_TextFieldWidget_0_2 = NULL;
    AddChannel_TextFieldWidget_0_3 = NULL;
    AddChannel_TextFieldWidget_0_4 = NULL;
    AddChannel_LabelWidget_1_1 = NULL;
    AddChannel_TextFieldWidget_0_0_0 = NULL;
    AddChannel_TextFieldWidget_0_0_1 = NULL;
    AddChannel_TextFieldWidget_0_0_2 = NULL;
    AddChannel_TextFieldWidget_0_0_3 = NULL;
    AddChannel_TextFieldWidget_0_0_4 = NULL;
    AddChannel_LabelWidget_1_1_0 = NULL;
    AddChannel_TextFieldWidget_0_0_0_6 = NULL;
    AddChannel_TextFieldWidget_0_0_0_5 = NULL;
    AddChannel_TextFieldWidget_0_0_0_13 = NULL;
    AddChannel_TextFieldWidget_0_0_0_12 = NULL;
    AddChannel_TextFieldWidget_0_0_0_14 = NULL;
    AddChannel_TextFieldWidget_0_0_0_7 = NULL;
    AddChannel_TextFieldWidget_0_0_0_8 = NULL;
    AddChannel_TextFieldWidget_0_0_0_9 = NULL;
    AddChannel_TextFieldWidget_0_0_0_10 = NULL;
    AddChannel_TextFieldWidget_0_0_0_11 = NULL;
    AddChannel_TextFieldWidget_0_0_0_15 = NULL;
    AddChannel_TextFieldWidget_0_0_0_0 = NULL;
    AddChannel_TextFieldWidget_0_0_0_1 = NULL;
    AddChannel_TextFieldWidget_0_0_0_2 = NULL;
    AddChannel_TextFieldWidget_0_0_0_3 = NULL;
    AddChannel_TextFieldWidget_0_0_0_4 = NULL;
    AddChannel_TextFieldWidget_0_0_0_15_0 = NULL;
    AddChannel_TextFieldWidget_0_0_0_15_1 = NULL;
    AddChannel_TextFieldWidget_0_0_0_15_2 = NULL;
    AddChannel_LabelWidget_1_2 = NULL;
    AddChannel_LabelWidget_1_3 = NULL;
    AddChannel_LabelWidget_1_2_0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_AddChannel(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_AddChannel(uint32_t lyrIdx)
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

