#pragma once
#include "ControlBaseExtended.h"
#include <vector>

class Container : public ControlBaseExtended 
{
public:
	Container();
	Container(int x, int y, int w, int h, int z);
	
	~Container();

	virtual void AddControl(ControlBaseExtended* control);

protected:
	vector<ControlBaseExtended*> controls;
};

