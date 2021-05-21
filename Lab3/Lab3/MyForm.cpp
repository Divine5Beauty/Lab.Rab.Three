#include "pch.h"

using namespace System;

#include "MyForm.h"

using namespace Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles(); // включает визуальные стили
	Application::SetCompatibleTextRenderingDefault(false); // настройка совместимого отображени€ текста по умолчанию

	Application::Run(gcnew Lab3::MyForm());//«апускает стандартный цикл обработки сообщений приложени€ в текущем потоке и делает указанную форму видимой.
	return 0;
}
