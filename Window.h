#pragma once
#include "Container.h"
#include "CheckBoxGroup.h"
#include "RadioButtonGroup.h"
#include "RadioButton.h"
#include "CheckBox.h"
#include "Panel.h"
#include "ImageBox.h"
#include <vector>

class Window : public Container {

protected:
	int mouseMovmentX, mouseMovmentY, changeCoords;
	Point boxCoordsDownCorner, boxCoordsXWidth, boxCoordsYHeight;
	bool hit, pressed;
	vector<ControlBaseExtended*> WindowContents;
	Rect banner;

public:
	Window();
	Window(int x, int y, int w, int h, int z);
	~Window();

	Panel* panel;
	Frame* frame;

	void AddCheckBoxGroup(CheckBoxGroup *locCbGroup);
	void AddRadioButtonGroup(RadioButtonGroup *locRbGroup);
	void AddRadioButton(RadioButton *locRadio);
	void AddCheckBox(CheckBox *locCheckBox);
	void AddPanel(Panel *locPanel);
	void AddImageBox(ImageBox *locImage);
	void AddString(Label *locLabel);
	void OnMouseDown(int button, int locX, int locY);
	void OnMouseMove(int button, int locX, int locY);
	void OnMouseUp(int button, int locX, int locY);
	void OnPaint();
	void OnLoaded();
};