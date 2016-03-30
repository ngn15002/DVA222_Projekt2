#pragma once
#include "Container.h"
class Panel :
	public Container
{
public:
	Panel();
	~Panel();

	//Event Handlers
	virtual void OnLoaded();
	virtual void OnPaint(void);
	virtual void OnKeyboard(unsigned char key, int x, int y);
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
	virtual void OnResize(int width, int height);
};

