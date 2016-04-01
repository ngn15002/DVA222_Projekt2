#pragma once
#include "Group.h"
#include "RadioButton.h"

class RadioButtonGroup :
	public Group
{
public:
	RadioButtonGroup();
	RadioButtonGroup(int x, int y, int w, int h, int z);
	RadioButtonGroup(int x, int y, int w, int h, int z, int buttonCount);

	~RadioButtonGroup();

	//Event Handlers
	virtual void OnPaint(void);
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);

};

