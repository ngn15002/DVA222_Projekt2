#pragma once
#include "Container.h"
#include "Label.h"
#include "Structs.h"
class Frame :
	public Container
{
public:
	Frame();
	~Frame();
	virtual void Draw();
	void SetFrameColor(int R, int G, int B);

protected:
	Label* label;
	Color* frameColor;
};

