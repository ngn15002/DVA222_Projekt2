#include "stdafx.h"
#include "Window.h"


Window::Window() {
}

Window::Window(int x, int y, int w, int h, int z) :Container(x,y,w,h,z){
	panel = new Panel(x, y, w, h, z);
	frame = new Frame(x, y, w, h, z);
	banner = _rectangle(x, y, w, 20);
}

Window::~Window() {
}

void Window::AddControl(ControlBaseExtended* newControl) {	
	controls.push_back(newControl);
}

void Window::OnPaint() {
	panel->OnPaint();
	SetColor(0, 0, 255);
	FillRectangle(banner.X, banner.Y, banner.Width, banner.Height);
	frame->OnPaint();

	for (int i = 0; i < controls.size(); i++) {
		controls[i]->OnPaint();
	}
}