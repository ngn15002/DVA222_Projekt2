#include "stdafx.h"
#include "RadioButton.h"
#include "Graphix.h"
#include "glut.h"

using namespace std;

RadioButton::RadioButton()
{
	this->X = 10;
	this->Y = 10;
	this->Z = 1;
	Width = 20;
	Height = 20;
	buttonLabel = new Label(this->X + this->Width, this->Y + this->Height - ((this->Y - 12)/2), this->Z, "This is a radiobutton!", 0, 0, 0);
	hit = pressed = false;
}

RadioButton::RadioButton(int locX, int locY, int z)
{
	this->X = locX;
	this->Y = locY;
	this->Z = z;
	Height = 20;
	Width = 20;
	buttonLabel = new Label(this->X + this->Width, this->Y + this->Height - ((this->Y - 12) / 2), this->Z, "This is a radiobutton!", 0, 0, 0);
	hit = pressed = false;
}

RadioButton::RadioButton(int locX, int locY, int z, string text)
{
	this->X = locX;
	this->Y = locY;
	this->Z = z;
	Height = 20;
	Width = 20;

	buttonLabel = new Label(this->X + this->Width, this->Y + this->Height - ((this->Y - 12) / 2), this->Z, text, 0, 0, 0);
	hit = pressed = false;
}

RadioButton::RadioButton(int locX, int locY, int width, int height, int z)
	: Button(locX, locY, width, height, z)
{
	hit = pressed = false;
}

RadioButton::RadioButton(int locX, int locY, int width, int height, int z, string text)
	: Button(locX, locY, width, height, z)
{
	buttonLabel = new Label(this->X + this->Width, this->Y + this->Height - ((this->Y - 12) / 2), this->Z, text, 0, 0, 0);
	hit = pressed = false;
}

RadioButton::~RadioButton()
{
	delete normal;
	delete hover;
	delete press;
	delete buttonLabel;
}

//This is called whenever the user moves the mouse around
void RadioButton::OnMouseMove(int button, int x, int y)
{
	if (x>X && x < X + Width && y>Y && y < Y + Height)
		hit = true;
	else
	{
		hit = false;
	}
}

//This is called whenever the application wants to redraw its contents. We have already set it to 30 fps. You cannot change that
void RadioButton::OnPaint()
{
	if (pressed)
	{
		DrawBitmap(*press, X, Y, Width, Height);
	}
	else if (hit)
	{
		DrawBitmap(*hover, X, Y, Width, Height);
	}
	else
	{
		DrawBitmap(*normal, X, Y, Width, Height);
	}
	this->buttonLabel->OnPaint();
}

//Is called once, when the object is being loaded
void RadioButton::OnLoaded()
{
	//Only 24bit bmp files are supported
	//Edit your bitmaps in MSPaint also remember that the width of the image MUST be a factor of 4 (be dividable by 4)

	normal = new Bitmap("RadioButtonNorm.bmp");
	hover = new Bitmap("RadioButtonNorm.bmp");
	press = new Bitmap("RadioButtonPressed.bmp");

}

//Is called when the user presses any of the mouse buttons down
void RadioButton::OnMouseDown(int button, int x, int y)
{
	if (hit && button == MOUSE_LEFT)
	{
		if (pressed == false)
		{
			pressed = true;
		}
		else
		{
			pressed = false;
		}
	}
}