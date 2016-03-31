#pragma once
#include "StdAfx.h"
#include "Graphix.h"
#include "glut.h"
#include "Button.h"

class RadioButton :
	public Button
{
public:

	Label *text;

	bool hit;
	bool pressed;

	RadioButton();
	RadioButton(int locX, int locY, int z);
	RadioButton(int locX, int locY, int z, string text);
	RadioButton(int locX, int locY, int width, int height, int z);
	RadioButton(int locX, int locY, int width, int height, int z, string text);

	~RadioButton();

	void ChangeColor(int r, int g, int b);

	//The class is overriding the following Event Handlres inherited from the base class 
	virtual void OnMouseMove(int button, int x, int y);
	virtual void OnPaint();
	virtual void OnLoaded();
	void OnMouseDown(int button, int x, int y);
};

