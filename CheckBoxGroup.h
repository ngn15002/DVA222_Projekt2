#pragma once
#include "Group.h"
class CheckBoxGroup :
	public Group
{
public:
	CheckBoxGroup();
	~CheckBoxGroup();

	//Event Handlers
	virtual void OnLoaded();
	virtual void OnPaint(void);
	virtual void OnKeyboard(unsigned char key, int x, int y);
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
	virtual void OnResize(int width, int height);
};

