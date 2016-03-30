#pragma once
#include "ControlBaseExtended.h"
#include "ColorStruct.h"


class Label :
	public ControlBaseExtended
{
public:
	Label();
	Label(int x, int y, int w, int h, int z);
	Label(int x, int y, int w, int h, int z, string text);
	Label(int x, int y, int w, int h, int z, string text, Color color);
	~Label();

	virtual void OnPaint();

	void SetColour(Color color);
	Color GetColour();
	void SetString(string text);
	string GetString();

private:
	string text;
	Color color;
};