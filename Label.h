#pragma once
#include "ControlBaseExtended.h"
#include "ColorStruct.h"


class Label : public ControlBaseExtended {
public:
	Label();
	Label(int x, int y, int z, string newString, int R, int G, int B);
	~Label();

	void SetLabelColor(int R, int G, int B);
	Color GetLabelColor();
	void SetLabelString(std::string newString);
	std::string GetLabelString();

	virtual void OnPaint();

private:
	std::string labelString;
	Color labelColor;
};

