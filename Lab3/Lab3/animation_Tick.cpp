#include "pch.h"

Void MyForm::animation_Tick(System::Object^ sender, System::EventArgs^ e)
{
	this->pictureBox1->Visible = true;
	animation_repeats++;
	if (animation_repeats > 300)
	{
		animation->Stop();
		this->pictureBox1->Visible = false;
		animation_repeats = 0;
	}
	else
	{
		if (checking_the_animation >= 0)
		{
			pictureBox1->Image = pictures_electro->Images[animation_repeats % 24];//
		}

	}
}