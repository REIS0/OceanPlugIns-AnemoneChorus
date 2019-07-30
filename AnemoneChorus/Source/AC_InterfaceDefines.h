/*
  ==============================================================================

    AC_InterfaceDefines.h
    Created: 29 Jul 2019 2:21:31pm
    Author:  Walker R. Davis

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

#define MAIN_PANEL_WIDTH                750
#define MAIN_PANEL_HEIGHT               300

#define TOP_PANEL_WIDTH                 MAIN_PANEL_WIDTH
#define TOP_PANEL_HEIGHT                45

#define CENTER_PANEL_WIDTH              MAIN_PANEL_WIDTH
#define CENTER_PANEL_HEIGHT             MAIN_PANEL_HEIGHT -TOP_PANEL_HEIGHT

#define FX_PANEL_WIDTH                  CENTER_PANEL_WIDTH
#define FX_PANEL_HEIGHT                 CENTER_PANEL_HEIGHT


//#define GAIN_PANEL_WIDTH                100
//#define GAIN_PANEL_HEIGHT               MAIN_PANEL_HEIGHT -TOP_PANEL_HEIGHT
//
//#define CENTER_PANEL_WIDTH              MAIN_PANEL_WIDTH - (GAIN_PANEL_WIDTH * 2)
//#define CENTER_PANEL_HEIGHT             GAIN_PANEL_HEIGHT
//
//#define CENTER_PANEL_MENU_BAR_WIDTH     CENTER_PANEL_WIDTH
//#define CENTER_PANEL_MENU_BAR_HEIGHT    35
//
//#define FX_PANEL_WIDTH                  CENTER_PANEL_WIDTH
//#define FX_PANEL_HEIGHT                 MAIN_PANEL_HEIGHT -TOP_PANEL_HEIGHT


const Colour AC_Colour_1 = Colour(105, 105, 105);
const Colour AC_Colour_2 = Colour(0, 0, 0).withAlpha(0.0f);
const Colour AC_Colour_3 = Colour(0, 0, 0).withAlpha(0.3f);
const Colour AC_Colour_4 = Colour(0, 0, 0).withAlpha(0.6f);
const Colour AC_Colour_5 = Colour(105, 105, 105).withAlpha(0.3f);
const Colour AC_Colour_6 = Colour(0, 0, 0).withAlpha(0.8f);
const Colour AC_Colour_7 = Colour(125, 125, 125);

const Font font_1 ( "Helvetica Neue", 12.0f, Font::bold);
const Font font_2 ( "Helvetica Neue", 22.0f, Font::bold);
const Font font_3 ( "Helvetica Neue", 48.0f, Font::bold);
