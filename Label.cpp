#include "stdafx.h"
#include "Label.h"


Label::Label()
{
}

Label::Label(int x, int y, int w, int h, int z, std::string string, Color color)
{

}

Label::~Label()
{
}

void Label::SetColor(Color color)
{
	glColor3f(color.r, color.g, color.b);
}

Color Label::GetColor()
{
	return this->color;
}

void Label::SetString(std::string S)
{
	string = S;
}

string Label::GetString()
{
	return string;
}
