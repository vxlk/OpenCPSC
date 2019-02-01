/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
	///ADD A LISTENER TO THE BUTTON ... REDIRECT TO NEW CLASS -> THAT COURSE'S HOME PAGE
    setSize (600, 400);
	for (int i = 0; i < numCourses; ++i)
	{
		//would eventually access a course directory
		courseList.push_back(new TextButton("CPSC", "the first course I am offering"));
		courseList[i]->setBounds(10, 70, 90, 20); // sets the x position, y position, width, and height of the button
		//courseList[i]->addListener(this); // allows the editor to respond to clicks
		courseList[i]->setClickingTogglesState(true); // makes the button toggle its state when clicked
		addAndMakeVisible(courseList[i]);
	}
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Welcome, click a degree program to get started", getLocalBounds(), Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
