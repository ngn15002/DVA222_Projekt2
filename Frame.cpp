#include "stdafx.h"
#include "Frame.h"
#include "Graphix.h"


Frame::Frame() {
}

Frame::Frame(int x, int y, int w, int h, int z ) : Container(x, y, w, h, z) {
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
	Color tmp;
	tmp.r = R;
	tmp.g = G;
	tmp.b = B;
	
	frameLabel->SetString(newString);
	frameLabel->SetLabelColor(tmp);
}


void Frame::SetX(int x) {
	ControlBaseExtended::SetX(x);
	frameLabel->SetX(x + 4);
}

void Frame::SetY(int y) {
	ControlBaseExtended::SetY(y);
	frameLabel->SetY(y + 15);
}