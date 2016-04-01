// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Graphix.h"
#include "glut.h"
#include "Button.h"
#include "ImageBox.h"
#include "Container.h"
#include "Label.h"
#include "RadioButton.h"
#include "CheckBox.h"
#include "Panel.h"
#include "Window.h"

using namespace std;


int _tmain(int argc, char** argv)
{
    //A new object of Button type is create and passed to the InitOGL function. 
    //From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
    //This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
    //------------------------------------------------------------------------------------------------------------------------------------
	Color C;
	C.r = 255;
	C.g = 50;
	C.b = 255;
	Color C2;
	C2.r = 0;
	C2.g = 0;
	C2.b = 0;
	ControlBaseExtended* label = new Label(100, 20, 120, 40, 1,"hello", C2);
	ControlBaseExtended* label2 = new Label();

	ControlBaseExtended* image = new ImageBox(10, 10, 100, 100, 2);
	ControlBaseExtended* image2 = new ImageBox();

	ControlBaseExtended* button	 = new Button(100, 20, 120, 40, 1);
	ControlBaseExtended* button2 = new CheckBox(100, 100, 15, 15, 1, "This is a checkbox!");
	ControlBaseExtended* button3 = new RadioButton(100, 200, 20, 20, 1, "This is a radiobutton!");
	CheckBox*			 button4 = new CheckBox(10, 10, 15, 15, 1);

	Container* window = new Window(10,10,600,400,1);
	
	window->AddControl(button);
	window->AddControl(button2);
	window->AddControl(button3);

	
	button4->ChangeColor(255, 0, 0);

	InitOGL(argc, argv, window);

	delete button;
	delete button2;
    delete button3;
	delete button4;
	delete label;
	delete label2;
	delete image;
	delete image2;
	delete window;

	return 0;
}

