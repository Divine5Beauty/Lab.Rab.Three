#include "pch.h"


Void MyForm:: button_plot_Click(Object^ sender, EventArgs^ e)
{
	Random^ rnd = gcnew Random();
	chart->Series[0]->Points->Clear();
	chart->Series[0]->Color = Color::FromArgb(
		rnd->Next(0, 255),
		rnd->Next(0, 255),
		rnd->Next(0, 255));
	for (int i = 1; i < 15; i++)
		chart->Series[0]->Points->AddXY(i, rnd->Next(25, 225));
	chart->Refresh();//Принудительно создает условия, при которых элемент управления делает недоступной свою клиентскую область и немедленно перерисовывает себя и все дочерние элементы.
}