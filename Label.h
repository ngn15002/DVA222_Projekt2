#pragma once
#include "ControlBaseExtended.h"
#include "ColorStruct.h"
#include "MyButton.h"
#include "Graphix.h"


class Label :
	public ControlBaseExtended
{
public:
	Label();
	Label(int x, int y, int w, int h, int z, string string, Color color);
	~Label();

	void SetColour(Color color);
	Color GetColour();
	void SetString(string string);
	string GetString();
	virtual void OnPaint();

private:
	string string;
	Color color;
	int posX;
	int posY;
	int width;
	int height;
	int zOrdering;
};

