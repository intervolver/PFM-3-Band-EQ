/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PFM_3BandEQAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    PFM_3BandEQAudioProcessorEditor (PFM_3BandEQAudioProcessor&);
    ~PFM_3BandEQAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PFM_3BandEQAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PFM_3BandEQAudioProcessorEditor)
};
