#include "stdafx.h"
#include "Frame.h"
#include "Graphix.h"


Frame::Frame() 
{
	this->X = 100;
	this->Y = 100;
	this->Width = 100;
	this->Height = 100;
	this->Z = 1;

	frameLabel = new Label(X + 4, Y + 15, Z, "Label", 0, 0, 0);

	frameColor.r = 0;
	frameColor.g = 0;
	frameColor.b = 0;
}

Frame::Frame(int x, int y, int w, int h, int z) : Container(x, y, w, h, z) {
	frameLabel = new Label(x + 4, y + 15, z, "Label", 0, 0, 0);
	frameColor.r = 0;
	frameColor.g = 0;
	frameColor.b = 0;
}

Frame::~Frame() {
	delete frameLabel;
}

void Frame::OnPaint() {
	SetColor(frameColor.r, frameColor.g, frameColor.b);
	DrawRectangle(X, Y, Width, Height);
	frameLabel->OnPaint();
}

void Frame::SetFrameColor(int R, int G, int B) {
	frameColor.r = R;
	frameColor.g = G;
	frameColor.b = B;
}

void Frame::SetFrameLabel(string newString, int R, int G, int B) {
	frameLabel->SetString(newString);
	Color tempColor;
	tempColor.r = R;
	tempColor.g = G;
	tempColor.b = B;

	frameLabel->SetColour(tempColor);
}