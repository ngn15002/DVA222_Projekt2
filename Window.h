#pragma once
#include "Panel.h"
#include "Frame.h"
class Window :
	public Panel, public Frame
{
public:
	Window();
	~Window();
};

