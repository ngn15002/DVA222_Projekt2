#include "stdafx.h"
#include "Label.h"
#include "Graphix.h"


Label::Label() {
}

Label::Label(int y, int x, int z, std::string newString, int R, int G, int B) {
	this->X = x;
	this->Y = y;
	this->Z = z;
	labelString = newString;
	labelColor.r = R;
	labelColor.g = G;
	labelColor.b = B;
}

Label::~Label() {
}

void Label::SetLabelColor(int R, int G, int B) {
	this->labelColor.r = R;
	this->labelColor.g = G;
	this->labelColor.b = B;
}

Color Label::GetLabelColor(){
	return this->labelColor;
}

void Label::SetLabelString(std::string newString) {
	this->labelString = newString;
}

string Label::GetLabelString() {
	return this->labelString;
}

void Label::OnPaint() {
	SetColor(labelColor.r, labelColor.g, labelColor.b);
	DrawString(labelString, this->X, this->Y);
}
