#include "stdafx.h"
#include "Window.h"
#include <iostream>
#include <algorithm>

Window::Window(){
	X = 10;
	Y = 10;
	Z = 1;
	Width = 200;
	Height = 150;
}

Window::Window(int x, int y, int w, int h, int z)
	:Container(x, y, w, h, z){

	this->panel = new Panel(x, y, w, h, z);
	this->frame = new Frame(x, y, w, h, z);
	this->banner = _rectangle(x, y, w, 20);
}

Window::~Window(){
}

void Window::OnMouseDown(int button, int x, int y){
	if (hit && button == MOUSE_LEFT){
		pressed = true;
		mouseMovmentX = x;
		mouseMovmentY = y;
	}
	for (int i = 0; i < controls.size(); i++){
		controls[i]->OnMouseDown(button, x, y);
	}
}

void Window::OnMouseMove(int button, int x, int y){
	if (pressed && hit){
		SetX(GetX() + (x - mouseMovmentX));
		SetY(GetY() + (y - mouseMovmentY));
		for (int i = 0; i < controls.size(); i++) {
			controls[i]->SetX(controls[i]->GetX() + (x - mouseMovmentX));
			controls[i]->SetY(controls[i]->GetY() + (y - mouseMovmentY));
		}
		
		mouseMovmentX = x;
		mouseMovmentY = y;
	}
	if (x > X && x < (X + Width) && y > Y && y < (Y + banner.Height)){
		hit = true;
	}else{
		pressed = hit = false;
	}
	for (unsigned int i = 0; i < controls.size(); i++){
		controls[i]->OnMouseMove(button, x, y);
	}
}

void Window::OnMouseUp(int button, int x, int y){
	pressed = false;
	for (unsigned int i = 0; i < this->controls.size(); i++){
		this->controls[i]->OnMouseUp(button, x, y);
	}
}

void Window::OnPaint(){
	this->panel->OnPaint();
	SetColor(155, 192, 255);
	FillRectangle(this->banner.X, this->banner.Y, this->banner.Width, this->banner.Height);
	this->frame->OnPaint();
	for (unsigned int i = 0; i < this->controls.size(); i++) {
		this->controls[i]->OnPaint();
	}
}

void Window::OnLoaded(){
	for (unsigned int i = 0; i < this->controls.size(); i++){
		this->controls[i]->OnLoaded();
	}
}

void Window::SetX(int x) {
	ControlBaseExtended::SetX(x);
	this->frame->SetX(x);
	this->panel->SetX(x);
	this->banner.X = x;
}

void Window::SetY(int y) {
	ControlBaseExtended::SetY(y);
	this->frame->SetY(y);
	this->panel->SetY(y);
	this->banner.Y = y;
}

void Window::AddControl(ControlBaseExtended* control) {
	control->SetX(control->GetX() + this->GetX());
	control->SetY(control->GetY() + this->GetY() + this->banner.Height);
	control->Z += this->Z;

	controls.push_back(control);

	std::sort(controls.begin(), controls.end(), CompareZ);
}
