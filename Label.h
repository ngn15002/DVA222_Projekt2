#pragma once
#include "ControlBaseExtended.h"
#include "ColorStruct.h"


class Label :
	public ControlBaseExtended
{
public:
	Label();
	Label(int x, int y, int w, int h, int z, string string, Color color);
	~Label();

	void SetColor(Color color);
	Color GetColor();
	void SetString(string string);
	string GetString();

private:
	string string;
	Color color;
};

