#ifndef LE_GEN_SCREEN_LOADCONFIG_H
#define LE_GEN_SCREEN_LOADCONFIG_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* LoadConfig_Panel_config;
extern leLabelWidget* LoadConfig_title_config;
extern leButtonWidget* LoadConfig_load_config;
extern leWidget* LoadConfig_PanelAllConfigIn;
extern leLabelWidget* LoadConfig_PanelConfig1;
extern leLabelWidget* LoadConfig_PanelConfig2;
extern leLabelWidget* LoadConfig_PanelConfig3;
extern leLabelWidget* LoadConfig_PanelConfig4;
extern leLabelWidget* LoadConfig_PanelConfig5;
extern leLabelWidget* LoadConfig_PanelConfig6;
extern leLabelWidget* LoadConfig_panelNumber1;
extern leLabelWidget* LoadConfig_panelNumber3;
extern leLabelWidget* LoadConfig_panelNumber4;
extern leLabelWidget* LoadConfig_panelNumber6;
extern leLabelWidget* LoadConfig_panelNumber5;
extern leLabelWidget* LoadConfig_panelNumber2;
extern leRectangleWidget* LoadConfig_RectangleWidget_0;
extern leLabelWidget* LoadConfig_panelNumber7;
extern leLabelWidget* LoadConfig_PanelConfig7;
extern leLabelWidget* LoadConfig_PanelConfig8;
extern leLabelWidget* LoadConfig_panelNumber8;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_LoadConfig(void); // called when Legato is initialized
leResult screenShow_LoadConfig(void); // called when screen is shown
void screenHide_LoadConfig(void); // called when screen is hidden
void screenDestroy_LoadConfig(void); // called when Legato is destroyed
void screenUpdate_LoadConfig(void); // called when Legato is updating

leWidget* screenGetRoot_LoadConfig(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_LOADCONFIG_H
