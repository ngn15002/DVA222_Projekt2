#pragma once
#include "ControlBaseExtended.h"
class Container :
	public ControlBaseExtended
{
public:
	Container();
	~Container();
	virtual void Draw();
	virtual void AddControl();

protected:
	ControlBaseExtended** controls;
	int controlCount;
};

