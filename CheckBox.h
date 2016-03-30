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

	bool hit;
	bool pressed;

	CheckBox();
	CheckBox(int locX, int locY);
	CheckBox(int locX, int locY, string text);
	CheckBox(int locX, int locY, int width, int height); 
	CheckBox(int locX, int locY, int width, int height, string text);

	~CheckBox();

	//The class is overriding the following Event Handlres inherited from the base class 
	virtual void OnMouseMove(int button, int x, int y);
	virtual void OnPaint();
	virtual void OnLoaded();
	void OnMouseDown(int button, int x, int y);
};

