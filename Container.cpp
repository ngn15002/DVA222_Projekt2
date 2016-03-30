#include "stdafx.h"
#include "Container.h"


Container::Container() {
}

Container::Container(int x, int y, int w, int h, int z) : ControlBaseExtended(x, y, w, h, z) {
}

Container::~Container() {
}

void Container::AddControl(ControlBaseExtended* control) {
	controls.push_back(control);
}