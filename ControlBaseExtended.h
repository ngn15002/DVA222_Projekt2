#pragma once
#include "ControlBase.h"
class ControlBaseExtended : public ControlBase {
public:
	ControlBaseExtended();
	ControlBaseExtended(int x, int y, int w, int h, int z);
	~ControlBaseExtended();
	void SetX(int x);
	void SetY(int y);
	int GetY();
	int GetX();

	int Z;
};

