/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_B2FEDF9B81DB820__
#define __JUCE_HEADER_B2FEDF9B81DB820__

//[Headers]     -- You can add your own extra header files here --
/*
 Copyright 2012-2014 Eigenlabs Ltd.  http://www.eigenlabs.com

 This file is part of EigenD.

 EigenD is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 EigenD is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with EigenD.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <piw/piw_tsd.h>
#include "workspace.h"
#include "juce.h"
#include "XYMapComponent.h"
#include <list>
class XYMapComponent;

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MappingPanel  : public Component
{
public:
    //==============================================================================
    MappingPanel (Atom* atom, String mapping, Component* editor);
    ~MappingPanel();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void addElement();
    void removeElement(XYMapComponent*);
    void updateMapping();
    void setUpstreamKeys(String);
    void displayMapping(String);
    void revertMapping(String);
    void checkRevertable();
    void clearMapping();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    std::list<XYMapComponent*> elements_;
    Atom* atom_;
    String mapping_;
    String makeMappingString();
    String makeDisplayedMappingString();
    Component* editor_;
    void doDisplayMapping(String);
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MappingPanel)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_B2FEDF9B81DB820__
