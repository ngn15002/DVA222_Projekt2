#pragma once
#include "Panel.h"
#include "Frame.h"
class Window : public Container {
public:
	Window();
	Window(int x, int y, int w, int h, int z);
	~Window();
	virtual void OnPaint();
	virtual void AddControl(ControlBaseExtended* newControl);
	Panel* panel;
	Frame* frame;
	Rect banner;
};

