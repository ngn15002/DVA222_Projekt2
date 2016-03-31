#include "stdafx.h"
#include "Window.h"


Window::Window(){
}

Window::Window(int x, int y, int w, int h, int z) :Container(x,y,w,h,z){
	panel = new Panel(x, y, w, h, z);
	frame = new Frame(x, y, w, h, z);
	banner = _rectangle(x, y, w, 20);
}

Window::~Window(){
	delete panel;
	delete frame;
}

void Window::AddControl(ControlBaseExtended* newControl){	
	controls.push_back(newControl);
}

void Window::OnPaint(){
	panel->OnPaint();
	SetColor(0, 0, 255);
	FillRectangle(banner.X, banner.Y, banner.Width, banner.Height);
	frame->OnPaint();

	for (int i = 0; i < controls.size(); i++){
		controls[i]->OnPaint();
	}
}

void Window::OnMouseDown(int button, int x, int y){
	if (hit && button == MOUSE_LEFT) {
		pressed = true;
	}
}

void Window::OnMouseUp(int button, int x, int y){
	pressed = false;
}

void Window::OnMouseMove(int button, int x, int y){
	if (x > X && x < X + Width && y>Y && y < Y + banner.Height){
		hit = true;
		if(pressed == true){
			this->X = x;
			this->Y = y;
		}
	} else{
		pressed = hit = false;
	}
}

void Window::OnResize(int width, int height){
}