#include "stdafx.h"
#include "RadioButtonGroup.h"


RadioButtonGroup::RadioButtonGroup()
	:Group()
{
	buttonArray = new Button*[buttonCount];

	for (int i = 0; i < buttonCount; i++)
	{
		buttonArray[i] = new RadioButton(X + 20, Y + 30 + 20 * i, Z);
	}
}

RadioButtonGroup::RadioButtonGroup(int x, int y, int w, int h, int z)
	:Group(x, y, w, h, z)
{
	buttonArray = new Button*[buttonCount];

	for (int i = 0; i < buttonCount; i++)
	{
		buttonArray[i] = new RadioButton(X + 20, Y + 30 + 20 * i, Z);
	}
}

RadioButtonGroup::RadioButtonGroup(int x, int y, int w, int h, int z, int buttonCount)
	:Group(x, y, w, h, z, buttonCount)
{
	buttonArray = new Button*[buttonCount];

	for (int i = 0; i < buttonCount; i++)
	{
		buttonArray[i] = new RadioButton(X + 20, Y + 30 + 20 * i, Z);
	}
}


RadioButtonGroup::~RadioButtonGroup()
{
	for (int i = 0; i < buttonCount; i++)
	{
		delete[] buttonArray[i];
	}
	delete[] buttonArray;
}

void RadioButtonGroup::OnPaint(void)
{

}

void RadioButtonGroup::OnMouseUp(int button, int x, int y)
{
}

void RadioButtonGroup::OnMouseDown(int button, int x, int y)
{
}

void RadioButtonGroup::OnMouseMove(int button, int x, int y)
{
}

