#include "stdafx.h"
#include "Panel.h"


Panel::Panel() {
}

Panel::Panel(int x, int y, int w, int h, int z) : Container(x, y, w, h, z) {
	panelColor.r = 200;
	panelColor.g = 200;
	panelColor.b = 200;
}

Panel::Panel(int x, int y, int w, int h, int z, Color color) : Container(x, y, w, h, z) {
	panelColor = color;
}

Panel::~Panel() {
}

void Panel::OnPaint() {
	SetColor(panelColor.r, panelColor.g, panelColor.b);
	FillRectangle(X, Y, Width, Height);
	for (int i = 0; i < controls.size(); i++) {
		controls[i]->OnPaint();
	}
}

void Panel::OnLoaded(){
	for (int i = 0; i < controls.size(); i++) {
		controls[i]->OnLoaded();
	}
}

void Panel::OnMouseDown(int button, int x, int y) {
	for (int i = 0; i < controls.size(); i++) {
		controls[i]->OnMouseDown(button, x, y);
	}
}

void Panel::OnMouseUp(int button, int x, int y) {
	for (int i = 0; i < controls.size(); i++) {
		controls[i]->OnMouseUp(button, x, y);
	}
}

void Panel::OnMouseMove(int button, int x, int y) {
	for (int i = 0; i < controls.size(); i++) {
		controls[i]->OnMouseMove(button, x, y);
	}
}

void Panel::SetPanelColor(Color color) {
	panelColor = color;
}
