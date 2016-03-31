#pragma once
#include "Group.h"
#include "CheckBox.h"

class CheckBoxGroup :
	public Group
{
public:
	CheckBoxGroup();
	CheckBoxGroup(int x, int y, int w, int h, int z);
	CheckBoxGroup(int x, int y, int w, int h, int z, int buttonCount);

	~CheckBoxGroup();

	//Event Handlers
	virtual void OnPaint(void);
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
};

