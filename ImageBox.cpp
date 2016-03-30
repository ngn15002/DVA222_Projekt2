#include "stdafx.h"
#include "ImageBox.h"


ImageBox::ImageBox()
{
	X = 100;
	Y = 100;
	Width = 100;
	Height = 100;
}

ImageBox::ImageBox(int locX, int locY, int width, int height, int z)
	:ControlBaseExtended(locX, locY, width, height, z)
{
}


ImageBox::~ImageBox()
{
}

void ImageBox::OnLoaded(void)
{
	image = new Bitmap("Bitmap.bmp");

}

void ImageBox::OnPaint(void)
{
	DrawBitmap(*image, X, Y, Width, Height);
}


