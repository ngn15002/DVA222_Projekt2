#include "stdafx.h"
#include "Panel.h"
#include "Graphix.h"
#include "glut.h"


Panel::Panel() {
}

Panel::Panel(int x, int y, int w, int h, int z) : Container(x, y, w, h, z) {
}

Panel::~Panel() {
}

void Panel::OnPaint() {
	SetColor(panelColor.r, panelColor.g, panelColor.b);
	FillRectangle(X, Y, Width, Height);
}

void Panel::SetPanelColor(int R, int G, int B) {
	panelColor.r = R;
	panelColor.g = G;
	panelColor.b = B;
}
