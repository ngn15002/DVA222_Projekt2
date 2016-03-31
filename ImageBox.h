#pragma once
#include "StdAfx.h"
#include "Graphix.h"
#include "glut.h"
#include "ControlBaseExtended.h"

class ImageBox :
	public ControlBaseExtended
{
public:
	ImageBox(int locX, int locY, int width, int height, int z);
	ImageBox();

	~ImageBox();

	//Event Handlers
	virtual void OnLoaded();
	virtual void OnPaint();

	Bitmap *image;

private:


};

