#include "stdafx.h"
#include "Label.h"
#include "Graphix.h"


Label::Label(){
	color.r = 0;
	color.g = 0;
	color.b = 0;
	X = 100;
	Y = 100;
	this->text = "Default string";
}

Label::Label(int x, int y){
	color.r = 0;
	color.g = 0;
	color.b = 0;
	X = x;
	Y = y;
	this->text = "Default string";
}

Label::Label(int x, int y, string text){
	color.r = 0;
	color.g = 0;
	color.b = 0;
	X = x;
	Y = y;
	this->text = text;
}

Label::Label(int x, int y, int w, int h, int z)	: ControlBaseExtended(x, y, w, h, z){
	color.r = 0;
	color.g = 0;
	color.b = 0;
	this->text = "Default string";
}

Label::Label(int x, int y, int w, int h, int z, string text) : ControlBaseExtended(x, y, w, h, z){
	color.r = 0;
	color.g = 0;
	color.b = 0;
	this->text = text;
}

Label::Label(int x, int y, int w, int h, int z, string text, Color color) : ControlBaseExtended(x, y, w, h, z){
	this->color.r = color.r;
	this->color.g = color.g;
	this->color.b = color.b;

	this->text = text;
}

Label::Label(int x, int y, int z, string text, int r, int g, int b){
	this->X = x;
	this->Y = y;
	this->Z = z;
	this->text = text;
	color.r = r;
	color.g = g;
	color.b = b;
}


Label::~Label(){
}

void Label::OnPaint(){
	SetColor(color.r, color.g, color.b);
	DrawString(this->text, this->X, this->Y);
}

void Label::ChangeLocY(int addToY){
	this->Y += addToY;
}

void Label::SetLabelColor(Color color){
//	this->color.r = color.r;
//	this->color.g = color.g;
//	this->color.b = color.b;

	this->color = color;
}

Color Label::GetColor(){
	return this->color;
}

void Label::SetString(string text){
	this->text = text;
}

string Label::GetString(){
	return text;
}