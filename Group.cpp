#include "stdafx.h"
#include "Group.h"
#include "Graphix.h"
#include "glut.h"


Group::Group()
{
	X = 100;
	Y = 100;
	Z = 1;
	Width = 200;
	Height = 100;

	groupFrame = new Frame(X, Y, Width, Height, Z);
	groupFrame->frameLabel->ChangeLocY(-18);

	this->buttonCount = 2;
}

Group::Group(int x, int y, int w, int h, int z)
{
	X = x;
	Y = y;
	Z = z;
	Width = w;
	Height = h;

	groupFrame = new Frame(X, Y, Width, Height, Z);
	groupFrame->frameLabel->ChangeLocY(-18);

	this->buttonCount = 2;
}

Group::Group(int x, int y, int w, int h, int z, int buttonCount)
{
	X = x;
	Y = y;
	Z = z;
	Width = w;
	Height = h;

	groupFrame = new Frame(X, Y, Width, Height, Z);
	groupFrame->frameLabel->ChangeLocY(-18);

	this->buttonCount = buttonCount;
}

Group::~Group()
{
}

void Group::OnPaint()
{
	groupFrame->OnPaint();
}

