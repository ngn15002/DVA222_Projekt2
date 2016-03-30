#include "stdafx.h"
#include "Label.h"


Label::Label()
{
}

Label::Label(int x, int y, int w, int h, int z, std::string S, Color C)
{
	posX = x;
	posY = y;
	width = w;
	height = h;
	zOrdering = z;
	string = S;
	color = C;
}

Label::~Label()
{
}

void Label::SetColour(Color color)
{
	glColor3f(color.r/255.0, color.g/2550.0, color.b/255.0);
}

Color Label::GetColour()
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

void Label::OnPaint()
{
	DrawString(string, posX, posY);
}
