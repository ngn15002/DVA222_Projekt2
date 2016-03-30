#include "stdafx.h"
#include "Label.h"
#include "Graphix.h"


Label::Label()
{
	color.r = 0;
	color.g = 0;
	color.b = 0;

	X = 100;
	Y = 100;

	this->text = "hello world!";
}

Label::Label(int x, int y, int w, int h, int z)
	: ControlBaseExtended(x, y, w, h)
{
	color.r = 0;
	color.g = 0;
	color.b = 0;

	this->text = "hello world!";
}

Label::Label(int x, int y, int w, int h, int z, string text)
	: ControlBaseExtended(x, y, w, h)
{
	color.r = 100;
	color.g = 200;
	color.b = 200;

	this->text = text;

}
Label::Label(int x, int y, int w, int h, int z, string text, Color color)
	: ControlBaseExtended(x, y, w, h)
{
	this->color.r = color.r;
	this->color.g = color.g;
	this->color.b = color.b;

	this->text = text;

}

Label::~Label()
{
	DrawString(this->text, this->X, this->Y);
}

void Label::OnPaint()
{
	SetColor(color.r, color.g, color.b);
	DrawString(this->text, this->X, this->Y);
}


void Label::SetColour(Color color)
{
	this->color.r = color.r;
	this->color.g = color.g;
	this->color.b = color.b;
}

Color Label::GetColour()
{
	return this->color;
}

void Label::SetString(string text)
{
	this->text = text;
}

string Label::GetString()
{
	return text;
}