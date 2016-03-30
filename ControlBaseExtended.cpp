#include "stdafx.h"
#include "ControlBaseExtended.h"


ControlBaseExtended::ControlBaseExtended()
{
}

ControlBaseExtended::ControlBaseExtended(int x, int y, int w, int h)
{
	X = x;
	Y = y;
	Width = w;
	Height = h;
}
ControlBaseExtended::ControlBaseExtended(int x, int y, int w, int h, int z)
	: ControlBaseExtended(x, y, w, h)
{
	this->z = z;
}

ControlBaseExtended::~ControlBaseExtended()
{
}

void ControlBaseExtended::OnLoaded(void)
{

}

void ControlBaseExtended::OnPaint(void)
{

}


void ControlBaseExtended::OnKeyboard(unsigned char key, int x, int y)
{
}

void ControlBaseExtended::OnMouseUp(int button, int x, int y)
{
}

void ControlBaseExtended::OnMouseDown(int button, int x, int y)
{
}

void ControlBaseExtended::OnMouseMove(int button, int x, int y)
{
}

void ControlBaseExtended::OnResize(int width, int height)
{
}

int ControlBaseExtended::GetZ()
{
	return z;
}

void ControlBaseExtended::SetZ(int z)
{
	this->z = z;
}