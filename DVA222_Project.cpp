

// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Graphix.h"
#include "glut.h"
#include "Button.h"
#include "Label.h"
#include "Frame.h"
#include "Window.h"

using namespace std;




int _tmain(int argc, char** argv)
{
    //A new object of Button type is create and passed to the InitOGL function. 
    //From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
    //This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
    //------------------------------------------------------------------------------------------------------------------------------------
    
	ControlBaseExtended* button = new Button(10,100,50,30,1, "Button");
	ControlBaseExtended* label = new Label(12,12,1, "Label", 0,0,0);
	Window* window = new Window(10, 10, 500, 300, 1);

	window->panel->SetPanelColor(250, 250, 250);
	window->frame->SetFrameColor(200, 200, 200);
	window->frame->SetFrameLabel("Window", 0, 0, 0);
	//window->AddControl(button);



	InitOGL(argc, argv, window);

    delete button;
	delete label;
	delete window;
	return 0;
}

