#include "StdAfx.h"
#include "CheckBox.h"
#include "Graphix.h"
#include "glut.h"

using namespace std;

// This is just a sample code to show you how you can use different Event Handlers in your code


CheckBox::CheckBox()
{
	X = 10;
	Y = 10;
	Width = 15;
	Height = 15;
	this->text = new Label(this->X + this->Width, this->Y + 12, this->Z, "This is a checkbox!", 0, 0, 0);

	hit = pressed = false;
}

CheckBox::CheckBox(int locX, int locY, int z)
{
	this->X = locX;
	this->Y = locY;
	this->Z = z;
	Height = 15;
	Width = 15;
	this->text = new Label(this->X + this->Width, this->Y + 12, this->Z, "This is a checkbox!", 0, 0, 0);

	hit = pressed = false;
}

CheckBox::CheckBox(int locX, int locY, int z, string text)
{
	this->X = locX;
	this->Y = locY;
	this->Z = z;
	Height = 15;
	Width = 15;
	this->text = new Label(this->X + this->Width, this->Y + 12, this->Z, text, 0, 0, 0);

	hit = pressed = false;
}

CheckBox::CheckBox(int locX, int locY, int width, int height, int z)
	: Button(locX, locY, width, height, z)
{
	hit = pressed = false;
	this->text = new Label(this->X + this->Width, this->Y + 12, this->Z, "This is a checkbox!", 0, 0, 0);
}

CheckBox::CheckBox(int locX, int locY, int width, int height, int z, string text)
	: Button(locX, locY, width, height, z)
{
	hit = pressed = false;
	this->text = new Label(this->X + this->Width, this->Y + 12, this->Z, text, 0, 0, 0);

}

CheckBox::~CheckBox()
{
	delete normal;
	delete hover;
	delete press;
}

void CheckBox::ChangeColor(int r, int g, int b)
{
	Color tempColor;
	tempColor.r = r;
	tempColor.g = g;
	tempColor.b = b;

	text->SetColour(tempColor);
}

//This is called whenever the user moves the mouse around
void CheckBox::OnMouseMove(int button, int x, int y)
{
	if (x>X && x < X + Width && y>Y && y < Y + Height)
		hit = true;
	else
	{
		hit = false;
	}
}

//This is called whenever the application wants to redraw its contents. We have already set it to 30 fps. You cannot change that
void CheckBox::OnPaint()
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
	text->OnPaint();
}
//Is called once, when the object is being loaded
void CheckBox::OnLoaded()
{
	//Only 24bit bmp files are supported
	//Edit your bitmaps in MSPaint also remember that the width of the image MUST be a factor of 4 (be dividable by 4)

	normal = new Bitmap("checkbox.bmp");
	hover = new Bitmap("checkbox.bmp");
	press = new Bitmap("checkbox_checked.bmp");

}

//Is called when the user presses any of the mouse buttons down
void CheckBox::OnMouseDown(int button, int x, int y)
{
	if (hit && button == MOUSE_LEFT)
	{
		if (pressed == true)
		{
			pressed = false;
		}
		else
		{
			pressed = true;
		}
	}
}

