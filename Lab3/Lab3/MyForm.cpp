#include "pch.h"

using namespace System;

#include "MyForm.h"

using namespace Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles(); // �������� ���������� �����
	Application::SetCompatibleTextRenderingDefault(false); // ��������� ������������ ����������� ������ �� ���������

	Application::Run(gcnew Lab3::MyForm());//��������� ����������� ���� ��������� ��������� ���������� � ������� ������ � ������ ��������� ����� �������.
	return 0;
}
