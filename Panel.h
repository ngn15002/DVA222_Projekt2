#pragma once
#include "Container.h"
#include "Structs.h"
class Panel : public Container
{
public:
	Panel();
	~Panel();
	virtual void Draw();

	void SetPanelColor(int R, int G, int B);

private:
	Color* panelColor;
};

