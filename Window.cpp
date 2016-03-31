#include "stdafx.h"
#include "Window.h"
#include <iostream>

Window::Window(){
	X = 10;
	Y = 10;
	Z = 1;
	Width = 200;
	Height = 150;
}

Window::Window(int x, int y, int w, int h, int z)
	:Container(x, y, w, h, z){
	boxCoordsXWidth.Y = y;
	boxCoordsXWidth.X = x + w;

	boxCoordsYHeight.X = x;
	boxCoordsYHeight.Y = y + h;

	boxCoordsDownCorner.X = boxCoordsXWidth.X;
	boxCoordsDownCorner.Y = boxCoordsYHeight.Y;

	panel = new Panel(x, y, w, h, z);
	frame = new Frame(x, y, w, h, z);
	banner = _rectangle(x, y, w, 20);
}

Window::~Window(){
}

void Window::AddCheckBoxGroup(CheckBoxGroup *newCheckBoxGroup){
	newCheckBoxGroup->SetX(newCheckBoxGroup->GetX() + X);
	newCheckBoxGroup->SetY(newCheckBoxGroup->GetY() + Y);

	WindowContents.push_back(newCheckBoxGroup);
}

void Window::AddRadioButtonGroup(RadioButtonGroup *newRadioButtonGroup){
	newRadioButtonGroup->SetX(newRadioButtonGroup->GetX() + X);
	newRadioButtonGroup->SetY(newRadioButtonGroup->GetY() + Y);

	WindowContents.push_back(newRadioButtonGroup);
}

void Window::AddCheckBox(CheckBox *newCheckBox){
	newCheckBox->SetX(newCheckBox->GetX() + X);
	newCheckBox->SetY(newCheckBox->GetY() + Y);

	WindowContents.push_back(newCheckBox);
}

void Window::AddRadioButton(RadioButton *newRadioButton){
	newRadioButton->SetX(newRadioButton->GetX() + X);
	newRadioButton->SetY(newRadioButton->GetY() + Y);

	WindowContents.push_back(newRadioButton);
}

void Window::AddPanel(Panel *newPanel){
	newPanel->SetX(newPanel->GetX() + X);
	newPanel->SetY(newPanel->GetY() + Y);

	WindowContents.push_back(newPanel);
}

void Window::AddImageBox(ImageBox *newImageBox){
	newImageBox->SetX(newImageBox->GetX() + X);
	newImageBox->SetY(newImageBox->GetY() + Y);

	WindowContents.push_back(newImageBox);
}

void Window::AddString(Label *newLabel){
	newLabel->SetX(newLabel->GetX() + X);
	newLabel->SetY(newLabel->GetY() + Y);

	WindowContents.push_back(newLabel);
}

void Window::OnMouseDown(int button, int x, int y){
	if (hit && button == MOUSE_LEFT){
		pressed = true;
		mouseMovmentX = x;
		mouseMovmentY = y;
	}
	/*for (int i = 0; i < WindowContents.size(); i++){
		WindowContents[i]->OnMouseDown(button, x, y);
	}*/
}

void Window::OnMouseMove(int button, int x, int y){
	if (pressed == true){
		if (pressed == true && hit == true){
			X = X + x - mouseMovmentX;
			Y = Y + y - mouseMovmentY;

			mouseMovmentX = x;
			mouseMovmentY = y;
			/*for (int i = 0; i < WindowContents.size(); i++){
				WindowContents[i]->SetX(WindowContents[i]->getOriginalX() + X);
				WindowContents[i]->SetY(WindowContents[i]->getOriginalY() + Y);
			}*/
			boxCoordsXWidth.Y = Y;
			boxCoordsXWidth.X = X + Width;

			boxCoordsYHeight.X = X;
			boxCoordsYHeight.Y = Y + Height;

			boxCoordsDownCorner.X = boxCoordsXWidth.X;
			boxCoordsDownCorner.Y = boxCoordsYHeight.Y;
		}
	}
	if (x > X && x < X + Width && y > Y && y < Y + 20){
		hit = true;
	}else{
		pressed = hit = false;
	}
	for (int i = 0; i < WindowContents.size(); i++){
		WindowContents[i]->OnMouseMove(button, x, y);
	}
}

void Window::OnMouseUp(int button, int x, int y){
	pressed = false;
	for (int i = 0; i < WindowContents.size(); i++){
		WindowContents[i]->OnMouseUp(button, x, y);
	}
}

void Window::OnPaint(){
	panel->OnPaint();
	frame->OnPaint();
	SetColor(155, 192, 255);
	FillRectangle(banner.X, banner.Y, banner.Width, banner.Height);

	//The following lines are for printing in Z value order
	for (int j = -1; j > -5; j--){
		for (int i = 0; i < WindowContents.size(); i++){
			if (WindowContents[i]->Z == j){
				WindowContents[i]->OnPaint();
			}
		}
	}

}

void Window::OnLoaded(){
	for (int i = 0; i < WindowContents.size(); i++){
		WindowContents[i]->OnLoaded();
	}
}
