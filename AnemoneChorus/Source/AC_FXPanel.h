/*
  ==============================================================================

    AC_FXPanel.h
    Created: 29 Jul 2019 3:40:51pm
    Author:  Walker R. Davis

  ==============================================================================
*/

#pragma once

#include "AC_PanelBase.h"
#include "AC_ParameterSlider.h"
#include "AC_LookAndFeel.h"

enum AC_FXPanelStyle
{
    kAC_FXPanelStyle_Chorus,
    kAC_FXPanelStyle_TotalNumStyles
};

class AC_FXPanel
:   public AC_PanelBase
{
public:
    
    AC_FXPanel(AnemoneChorusAudioProcessor* inProcessor);
    ~AC_FXPanel();
    
    void setFXPanelStyle(AC_FXPanelStyle inStyle);
    
    void paint(Graphics& g) override;
    
private:
    AC_FXPanelStyle mStyle;
    
    OwnedArray<AC_ParameterSlider> mSliders;
};
