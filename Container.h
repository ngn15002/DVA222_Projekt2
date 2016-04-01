#pragma once
#include "ControlBaseExtended.h"
#include <vector>

class Container : public ControlBaseExtended {
public:
	Container();
	Container(int x, int y, int w, int h, int z);
	~Container();
	virtual void AddControl(ControlBaseExtended* control);
	virtual void OnLoaded();
	virtual void SetX(int x);
	virtual void SetY(int y);
protected:
	vector<ControlBaseExtended*> controls;
};

bool CompareZ(ControlBaseExtended* A, ControlBaseExtended* B);