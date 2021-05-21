#include "pch.h"

void MyForm::loadingImages(String^ name)
{
	if (name == "electro")
	{
		for (int i = 0; i < 24; i++)
			pictures_electro->Images->Add(Image::FromFile("images/electro/" + i + ".jpg"));
		return;
	}
}