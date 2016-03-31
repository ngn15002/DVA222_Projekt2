#pragma once
#include "Container.h"
#include "ColorStruct.h"
class Panel : public Container {
public:
	Panel();
	Panel(int x, int y, int w, int h, int z);
	~Panel();
	virtual void OnPaint();

	void SetPanelColor(int R, int G, int B);

private:
	Color panelColor;
};