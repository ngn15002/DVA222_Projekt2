#include "stdafx.h"
#include "Container.h"
#include <algorithm>


Container::Container() {
}

Container::Container(int x, int y, int w, int h, int z) : ControlBaseExtended(x, y, w, h, z) {
}

Container::~Container() {
}

void Container::AddControl(ControlBaseExtended* control) {
	control->SetX(control->GetX() + this->GetX());
	control->SetY(control->GetY() + this->GetY());
	control->Z += this->Z;

	controls.push_back(control);

	std::sort (controls.begin(), controls.end(), CompareZ);
}

void Container::OnLoaded() {
}

bool CompareZ(ControlBaseExtended* A, ControlBaseExtended* B) {
	return (A->Z < B->Z);
}

void Container::SetX(int x) {
	ControlBaseExtended::SetX(x);
	for (int i = 0; i < controls.size(); i++) {
		controls[i]->SetX(controls[i]->GetX() + x);
	}
}

void Container::SetY(int y) {
	ControlBaseExtended::SetY(y);
	for (int i = 0; i < controls.size(); i++) {
		controls[i]->SetY(controls[i]->GetY() + y);
	}
}