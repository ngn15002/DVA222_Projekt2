#include "stdafx.h"
#include "ControlBaseExtended.h"


ControlBaseExtended::ControlBaseExtended() {
}

ControlBaseExtended::ControlBaseExtended(int x, int y, int w, int h, int z)
: ControlBase(x, y, w, h) {
	Z = z;
}

ControlBaseExtended::~ControlBaseExtended() {
}

void ControlBaseExtended::SetX(int x) {
	this->X = x;
}
void ControlBaseExtended::SetY(int y) {
	this->Y = y;
}
int ControlBaseExtended::GetY() {
	return this->Y;
}
int ControlBaseExtended::GetX() {
	return this->X;
}