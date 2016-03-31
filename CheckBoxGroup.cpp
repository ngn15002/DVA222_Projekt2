#include "stdafx.h"
#include "CheckBoxGroup.h"

CheckBoxGroup::CheckBoxGroup()
	:Group()
{
	buttonArray = new Button*[buttonCount];

	for (int i = 0; i < buttonCount; i++)
	{
		buttonArray[i] = new CheckBox(X+20, Y+30+20*i, Z);
	}
}

CheckBoxGroup::CheckBoxGroup(int x, int y, int w, int h, int z)
	:Group(x, y, w, h, z)
{
	buttonArray = new Button*[buttonCount];

	for (int i = 0; i < buttonCount; i++)
	{
		buttonArray[i] = new CheckBox(X + 20, Y + 30 + 20 * i, Z);
	}
}

CheckBoxGroup::CheckBoxGroup(int x, int y, int w, int h, int z, int buttonCount)
	:Group(x, y, w, h, z, buttonCount)
{
	buttonArray = new Button*[buttonCount];

	for (int i = 0; i < buttonCount; i++)
	{
		buttonArray[i] = new CheckBox(X + 20, Y + 30 + 20 * i, Z);
	}
}

CheckBoxGroup::~CheckBoxGroup()
{
	for (int i = 0; i < buttonCount; i++)
	{
		delete[] buttonArray[i];
	}
	delete[] buttonArray;
}


void CheckBoxGroup::OnPaint(void)
{
	Group::OnPaint();

	for (int i = 0; i < buttonCount; i++)
	{
		buttonArray[i]->OnLoaded();
		buttonArray[i]->OnPaint();
	}
}


void CheckBoxGroup::OnMouseDown(int button, int x, int y)
{
	for (int i = 0; i < buttonCount; i++)
	{
		buttonArray[i]->OnMouseDown(button, x, y);
	}
}

void CheckBoxGroup::OnMouseMove(int button, int x, int y)
{
	for (int i = 0; i < buttonCount; i++)
	{
		buttonArray[i]->OnMouseMove(button, x, y);
	}
}


