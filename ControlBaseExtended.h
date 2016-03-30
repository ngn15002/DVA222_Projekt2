#pragma once
#include "ControlBase.h"

class ControlBaseExtended : public ControlBase
{
public:
	ControlBaseExtended();
	ControlBaseExtended(int x, int y, int w, int h);
	ControlBaseExtended(int x, int y, int w, int h, int z);
	~ControlBaseExtended();

	//Event Handlers
	virtual void OnLoaded();
	virtual void OnPaint(void);
	virtual void OnKeyboard(unsigned char key, int x, int y);
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);
	virtual void OnResize(int width, int height);

	int GetZ();
	void SetZ(int z);

private:
	int z;
};

