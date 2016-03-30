#include "StdAfx.h"
#include "Button.h"
#include "Graphix.h"
#include "glut.h"

using namespace std;

// This is just a sample code to show you how you can use different Event Handlers in your code


Button::Button()
{
	hit = pressed = false;
	X = 100;
	Y = 100;
	Width = 100;
	Height = 100;
	this->text = "Default string";

}

Button::Button(int locX, int locY, int width, int height)
	: ControlBaseExtended(locX, locY, width, height)
{
	hit = pressed = false;
	this->text = "Default string";

}

Button::Button(int locX, int locY, int width, int height, int z, string text)
	: ControlBaseExtended(locX, locY, width, height, z)
{
	hit = pressed = false;
	this->text = text;
}


Button::~Button()
{
	delete normal;
	delete hover;
	delete press;
}

//This is called whenever the user moves the mouse around
void Button::OnMouseMove(int button, int x, int y)
{
	if (x>X && x < X + Width && y>Y && y < Y + Height)
		hit = true;
	else
	{
		pressed = hit = false;
	}
}

//This is called whenever the application wants to redraw its contents. We have already set it to 30 fps. You cannot change that
void Button::OnPaint()
{
	SetColor(0, 0, 0);
	if (pressed)
	{
		DrawBitmap(*press, X, Y, Width, Height);
		DrawString(text, X + 20, (Y + (Height - 10) / 2) + 10);
	}
	else if (hit)
	{
		DrawBitmap(*hover, X, Y, Width, Height);
		DrawString(text, X + 20, (Y + (Height - 10) / 2) + 10);
	}
	else
	{
		DrawBitmap(*normal, X, Y, Width, Height);
		DrawString(text, X + 20, (Y + (Height - 10) / 2) + 10);
	}
}

//Is called once, when the object is being loaded
void Button::OnLoaded()
{
	//Only 24bit bmp files are supported
	//Edit your bitmaps in MSPaint also remember that the width of the image MUST be a factor of 4 (be dividable by 4)

	normal = new Bitmap("ButtonNormal.bmp");
	hover = new Bitmap("ButtonHover.bmp");
	press = new Bitmap("ButtonPressed.bmp");

}

//Is called when the user presses any of the mouse buttons down
void Button::OnMouseDown(int button, int x, int y)
{
	if (hit && button == MOUSE_LEFT)
		pressed = true;
}

//Is called when the user releases any of the mouse buttons down
void Button::OnMouseUp(int button, int x, int y)
{
	pressed = false;
}