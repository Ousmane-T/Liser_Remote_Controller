#include "gfx/legato/generated/screen/le_gen_screen_TimeSeries.h"

// screen member widget declarations
static leWidget* root0;

leWidget* TimeSeries_Panel_0;
leLabelWidget* TimeSeries_LabelWidget_2;
leGroupBoxWidget* TimeSeries_GroupBoxWidget_0;
leGroupBoxWidget* TimeSeries_GroupBoxWidget_1;
leRectangleWidget* TimeSeries_RectangleWidget_0;
leButtonWidget* TimeSeries_ButtonWidget_1;
leTextFieldWidget* TimeSeries_TextFieldWidget_0;
leTextFieldWidget* TimeSeries_TextFieldWidget_1;
leLabelWidget* TimeSeries_LabelWidget_3;
leLabelWidget* TimeSeries_LabelWidget_4;
leLabelWidget* TimeSeries_NumOfSerisLabel;
leLabelWidget* TimeSeries_TDlabel;
leLabelWidget* TimeSeries_LabelWidget_0_1;
leLabelWidget* TimeSeries_TimeOnLabel;
leLabelWidget* TimeSeries_LabelWidget_0_0_0;
leLabelWidget* TimeSeries_LabelWidget_0_0_1;
leLabelWidget* TimeSeries_LabelWidget_0_0_2;
leWidget* TimeSeries_NumOfSerisPanel;
leLabelWidget* TimeSeries_LabelWidget_1_1;
leLabelWidget* TimeSeries_LabelWidget_1_2;
leWidget* TimeSeries_PanelWidget_0_4_1;
leWidget* TimeSeries_PanelWidget_0_4_0;
leLabelWidget* TimeSeries_LabelWidget_1;
leLabelWidget* TimeSeries_LabelWidget_1_0;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield1;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield2;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield3;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield4;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield5;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_6;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_11;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_10;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_9;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_8;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_7;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_0;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_1;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_2;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_3;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_4;
leTextFieldWidget* TimeSeries_NumOfSerisTexfield6_5;
leLabelWidget* TimeSeries_LabelWidget_0;
leProgressBarWidget* TimeSeries_ProgressBarWidget_0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_TimeSeries(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_TimeSeries(void)
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

    TimeSeries_Panel_0 = leWidget_New();
    TimeSeries_Panel_0->fn->setPosition(TimeSeries_Panel_0, 1, 0);
    TimeSeries_Panel_0->fn->setSize(TimeSeries_Panel_0, 800, 480);
    TimeSeries_Panel_0->fn->setScheme(TimeSeries_Panel_0, &BlackBackground);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_Panel_0);

    TimeSeries_LabelWidget_2 = leLabelWidget_New();
    TimeSeries_LabelWidget_2->fn->setPosition(TimeSeries_LabelWidget_2, 206, 14);
    TimeSeries_LabelWidget_2->fn->setSize(TimeSeries_LabelWidget_2, 362, 37);
    TimeSeries_LabelWidget_2->fn->setScheme(TimeSeries_LabelWidget_2, &BlackBackground);
    TimeSeries_LabelWidget_2->fn->setHAlignment(TimeSeries_LabelWidget_2, LE_HALIGN_CENTER);
    TimeSeries_LabelWidget_2->fn->setString(TimeSeries_LabelWidget_2, (leString*)&string_TimeSeries);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_LabelWidget_2);

    TimeSeries_GroupBoxWidget_0 = leGroupBoxWidget_New();
    TimeSeries_GroupBoxWidget_0->fn->setPosition(TimeSeries_GroupBoxWidget_0, 40, 63);
    TimeSeries_GroupBoxWidget_0->fn->setSize(TimeSeries_GroupBoxWidget_0, 725, 251);
    TimeSeries_GroupBoxWidget_0->fn->setScheme(TimeSeries_GroupBoxWidget_0, &lightBlackBackground);
    TimeSeries_GroupBoxWidget_0->fn->setBorderType(TimeSeries_GroupBoxWidget_0, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_GroupBoxWidget_0);

    TimeSeries_NumOfSerisLabel = leLabelWidget_New();
    TimeSeries_NumOfSerisLabel->fn->setPosition(TimeSeries_NumOfSerisLabel, 61, 45);
    TimeSeries_NumOfSerisLabel->fn->setSize(TimeSeries_NumOfSerisLabel, 234, 25);
    TimeSeries_NumOfSerisLabel->fn->setScheme(TimeSeries_NumOfSerisLabel, &BlackBackground);
    TimeSeries_NumOfSerisLabel->fn->setBackgroundType(TimeSeries_NumOfSerisLabel, LE_WIDGET_BACKGROUND_NONE);
    TimeSeries_NumOfSerisLabel->fn->setString(TimeSeries_NumOfSerisLabel, (leString*)&string_NumberOfSeries);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_NumOfSerisLabel);

    TimeSeries_TDlabel = leLabelWidget_New();
    TimeSeries_TDlabel->fn->setPosition(TimeSeries_TDlabel, 62, 185);
    TimeSeries_TDlabel->fn->setSize(TimeSeries_TDlabel, 234, 25);
    TimeSeries_TDlabel->fn->setScheme(TimeSeries_TDlabel, &BlackBackground);
    TimeSeries_TDlabel->fn->setBackgroundType(TimeSeries_TDlabel, LE_WIDGET_BACKGROUND_NONE);
    TimeSeries_TDlabel->fn->setString(TimeSeries_TDlabel, (leString*)&string_TotalDuration);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_TDlabel);

    TimeSeries_LabelWidget_0_1 = leLabelWidget_New();
    TimeSeries_LabelWidget_0_1->fn->setPosition(TimeSeries_LabelWidget_0_1, 57, 136);
    TimeSeries_LabelWidget_0_1->fn->setSize(TimeSeries_LabelWidget_0_1, 234, 25);
    TimeSeries_LabelWidget_0_1->fn->setScheme(TimeSeries_LabelWidget_0_1, &BlackBackground);
    TimeSeries_LabelWidget_0_1->fn->setBackgroundType(TimeSeries_LabelWidget_0_1, LE_WIDGET_BACKGROUND_NONE);
    TimeSeries_LabelWidget_0_1->fn->setString(TimeSeries_LabelWidget_0_1, (leString*)&string_Periodbetweenseries);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_LabelWidget_0_1);

    TimeSeries_TimeOnLabel = leLabelWidget_New();
    TimeSeries_TimeOnLabel->fn->setPosition(TimeSeries_TimeOnLabel, 61, 87);
    TimeSeries_TimeOnLabel->fn->setSize(TimeSeries_TimeOnLabel, 234, 25);
    TimeSeries_TimeOnLabel->fn->setScheme(TimeSeries_TimeOnLabel, &BlackBackground);
    TimeSeries_TimeOnLabel->fn->setBackgroundType(TimeSeries_TimeOnLabel, LE_WIDGET_BACKGROUND_NONE);
    TimeSeries_TimeOnLabel->fn->setString(TimeSeries_TimeOnLabel, (leString*)&string_TimeOn);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_TimeOnLabel);

    TimeSeries_LabelWidget_0_0_0 = leLabelWidget_New();
    TimeSeries_LabelWidget_0_0_0->fn->setPosition(TimeSeries_LabelWidget_0_0_0, 572, 86);
    TimeSeries_LabelWidget_0_0_0->fn->setSize(TimeSeries_LabelWidget_0_0_0, 131, 25);
    TimeSeries_LabelWidget_0_0_0->fn->setScheme(TimeSeries_LabelWidget_0_0_0, &BlackBackground);
    TimeSeries_LabelWidget_0_0_0->fn->setBackgroundType(TimeSeries_LabelWidget_0_0_0, LE_WIDGET_BACKGROUND_NONE);
    TimeSeries_LabelWidget_0_0_0->fn->setString(TimeSeries_LabelWidget_0_0_0, (leString*)&string_durationHour);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_LabelWidget_0_0_0);

    TimeSeries_LabelWidget_0_0_1 = leLabelWidget_New();
    TimeSeries_LabelWidget_0_0_1->fn->setPosition(TimeSeries_LabelWidget_0_0_1, 572, 182);
    TimeSeries_LabelWidget_0_0_1->fn->setSize(TimeSeries_LabelWidget_0_0_1, 129, 25);
    TimeSeries_LabelWidget_0_0_1->fn->setScheme(TimeSeries_LabelWidget_0_0_1, &BlackBackground);
    TimeSeries_LabelWidget_0_0_1->fn->setBackgroundType(TimeSeries_LabelWidget_0_0_1, LE_WIDGET_BACKGROUND_NONE);
    TimeSeries_LabelWidget_0_0_1->fn->setString(TimeSeries_LabelWidget_0_0_1, (leString*)&string_durationDay);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_LabelWidget_0_0_1);

    TimeSeries_LabelWidget_0_0_2 = leLabelWidget_New();
    TimeSeries_LabelWidget_0_0_2->fn->setPosition(TimeSeries_LabelWidget_0_0_2, 572, 134);
    TimeSeries_LabelWidget_0_0_2->fn->setSize(TimeSeries_LabelWidget_0_0_2, 130, 25);
    TimeSeries_LabelWidget_0_0_2->fn->setScheme(TimeSeries_LabelWidget_0_0_2, &BlackBackground);
    TimeSeries_LabelWidget_0_0_2->fn->setBackgroundType(TimeSeries_LabelWidget_0_0_2, LE_WIDGET_BACKGROUND_NONE);
    TimeSeries_LabelWidget_0_0_2->fn->setString(TimeSeries_LabelWidget_0_0_2, (leString*)&string_durationHour);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_LabelWidget_0_0_2);

    TimeSeries_NumOfSerisPanel = leWidget_New();
    TimeSeries_NumOfSerisPanel->fn->setPosition(TimeSeries_NumOfSerisPanel, 375, 43);
    TimeSeries_NumOfSerisPanel->fn->setSize(TimeSeries_NumOfSerisPanel, 189, 27);
    TimeSeries_NumOfSerisPanel->fn->setScheme(TimeSeries_NumOfSerisPanel, &BlackBackground);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_NumOfSerisPanel);

    TimeSeries_NumOfSerisTexfield1 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield1->fn->setPosition(TimeSeries_NumOfSerisTexfield1, 36, 0);
    TimeSeries_NumOfSerisTexfield1->fn->setSize(TimeSeries_NumOfSerisTexfield1, 19, 25);
    TimeSeries_NumOfSerisTexfield1->fn->setScheme(TimeSeries_NumOfSerisTexfield1, &texfield);
    TimeSeries_NumOfSerisTexfield1->fn->setHAlignment(TimeSeries_NumOfSerisTexfield1, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield1->fn->setString(TimeSeries_NumOfSerisTexfield1, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield1->fn->setFont(TimeSeries_NumOfSerisTexfield1, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield1->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield1, LE_FALSE);
    TimeSeries_NumOfSerisPanel->fn->addChild(TimeSeries_NumOfSerisPanel, (leWidget*)TimeSeries_NumOfSerisTexfield1);

    TimeSeries_NumOfSerisTexfield2 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield2->fn->setPosition(TimeSeries_NumOfSerisTexfield2, 55, 0);
    TimeSeries_NumOfSerisTexfield2->fn->setSize(TimeSeries_NumOfSerisTexfield2, 19, 25);
    TimeSeries_NumOfSerisTexfield2->fn->setScheme(TimeSeries_NumOfSerisTexfield2, &texfield);
    TimeSeries_NumOfSerisTexfield2->fn->setHAlignment(TimeSeries_NumOfSerisTexfield2, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield2->fn->setString(TimeSeries_NumOfSerisTexfield2, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield2->fn->setFont(TimeSeries_NumOfSerisTexfield2, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield2->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield2, LE_FALSE);
    TimeSeries_NumOfSerisPanel->fn->addChild(TimeSeries_NumOfSerisPanel, (leWidget*)TimeSeries_NumOfSerisTexfield2);

    TimeSeries_NumOfSerisTexfield3 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield3->fn->setPosition(TimeSeries_NumOfSerisTexfield3, 72, 0);
    TimeSeries_NumOfSerisTexfield3->fn->setSize(TimeSeries_NumOfSerisTexfield3, 19, 25);
    TimeSeries_NumOfSerisTexfield3->fn->setScheme(TimeSeries_NumOfSerisTexfield3, &texfield);
    TimeSeries_NumOfSerisTexfield3->fn->setHAlignment(TimeSeries_NumOfSerisTexfield3, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield3->fn->setString(TimeSeries_NumOfSerisTexfield3, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield3->fn->setFont(TimeSeries_NumOfSerisTexfield3, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield3->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield3, LE_FALSE);
    TimeSeries_NumOfSerisPanel->fn->addChild(TimeSeries_NumOfSerisPanel, (leWidget*)TimeSeries_NumOfSerisTexfield3);

    TimeSeries_NumOfSerisTexfield4 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield4->fn->setPosition(TimeSeries_NumOfSerisTexfield4, 93, 0);
    TimeSeries_NumOfSerisTexfield4->fn->setSize(TimeSeries_NumOfSerisTexfield4, 19, 25);
    TimeSeries_NumOfSerisTexfield4->fn->setScheme(TimeSeries_NumOfSerisTexfield4, &texfield);
    TimeSeries_NumOfSerisTexfield4->fn->setHAlignment(TimeSeries_NumOfSerisTexfield4, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield4->fn->setString(TimeSeries_NumOfSerisTexfield4, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield4->fn->setFont(TimeSeries_NumOfSerisTexfield4, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield4->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield4, LE_FALSE);
    TimeSeries_NumOfSerisPanel->fn->addChild(TimeSeries_NumOfSerisPanel, (leWidget*)TimeSeries_NumOfSerisTexfield4);

    TimeSeries_NumOfSerisTexfield5 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield5->fn->setPosition(TimeSeries_NumOfSerisTexfield5, 112, 0);
    TimeSeries_NumOfSerisTexfield5->fn->setSize(TimeSeries_NumOfSerisTexfield5, 19, 25);
    TimeSeries_NumOfSerisTexfield5->fn->setScheme(TimeSeries_NumOfSerisTexfield5, &texfield);
    TimeSeries_NumOfSerisTexfield5->fn->setHAlignment(TimeSeries_NumOfSerisTexfield5, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield5->fn->setString(TimeSeries_NumOfSerisTexfield5, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield5->fn->setFont(TimeSeries_NumOfSerisTexfield5, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield5->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield5, LE_FALSE);
    TimeSeries_NumOfSerisPanel->fn->addChild(TimeSeries_NumOfSerisPanel, (leWidget*)TimeSeries_NumOfSerisTexfield5);

    TimeSeries_LabelWidget_1_1 = leLabelWidget_New();
    TimeSeries_LabelWidget_1_1->fn->setPosition(TimeSeries_LabelWidget_1_1, 486, 137);
    TimeSeries_LabelWidget_1_1->fn->setSize(TimeSeries_LabelWidget_1_1, 13, 21);
    TimeSeries_LabelWidget_1_1->fn->setScheme(TimeSeries_LabelWidget_1_1, &BlackBackground);
    TimeSeries_LabelWidget_1_1->fn->setString(TimeSeries_LabelWidget_1_1, (leString*)&string_twopoint);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_LabelWidget_1_1);

    TimeSeries_LabelWidget_1_2 = leLabelWidget_New();
    TimeSeries_LabelWidget_1_2->fn->setPosition(TimeSeries_LabelWidget_1_2, 429, 136);
    TimeSeries_LabelWidget_1_2->fn->setSize(TimeSeries_LabelWidget_1_2, 13, 21);
    TimeSeries_LabelWidget_1_2->fn->setScheme(TimeSeries_LabelWidget_1_2, &BlackBackground);
    TimeSeries_LabelWidget_1_2->fn->setString(TimeSeries_LabelWidget_1_2, (leString*)&string_twopoint);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_LabelWidget_1_2);

    TimeSeries_PanelWidget_0_4_1 = leWidget_New();
    TimeSeries_PanelWidget_0_4_1->fn->setPosition(TimeSeries_PanelWidget_0_4_1, 375, 134);
    TimeSeries_PanelWidget_0_4_1->fn->setSize(TimeSeries_PanelWidget_0_4_1, 189, 27);
    TimeSeries_PanelWidget_0_4_1->fn->setScheme(TimeSeries_PanelWidget_0_4_1, &BlackBackground);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_PanelWidget_0_4_1);

    TimeSeries_NumOfSerisTexfield6_6 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_6->fn->setPosition(TimeSeries_NumOfSerisTexfield6_6, 16, 0);
    TimeSeries_NumOfSerisTexfield6_6->fn->setSize(TimeSeries_NumOfSerisTexfield6_6, 19, 25);
    TimeSeries_NumOfSerisTexfield6_6->fn->setScheme(TimeSeries_NumOfSerisTexfield6_6, &texfield);
    TimeSeries_NumOfSerisTexfield6_6->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_6, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_6->fn->setString(TimeSeries_NumOfSerisTexfield6_6, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_6->fn->setFont(TimeSeries_NumOfSerisTexfield6_6, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_6->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_6, LE_FALSE);
    TimeSeries_PanelWidget_0_4_1->fn->addChild(TimeSeries_PanelWidget_0_4_1, (leWidget*)TimeSeries_NumOfSerisTexfield6_6);

    TimeSeries_NumOfSerisTexfield6_11 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_11->fn->setPosition(TimeSeries_NumOfSerisTexfield6_11, 35, 0);
    TimeSeries_NumOfSerisTexfield6_11->fn->setSize(TimeSeries_NumOfSerisTexfield6_11, 19, 25);
    TimeSeries_NumOfSerisTexfield6_11->fn->setScheme(TimeSeries_NumOfSerisTexfield6_11, &texfield);
    TimeSeries_NumOfSerisTexfield6_11->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_11, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_11->fn->setString(TimeSeries_NumOfSerisTexfield6_11, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_11->fn->setFont(TimeSeries_NumOfSerisTexfield6_11, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_11->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_11, LE_FALSE);
    TimeSeries_PanelWidget_0_4_1->fn->addChild(TimeSeries_PanelWidget_0_4_1, (leWidget*)TimeSeries_NumOfSerisTexfield6_11);

    TimeSeries_NumOfSerisTexfield6_10 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_10->fn->setPosition(TimeSeries_NumOfSerisTexfield6_10, 73, 0);
    TimeSeries_NumOfSerisTexfield6_10->fn->setSize(TimeSeries_NumOfSerisTexfield6_10, 19, 25);
    TimeSeries_NumOfSerisTexfield6_10->fn->setScheme(TimeSeries_NumOfSerisTexfield6_10, &texfield);
    TimeSeries_NumOfSerisTexfield6_10->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_10, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_10->fn->setString(TimeSeries_NumOfSerisTexfield6_10, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_10->fn->setFont(TimeSeries_NumOfSerisTexfield6_10, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_10->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_10, LE_FALSE);
    TimeSeries_PanelWidget_0_4_1->fn->addChild(TimeSeries_PanelWidget_0_4_1, (leWidget*)TimeSeries_NumOfSerisTexfield6_10);

    TimeSeries_NumOfSerisTexfield6_9 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_9->fn->setPosition(TimeSeries_NumOfSerisTexfield6_9, 92, 0);
    TimeSeries_NumOfSerisTexfield6_9->fn->setSize(TimeSeries_NumOfSerisTexfield6_9, 19, 25);
    TimeSeries_NumOfSerisTexfield6_9->fn->setScheme(TimeSeries_NumOfSerisTexfield6_9, &texfield);
    TimeSeries_NumOfSerisTexfield6_9->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_9, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_9->fn->setString(TimeSeries_NumOfSerisTexfield6_9, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_9->fn->setFont(TimeSeries_NumOfSerisTexfield6_9, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_9->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_9, LE_FALSE);
    TimeSeries_PanelWidget_0_4_1->fn->addChild(TimeSeries_PanelWidget_0_4_1, (leWidget*)TimeSeries_NumOfSerisTexfield6_9);

    TimeSeries_NumOfSerisTexfield6_8 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_8->fn->setPosition(TimeSeries_NumOfSerisTexfield6_8, 130, 0);
    TimeSeries_NumOfSerisTexfield6_8->fn->setSize(TimeSeries_NumOfSerisTexfield6_8, 19, 25);
    TimeSeries_NumOfSerisTexfield6_8->fn->setScheme(TimeSeries_NumOfSerisTexfield6_8, &texfield);
    TimeSeries_NumOfSerisTexfield6_8->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_8, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_8->fn->setString(TimeSeries_NumOfSerisTexfield6_8, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_8->fn->setFont(TimeSeries_NumOfSerisTexfield6_8, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_8->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_8, LE_FALSE);
    TimeSeries_PanelWidget_0_4_1->fn->addChild(TimeSeries_PanelWidget_0_4_1, (leWidget*)TimeSeries_NumOfSerisTexfield6_8);

    TimeSeries_NumOfSerisTexfield6_7 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_7->fn->setPosition(TimeSeries_NumOfSerisTexfield6_7, 149, 0);
    TimeSeries_NumOfSerisTexfield6_7->fn->setSize(TimeSeries_NumOfSerisTexfield6_7, 19, 25);
    TimeSeries_NumOfSerisTexfield6_7->fn->setScheme(TimeSeries_NumOfSerisTexfield6_7, &texfield);
    TimeSeries_NumOfSerisTexfield6_7->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_7, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_7->fn->setString(TimeSeries_NumOfSerisTexfield6_7, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_7->fn->setFont(TimeSeries_NumOfSerisTexfield6_7, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_7->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_7, LE_FALSE);
    TimeSeries_PanelWidget_0_4_1->fn->addChild(TimeSeries_PanelWidget_0_4_1, (leWidget*)TimeSeries_NumOfSerisTexfield6_7);

    TimeSeries_PanelWidget_0_4_0 = leWidget_New();
    TimeSeries_PanelWidget_0_4_0->fn->setPosition(TimeSeries_PanelWidget_0_4_0, 376, 85);
    TimeSeries_PanelWidget_0_4_0->fn->setSize(TimeSeries_PanelWidget_0_4_0, 189, 27);
    TimeSeries_PanelWidget_0_4_0->fn->setScheme(TimeSeries_PanelWidget_0_4_0, &BlackBackground);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_PanelWidget_0_4_0);

    TimeSeries_NumOfSerisTexfield6_0 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_0->fn->setPosition(TimeSeries_NumOfSerisTexfield6_0, 16, 0);
    TimeSeries_NumOfSerisTexfield6_0->fn->setSize(TimeSeries_NumOfSerisTexfield6_0, 19, 25);
    TimeSeries_NumOfSerisTexfield6_0->fn->setScheme(TimeSeries_NumOfSerisTexfield6_0, &texfield);
    TimeSeries_NumOfSerisTexfield6_0->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_0, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_0->fn->setString(TimeSeries_NumOfSerisTexfield6_0, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_0->fn->setFont(TimeSeries_NumOfSerisTexfield6_0, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_0->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_0, LE_FALSE);
    TimeSeries_PanelWidget_0_4_0->fn->addChild(TimeSeries_PanelWidget_0_4_0, (leWidget*)TimeSeries_NumOfSerisTexfield6_0);

    TimeSeries_NumOfSerisTexfield6_1 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_1->fn->setPosition(TimeSeries_NumOfSerisTexfield6_1, 35, 0);
    TimeSeries_NumOfSerisTexfield6_1->fn->setSize(TimeSeries_NumOfSerisTexfield6_1, 18, 25);
    TimeSeries_NumOfSerisTexfield6_1->fn->setScheme(TimeSeries_NumOfSerisTexfield6_1, &texfield);
    TimeSeries_NumOfSerisTexfield6_1->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_1, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_1->fn->setString(TimeSeries_NumOfSerisTexfield6_1, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_1->fn->setFont(TimeSeries_NumOfSerisTexfield6_1, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_1->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_1, LE_FALSE);
    TimeSeries_PanelWidget_0_4_0->fn->addChild(TimeSeries_PanelWidget_0_4_0, (leWidget*)TimeSeries_NumOfSerisTexfield6_1);

    TimeSeries_NumOfSerisTexfield6_2 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_2->fn->setPosition(TimeSeries_NumOfSerisTexfield6_2, 73, 0);
    TimeSeries_NumOfSerisTexfield6_2->fn->setSize(TimeSeries_NumOfSerisTexfield6_2, 19, 25);
    TimeSeries_NumOfSerisTexfield6_2->fn->setScheme(TimeSeries_NumOfSerisTexfield6_2, &texfield);
    TimeSeries_NumOfSerisTexfield6_2->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_2, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_2->fn->setString(TimeSeries_NumOfSerisTexfield6_2, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_2->fn->setFont(TimeSeries_NumOfSerisTexfield6_2, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_2->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_2, LE_FALSE);
    TimeSeries_PanelWidget_0_4_0->fn->addChild(TimeSeries_PanelWidget_0_4_0, (leWidget*)TimeSeries_NumOfSerisTexfield6_2);

    TimeSeries_NumOfSerisTexfield6_3 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_3->fn->setPosition(TimeSeries_NumOfSerisTexfield6_3, 92, 0);
    TimeSeries_NumOfSerisTexfield6_3->fn->setSize(TimeSeries_NumOfSerisTexfield6_3, 19, 25);
    TimeSeries_NumOfSerisTexfield6_3->fn->setScheme(TimeSeries_NumOfSerisTexfield6_3, &texfield);
    TimeSeries_NumOfSerisTexfield6_3->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_3, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_3->fn->setString(TimeSeries_NumOfSerisTexfield6_3, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_3->fn->setFont(TimeSeries_NumOfSerisTexfield6_3, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_3->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_3, LE_FALSE);
    TimeSeries_PanelWidget_0_4_0->fn->addChild(TimeSeries_PanelWidget_0_4_0, (leWidget*)TimeSeries_NumOfSerisTexfield6_3);

    TimeSeries_NumOfSerisTexfield6_4 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_4->fn->setPosition(TimeSeries_NumOfSerisTexfield6_4, 130, 0);
    TimeSeries_NumOfSerisTexfield6_4->fn->setSize(TimeSeries_NumOfSerisTexfield6_4, 19, 25);
    TimeSeries_NumOfSerisTexfield6_4->fn->setScheme(TimeSeries_NumOfSerisTexfield6_4, &texfield);
    TimeSeries_NumOfSerisTexfield6_4->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_4, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_4->fn->setString(TimeSeries_NumOfSerisTexfield6_4, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_4->fn->setFont(TimeSeries_NumOfSerisTexfield6_4, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_4->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_4, LE_FALSE);
    TimeSeries_PanelWidget_0_4_0->fn->addChild(TimeSeries_PanelWidget_0_4_0, (leWidget*)TimeSeries_NumOfSerisTexfield6_4);

    TimeSeries_NumOfSerisTexfield6_5 = leTextFieldWidget_New();
    TimeSeries_NumOfSerisTexfield6_5->fn->setPosition(TimeSeries_NumOfSerisTexfield6_5, 149, 0);
    TimeSeries_NumOfSerisTexfield6_5->fn->setSize(TimeSeries_NumOfSerisTexfield6_5, 19, 25);
    TimeSeries_NumOfSerisTexfield6_5->fn->setScheme(TimeSeries_NumOfSerisTexfield6_5, &texfield);
    TimeSeries_NumOfSerisTexfield6_5->fn->setHAlignment(TimeSeries_NumOfSerisTexfield6_5, LE_HALIGN_LEFT);
    TimeSeries_NumOfSerisTexfield6_5->fn->setString(TimeSeries_NumOfSerisTexfield6_5, (leString*)&string_ss0);
    TimeSeries_NumOfSerisTexfield6_5->fn->setFont(TimeSeries_NumOfSerisTexfield6_5, (leFont*)&Roboto_Small);
    TimeSeries_NumOfSerisTexfield6_5->fn->setClearValueOnFirstEdit(TimeSeries_NumOfSerisTexfield6_5, LE_FALSE);
    TimeSeries_PanelWidget_0_4_0->fn->addChild(TimeSeries_PanelWidget_0_4_0, (leWidget*)TimeSeries_NumOfSerisTexfield6_5);

    TimeSeries_LabelWidget_1 = leLabelWidget_New();
    TimeSeries_LabelWidget_1->fn->setPosition(TimeSeries_LabelWidget_1, 487, 86);
    TimeSeries_LabelWidget_1->fn->setSize(TimeSeries_LabelWidget_1, 13, 21);
    TimeSeries_LabelWidget_1->fn->setScheme(TimeSeries_LabelWidget_1, &BlackBackground);
    TimeSeries_LabelWidget_1->fn->setString(TimeSeries_LabelWidget_1, (leString*)&string_twopoint);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_LabelWidget_1);

    TimeSeries_LabelWidget_1_0 = leLabelWidget_New();
    TimeSeries_LabelWidget_1_0->fn->setPosition(TimeSeries_LabelWidget_1_0, 430, 86);
    TimeSeries_LabelWidget_1_0->fn->setSize(TimeSeries_LabelWidget_1_0, 13, 21);
    TimeSeries_LabelWidget_1_0->fn->setScheme(TimeSeries_LabelWidget_1_0, &BlackBackground);
    TimeSeries_LabelWidget_1_0->fn->setString(TimeSeries_LabelWidget_1_0, (leString*)&string_twopoint);
    TimeSeries_GroupBoxWidget_0->fn->addChild(TimeSeries_GroupBoxWidget_0, (leWidget*)TimeSeries_LabelWidget_1_0);

    TimeSeries_GroupBoxWidget_1 = leGroupBoxWidget_New();
    TimeSeries_GroupBoxWidget_1->fn->setPosition(TimeSeries_GroupBoxWidget_1, 39, 326);
    TimeSeries_GroupBoxWidget_1->fn->setSize(TimeSeries_GroupBoxWidget_1, 748, 90);
    TimeSeries_GroupBoxWidget_1->fn->setScheme(TimeSeries_GroupBoxWidget_1, &lightBlackBackground);
    TimeSeries_GroupBoxWidget_1->fn->setBorderType(TimeSeries_GroupBoxWidget_1, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_GroupBoxWidget_1);

    TimeSeries_LabelWidget_0 = leLabelWidget_New();
    TimeSeries_LabelWidget_0->fn->setPosition(TimeSeries_LabelWidget_0, 10, 1);
    TimeSeries_LabelWidget_0->fn->setScheme(TimeSeries_LabelWidget_0, &BlackBackground);
    TimeSeries_LabelWidget_0->fn->setBackgroundType(TimeSeries_LabelWidget_0, LE_WIDGET_BACKGROUND_NONE);
    TimeSeries_LabelWidget_0->fn->setString(TimeSeries_LabelWidget_0, (leString*)&string_Progress);
    TimeSeries_GroupBoxWidget_1->fn->addChild(TimeSeries_GroupBoxWidget_1, (leWidget*)TimeSeries_LabelWidget_0);

    TimeSeries_ProgressBarWidget_0 = leProgressBarWidget_New();
    TimeSeries_ProgressBarWidget_0->fn->setPosition(TimeSeries_ProgressBarWidget_0, 41, 32);
    TimeSeries_ProgressBarWidget_0->fn->setSize(TimeSeries_ProgressBarWidget_0, 389, 25);
    TimeSeries_ProgressBarWidget_0->fn->setScheme(TimeSeries_ProgressBarWidget_0, &progressBar);
    TimeSeries_GroupBoxWidget_1->fn->addChild(TimeSeries_GroupBoxWidget_1, (leWidget*)TimeSeries_ProgressBarWidget_0);

    TimeSeries_RectangleWidget_0 = leRectangleWidget_New();
    TimeSeries_RectangleWidget_0->fn->setPosition(TimeSeries_RectangleWidget_0, 60, 14);
    TimeSeries_RectangleWidget_0->fn->setSize(TimeSeries_RectangleWidget_0, 100, 42);
    TimeSeries_RectangleWidget_0->fn->setScheme(TimeSeries_RectangleWidget_0, &selector);
    TimeSeries_RectangleWidget_0->fn->setBackgroundType(TimeSeries_RectangleWidget_0, LE_WIDGET_BACKGROUND_NONE);
    TimeSeries_RectangleWidget_0->fn->setBorderType(TimeSeries_RectangleWidget_0, LE_WIDGET_BORDER_NONE);
    TimeSeries_RectangleWidget_0->fn->setThickness(TimeSeries_RectangleWidget_0, 2);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_RectangleWidget_0);

    TimeSeries_ButtonWidget_1 = leButtonWidget_New();
    TimeSeries_ButtonWidget_1->fn->setPosition(TimeSeries_ButtonWidget_1, 474, 419);
    TimeSeries_ButtonWidget_1->fn->setSize(TimeSeries_ButtonWidget_1, 84, 56);
    TimeSeries_ButtonWidget_1->fn->setScheme(TimeSeries_ButtonWidget_1, &BlueScheme);
    TimeSeries_ButtonWidget_1->fn->setImageMargin(TimeSeries_ButtonWidget_1, 6);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_ButtonWidget_1);

    TimeSeries_TextFieldWidget_0 = leTextFieldWidget_New();
    TimeSeries_TextFieldWidget_0->fn->setPosition(TimeSeries_TextFieldWidget_0, 413, 254);
    TimeSeries_TextFieldWidget_0->fn->setSize(TimeSeries_TextFieldWidget_0, 190, 25);
    TimeSeries_TextFieldWidget_0->fn->setHAlignment(TimeSeries_TextFieldWidget_0, LE_HALIGN_LEFT);
    TimeSeries_TextFieldWidget_0->fn->setString(TimeSeries_TextFieldWidget_0, (leString*)&string_ss0);
    TimeSeries_TextFieldWidget_0->fn->setFont(TimeSeries_TextFieldWidget_0, (leFont*)&Roboto_Small);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_TextFieldWidget_0);

    TimeSeries_TextFieldWidget_1 = leTextFieldWidget_New();
    TimeSeries_TextFieldWidget_1->fn->setPosition(TimeSeries_TextFieldWidget_1, 575, 354);
    TimeSeries_TextFieldWidget_1->fn->setSize(TimeSeries_TextFieldWidget_1, 141, 25);
    TimeSeries_TextFieldWidget_1->fn->setHAlignment(TimeSeries_TextFieldWidget_1, LE_HALIGN_LEFT);
    TimeSeries_TextFieldWidget_1->fn->setString(TimeSeries_TextFieldWidget_1, (leString*)&string_s1);
    TimeSeries_TextFieldWidget_1->fn->setFont(TimeSeries_TextFieldWidget_1, (leFont*)&Roboto_Small);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_TextFieldWidget_1);

    TimeSeries_LabelWidget_3 = leLabelWidget_New();
    TimeSeries_LabelWidget_3->fn->setPosition(TimeSeries_LabelWidget_3, 577, 328);
    TimeSeries_LabelWidget_3->fn->setSize(TimeSeries_LabelWidget_3, 114, 25);
    TimeSeries_LabelWidget_3->fn->setString(TimeSeries_LabelWidget_3, (leString*)&string_time_elapsed);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_LabelWidget_3);

    TimeSeries_LabelWidget_4 = leLabelWidget_New();
    TimeSeries_LabelWidget_4->fn->setPosition(TimeSeries_LabelWidget_4, 576, 383);
    TimeSeries_LabelWidget_4->fn->setSize(TimeSeries_LabelWidget_4, 121, 25);
    TimeSeries_LabelWidget_4->fn->setString(TimeSeries_LabelWidget_4, (leString*)&string_durationDay);
    root0->fn->addChild(root0, (leWidget*)TimeSeries_LabelWidget_4);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    showing = LE_TRUE;
    init_widgetScreenTimeSeries();

    return LE_SUCCESS;
}

void screenUpdate_TimeSeries(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
    //legato_showScreen(3);
    navigation_TimeSeries();
    
}

void screenHide_TimeSeries(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    TimeSeries_Panel_0 = NULL;
    TimeSeries_LabelWidget_2 = NULL;
    TimeSeries_GroupBoxWidget_0 = NULL;
    TimeSeries_GroupBoxWidget_1 = NULL;
    TimeSeries_RectangleWidget_0 = NULL;
    TimeSeries_ButtonWidget_1 = NULL;
    TimeSeries_TextFieldWidget_0 = NULL;
    TimeSeries_TextFieldWidget_1 = NULL;
    TimeSeries_LabelWidget_3 = NULL;
    TimeSeries_LabelWidget_4 = NULL;
    TimeSeries_NumOfSerisLabel = NULL;
    TimeSeries_TDlabel = NULL;
    TimeSeries_LabelWidget_0_1 = NULL;
    TimeSeries_TimeOnLabel = NULL;
    TimeSeries_LabelWidget_0_0_0 = NULL;
    TimeSeries_LabelWidget_0_0_1 = NULL;
    TimeSeries_LabelWidget_0_0_2 = NULL;
    TimeSeries_NumOfSerisPanel = NULL;
    TimeSeries_LabelWidget_1_1 = NULL;
    TimeSeries_LabelWidget_1_2 = NULL;
    TimeSeries_PanelWidget_0_4_1 = NULL;
    TimeSeries_PanelWidget_0_4_0 = NULL;
    TimeSeries_LabelWidget_1 = NULL;
    TimeSeries_LabelWidget_1_0 = NULL;
    TimeSeries_NumOfSerisTexfield1 = NULL;
    TimeSeries_NumOfSerisTexfield2 = NULL;
    TimeSeries_NumOfSerisTexfield3 = NULL;
    TimeSeries_NumOfSerisTexfield4 = NULL;
    TimeSeries_NumOfSerisTexfield5 = NULL;
    TimeSeries_NumOfSerisTexfield6_6 = NULL;
    TimeSeries_NumOfSerisTexfield6_11 = NULL;
    TimeSeries_NumOfSerisTexfield6_10 = NULL;
    TimeSeries_NumOfSerisTexfield6_9 = NULL;
    TimeSeries_NumOfSerisTexfield6_8 = NULL;
    TimeSeries_NumOfSerisTexfield6_7 = NULL;
    TimeSeries_NumOfSerisTexfield6_0 = NULL;
    TimeSeries_NumOfSerisTexfield6_1 = NULL;
    TimeSeries_NumOfSerisTexfield6_2 = NULL;
    TimeSeries_NumOfSerisTexfield6_3 = NULL;
    TimeSeries_NumOfSerisTexfield6_4 = NULL;
    TimeSeries_NumOfSerisTexfield6_5 = NULL;
    TimeSeries_LabelWidget_0 = NULL;
    TimeSeries_ProgressBarWidget_0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_TimeSeries(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_TimeSeries(uint32_t lyrIdx)
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

