#pragma once
#include "Container.h"
#include "Label.h"
#include "ColorStruct.h"
class Frame : public Container 
{
public:
	Frame();
	Frame(int x, int y, int w, int h, int z);
	
	~Frame();

	virtual void OnPaint();

	void SetFrameColor(int R, int G, int B);
	void SetFrameLabel(string newString, int R, int G, int B);

	Label* frameLabel;
	Color frameColor;
};



