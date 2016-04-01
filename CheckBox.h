#pragma once
#include "Button.h"
class CheckBox :
	public Button
{
public:
	//Bitmap objects that hold different images for different states of the Button
	//Remember that the images MUST be in 24bit BMP format (use paint if you have images in other format)
	//Also remember that the image with MUST be dividable by 4
	//Also remember that the images must be stored in the same location as your source files

	Label *text;

	bool hit;
	bool pressed;

	CheckBox();
	CheckBox(int locX, int locY, int z);
	CheckBox(int locX, int locY, int z, string text);
	CheckBox(int locX, int locY, int width, int height, int z); 
	CheckBox(int locX, int locY, int width, int height, int z, string text);

	~CheckBox();

	void ChangeColor(int r, int g, int b);

	//The class is overriding the following Event Handlres inherited from the base class 
	virtual void OnMouseMove(int button, int x, int y);
	virtual void OnPaint();
	virtual void OnLoaded();
	virtual void SetX(int x);
	virtual void SetY(int y);
	virtual void OnMouseDown(int button, int x, int y);
};

