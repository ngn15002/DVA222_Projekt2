#include "stdafx.h"
#include "Window.h"


Window::Window()
{
}

Window::Window(int x, int y, int w, int h, int z) :Container(x, y, w, h, z)
{
	panel = new Panel(x, y, w, h, z);
	frame = new Frame(x, y, w, h, z);
	banner = _rectangle(x, y, w, 20);
}

Window::~Window(){
	delete panel;
	delete frame;
}

void Window::AddControl(ControlBaseExtended* newControl)
{
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

void Window::OnMouseDown(int button, int x, int y)
{
	
	if (!pressed)
	{
		if (hit && button == MOUSE_LEFT)
		{
			pressed = true;
			speed.X = x;
			speed.Y = y;
		}
	}

}

void Window::OnMouseUp(int button, int x, int y)
{
	pressed = false;
}

void Window::OnMouseMove(int button, int x, int y)
{
	if (x > banner.X && x < banner.X + banner.Width && y > banner.Y && y < banner.Y + banner.Height){
		hit = true;
	}
	else
	{
		pressed = hit = false; 
	}

	if (pressed)
	{
		this->banner.X += x - speed.X;
		this->banner.Y += y - speed.Y;
	}

}

void Window::OnResize(int width, int height)
{
}