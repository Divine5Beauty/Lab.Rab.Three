#include "pch.h"
//��� ����� ������ ������
Void MyForm::button1_Click_logic(System::Object^ sender, System::EventArgs^ e) {

	double R1, R2, V, I;

	textBox4->Text = L"";
	label6->Text = L"��������� ������\n       � ������";
	if (!Double::TryParse(textBox1->Text, R1))
	{
		MessageBox::Show("������������ ������ ������! ��������� ��� �� ����� �����!!!");
	}
	else 
		if (!Double::TryParse(textBox2->Text, R2))
		{
			MessageBox::Show("������������ ������ ������! ��������� ��� �� ����� �����!!!");
		}
		else 
			if (!Double::TryParse(textBox3->Text, V))
			{
				MessageBox::Show("������������ ������ ������! ��������� ��� �� ����� �����!!!");
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
					MessageBox::Show("������� �� 0!!!");
				}
}