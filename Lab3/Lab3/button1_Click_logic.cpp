#include "pch.h"
//при клике решает логику
Void MyForm::button1_Click_logic(System::Object^ sender, System::EventArgs^ e) {

	double R1, R2, V, I;

	textBox4->Text = L"";
	label6->Text = L"Программа готова\n       к работе";
	if (!Double::TryParse(textBox1->Text, R1))
	{
		MessageBox::Show("Некорректный формат данных! Проверьте что вы ввели числа!!!");
	}
	else 
		if (!Double::TryParse(textBox2->Text, R2))
		{
			MessageBox::Show("Некорректный формат данных! Проверьте что вы ввели числа!!!");
		}
		else 
			if (!Double::TryParse(textBox3->Text, V))
			{
				MessageBox::Show("Некорректный формат данных! Проверьте что вы ввели числа!!!");
			}
			else
				if (V > 0)
				{
					I = (R1 + R2) / V;
					checking_the_animation = static_cast<int>(I);
					textBox4->Text = Convert::ToString(I);
					animation->Start();
				}
				else
				{
					MessageBox::Show("Деление на 0!!!");
				}
}