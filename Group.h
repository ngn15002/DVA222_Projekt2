#pragma once
#include "Frame.h"
#include "Button.h"
//#include <vector>

class Group :
	public Frame
{
public:

	Frame *groupFrame;
	int buttonCount;
	Button **buttonArray;
//	vector<Button*> buttons;

	Group();
	Group(int x, int y, int w, int h, int z);
	Group(int x, int y, int w, int h, int z, int buttonCount);

	~Group();

	//Event Handlers
	virtual void OnPaint(void);



};

