#pragma once
#include "ControlBase.h"
class ControlBaseExtended : public ControlBase {
public:
	ControlBaseExtended();
	ControlBaseExtended(int x, int y, int w, int h, int z);
	~ControlBaseExtended();
	virtual void SetX(int x);
	virtual void SetY(int y);
	virtual int GetY();
	virtual int GetX();

	int Z;
};



