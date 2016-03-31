#pragma once
#include "ControlBaseExtended.h"
#include "ColorStruct.h"


class Label :
	public ControlBaseExtended
{
public:
	Label();
	Label(int x, int y);
	Label(int x, int y, string text);
	Label(int x, int y, int w, int h, int z);
	Label(int x, int y, int w, int h, int z, string text);
	Label(int x, int y, int w, int h, int z, string text, Color color);
	Label(int x, int y, int z, string text, int r, int g, int b);

	~Label();

	virtual void OnPaint();

	void ChangeLocY(int addToY);
	void SetLabelColor(Color color);
	Color GetColor();
	void SetString(string text);
	string GetString();

private:
	string text;
	Color color;
};