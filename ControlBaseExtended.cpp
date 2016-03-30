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