#pragma once
#include "Panel.h"
#include "Frame.h"
class Window : public Container {
public:
	Panel* panel;
	Frame* frame;
	Rect banner;
	bool hit;
	bool pressed;
	Point speed;
	
	Window();
	Window(int x, int y, int w, int h, int z);
	~Window();
	virtual void AddControl(ControlBaseExtended* newControl);
	virtual void OnPaint();
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
	virtual void OnResize(int width, int height);
};

