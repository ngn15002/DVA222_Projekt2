#include "StdAfx.h"
#include "MyButton.h"
#include "Graphix.h"
#include "glut.h"

using namespace std;

// This is just a sample code to show you how you can use different Event Handlers in your code


MyButton::MyButton()
{
    hit = pressed = false;
}

MyButton::MyButton(int locX, int locY, int width, int height)
    : ControlBase(locX, locY, width, height)
{
    hit = pressed = false;
}

MyButton::~MyButton()
{
    delete normal;
    delete hover;
    delete press;
}

//This is called whenever the user moves the mouse around
void MyButton::OnMouseMove(int button, int x, int y)
{
	if (x>X && x < X+Width && y>Y && y < Y+Height)
		hit = true;
	else
    {
		pressed = hit = false;
    }
}

//This is called whenever the application wants to redraw its contents. We have already set it to 30 fps. You cannot change that
void MyButton::OnPaint()
{
    if (pressed)
    	DrawBitmap(*press, X,Y,Width, Height);	
	else if (hit)
    	DrawBitmap(*hover, X,Y,Width, Height);
    else
        DrawBitmap(*normal, X,Y,Width, Height);
    
}

//Is called once, when the object is being loaded
void MyButton::OnLoaded()
{		
	//Only 24bit bmp files are supported
	//Edit your bitmaps in MSPaint also remember that the width of the image MUST be a factor of 4 (be dividable by 4)

	normal = new Bitmap("ButtonNorm.bmp");		
    hover  = new Bitmap("ButtonHover.bmp");		
    press = new Bitmap("ButtonPressed.bmp");		
		
}	

//Is called when the user presses any of the mouse buttons down
void MyButton::OnMouseDown(int button, int x, int y)
{
    if(hit && button==MOUSE_LEFT)
        pressed = true;
}

//Is called when the user releases any of the mouse buttons down
void MyButton::OnMouseUp(int button, int x, int y)
{
    pressed = false;
}
