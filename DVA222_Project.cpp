// DVA222_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Graphix.h"
#include "glut.h"
#include "MyButton.h"
#include "Button.h"
#include "ImageBox.h"
#include "Container.h"
#include "Label.h"
#include "RadioButton.h"
#include "CheckBox.h"
#include "Panel.h"
#include "Frame.h"
#include "Window.h"
#include "Group.h"
#include "RadioButtonGroup.h"
#include "CheckBoxGroup.h"

using namespace std;


int _tmain(int argc, char** argv)
{
    //A new object of Button type is create and passed to the InitOGL function. 
    //From that point the control is handed over to the OpenGL window and stays there until the user closes the Window.
    //This means after calling the InitOGL function no further lines of code in the main function are executed until we close the Window.
    //------------------------------------------------------------------------------------------------------------------------------------
    ControlBase* button = new Button(10,10,190,60);
	Color C;
	C.r = 0;
	C.g = 0;
	C.b = 0;
	ControlBase* label = new Label(10, 10, 190, 60, 1,"hello", C);
	ControlBase* label2 = new Label();
	ControlBase* image = new ImageBox(10, 10, 100, 100);
	ControlBase* image2 = new ImageBox();
	ControlBase* button2 = new CheckBox(300, 300, 15, 15, "This is a checkbox!");
	ControlBase* button3 = new RadioButton(300, 300, 20, 20, "This is a radiobutton!");


	InitOGL(argc, argv, button3);

    delete button;
	return 0;
}

