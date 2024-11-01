/*******************************************************************************
 Module for Microchip Legato Graphics Library

  Company:
    Microchip Technology Inc.

  File Name:
    le_gen_assets.h

  Summary:
    Header file containing a list of asset specifications for use with the
    Legato Graphics Stack.


  Description:
    Header file containing a list of asset specifications for use with the
    Legato Graphics Stack.

*******************************************************************************/


// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C)  Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

// DOM-IGNORE-END

#ifndef LE_GEN_ASSETS_H
#define LE_GEN_ASSETS_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

#include "gfx/legato/legato.h"

extern const lePalette leGlobalPalette;

/*****************************************************************************
 * Legato Graphics Image Assets
 *****************************************************************************/
/*********************************
 * Legato Image Asset
 * Name:   Image0
 * Size:   90x30 pixels
 * Type:   RGB Data
 * Format: RGB_888
 ***********************************/
extern leImage Image0;

/*********************************
 * Legato Image Asset
 * Name:   triangle
 * Size:   72x72 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage triangle;

/*********************************
 * Legato Image Asset
 * Name:   square
 * Size:   96x96 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage square;

/*********************************
 * Legato Image Asset
 * Name:   time
 * Size:   96x96 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage time;

/*********************************
 * Legato Image Asset
 * Name:   setting
 * Size:   96x96 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage setting;

/*********************************
 * Legato Image Asset
 * Name:   add
 * Size:   96x96 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage add;

/*********************************
 * Legato Image Asset
 * Name:   share
 * Size:   96x96 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage share;

/*********************************
 * Legato Image Asset
 * Name:   download
 * Size:   96x96 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage download;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         NotoSans_Regular
 * Height:       21
 * Baseline:     22
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  8
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont NotoSans_Regular;

/*********************************
 * Legato Font Asset
 * Name:         Font0
 * Height:       37
 * Baseline:     14
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  1
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Font0;

/*********************************
 * Legato Font Asset
 * Name:         Roboto_Small
 * Height:       37
 * Baseline:     14
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  10
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Roboto_Small;

/*********************************
 * Legato Font Asset
 * Name:         Roboto_bold_big
 * Height:       37
 * Baseline:     20
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  11
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont Roboto_bold_big;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   81
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_trigger3    0
#define stringID_DelayBetSequence    1
#define stringID_general    2
#define stringID_TTLOUTPUT    3
#define stringID_ScreenBrightness    4
#define stringID_ms    5
#define stringID_Smart    6
#define stringID_current1    7
#define stringID_Current    8
#define stringID_durationDay    9
#define stringID_s5    10
#define stringID_mode2    11
#define stringID_twopoint    12
#define stringID_TotalDuration    13
#define stringID_Easy    14
#define stringID_mode3    15
#define stringID_TimeSeries    16
#define stringID_Delete    17
#define stringID_french    18
#define stringID_s2    19
#define stringID_Periodbetweenseries    20
#define stringID_SartDelay    21
#define stringID_start_    22
#define stringID_carac1    23
#define stringID_s8    24
#define stringID_s3    25
#define stringID_time_elapsed    26
#define stringID_running    27
#define stringID_TimeOn    28
#define stringID_Load    29
#define stringID_Loading    30
#define stringID_NumofSeq    31
#define stringID_durationHour    32
#define stringID_mA    33
#define stringID_trigger2    34
#define stringID_mode4    35
#define stringID_repeatable_sequence    36
#define stringID_Trigger    37
#define stringID_Status    38
#define stringID_s7    39
#define stringID_ss0    40
#define stringID_Frequency    41
#define stringID_stopped    42
#define stringID_ch1    43
#define stringID_Back    44
#define stringID_FirmwareVersion    45
#define stringID_s1    46
#define stringID_s11    47
#define stringID_ch2    48
#define stringID_current2    49
#define stringID_en    50
#define stringID_s6    51
#define stringID_s4    52
#define stringID_Mode    53
#define stringID_mode0    54
#define stringID_stop_    55
#define stringID_init_timer    56
#define stringID_UID    57
#define stringID_Language    58
#define stringID_hello    59
#define stringID_NumberOfSeries    60
#define stringID_Empty    61
#define stringID_Fast    62
#define stringID_doricc    63
#define stringID_mode1    64
#define stringID_s10    65
#define stringID_String    66
#define stringID_ch4    67
#define stringID_Channel    68
#define stringID_s12    69
#define stringID_AddChannel    70
#define stringID_current3    71
#define stringID_Progress    72
#define stringID_Hz    73
#define stringID_ch3    74
#define stringID_Lightsource    75
#define stringID_Validate    76
#define stringID_PULSESEQ    77
#define stringID_Default    78
#define stringID_trigger1    79
#define stringID_s9    80

extern const leStringTable stringTable;


// string list
extern leTableString string_trigger3;
extern leTableString string_DelayBetSequence;
extern leTableString string_general;
extern leTableString string_TTLOUTPUT;
extern leTableString string_ScreenBrightness;
extern leTableString string_ms;
extern leTableString string_Smart;
extern leTableString string_current1;
extern leTableString string_Current;
extern leTableString string_durationDay;
extern leTableString string_s5;
extern leTableString string_mode2;
extern leTableString string_twopoint;
extern leTableString string_TotalDuration;
extern leTableString string_Easy;
extern leTableString string_mode3;
extern leTableString string_TimeSeries;
extern leTableString string_Delete;
extern leTableString string_french;
extern leTableString string_s2;
extern leTableString string_Periodbetweenseries;
extern leTableString string_SartDelay;
extern leTableString string_start_;
extern leTableString string_carac1;
extern leTableString string_s8;
extern leTableString string_s3;
extern leTableString string_time_elapsed;
extern leTableString string_running;
extern leTableString string_TimeOn;
extern leTableString string_Load;
extern leTableString string_Loading;
extern leTableString string_NumofSeq;
extern leTableString string_durationHour;
extern leTableString string_mA;
extern leTableString string_trigger2;
extern leTableString string_mode4;
extern leTableString string_repeatable_sequence;
extern leTableString string_Trigger;
extern leTableString string_Status;
extern leTableString string_s7;
extern leTableString string_ss0;
extern leTableString string_Frequency;
extern leTableString string_stopped;
extern leTableString string_ch1;
extern leTableString string_Back;
extern leTableString string_FirmwareVersion;
extern leTableString string_s1;
extern leTableString string_s11;
extern leTableString string_ch2;
extern leTableString string_current2;
extern leTableString string_en;
extern leTableString string_s6;
extern leTableString string_s4;
extern leTableString string_Mode;
extern leTableString string_mode0;
extern leTableString string_stop_;
extern leTableString string_init_timer;
extern leTableString string_UID;
extern leTableString string_Language;
extern leTableString string_hello;
extern leTableString string_NumberOfSeries;
extern leTableString string_Empty;
extern leTableString string_Fast;
extern leTableString string_doricc;
extern leTableString string_mode1;
extern leTableString string_s10;
extern leTableString string_String;
extern leTableString string_ch4;
extern leTableString string_Channel;
extern leTableString string_s12;
extern leTableString string_AddChannel;
extern leTableString string_current3;
extern leTableString string_Progress;
extern leTableString string_Hz;
extern leTableString string_ch3;
extern leTableString string_Lightsource;
extern leTableString string_Validate;
extern leTableString string_PULSESEQ;
extern leTableString string_Default;
extern leTableString string_trigger1;
extern leTableString string_s9;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
