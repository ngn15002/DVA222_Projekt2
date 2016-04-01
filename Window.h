#pragma once
#include "Container.h"
#include "Panel.h"
#include "Frame.h"

class Window : public Container {

protected:
	int mouseMovmentX, mouseMovmentY, changeCoords;
	bool hit, pressed;
	Rect banner;

public:
	Window();
	Window(int x, int y, int w, int h, int z);
	~Window();

	Panel* panel;
	Frame* frame;


	void OnMouseDown(int button, int locX, int locY);
	void OnMouseMove(int button, int locX, int locY);
	void OnMouseUp(int button, int locX, int locY);
	virtual void AddControl(ControlBaseExtended* control);
	virtual void SetX(int x);
	virtual void SetY(int y);
	void OnPaint();
	void OnLoaded();
};