#pragma once
#include "Container.h"
#include "ColorStruct.h"
class Panel : public Container {
public:
	Panel();
	Panel(int x, int y, int w, int h, int z);
	Panel(int x, int y, int w, int h, int z, Color color);
	~Panel();
	virtual void OnPaint();
	virtual void OnLoaded();
	virtual void OnMouseDown(int button, int x, int y);
	virtual void OnMouseUp(int button, int x, int y);
	virtual void OnMouseMove(int button, int x, int y);

	void SetPanelColor(Color color);

private:
	Color panelColor;
};

