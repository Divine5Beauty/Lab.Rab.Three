#include "pch.h"

void Lab3::MyForm::createCompanent()
{
	this->components = (gcnew System::ComponentModel::Container());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->textBox3 = (gcnew System::Windows::Forms::TextBox());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button5 = (gcnew System::Windows::Forms::Button());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->textBox4 = (gcnew System::Windows::Forms::TextBox());
	this->textBox1 = (gcnew System::Windows::Forms::TextBox());
	this->textBox2 = (gcnew System::Windows::Forms::TextBox());
	this->button_plot = (gcnew System::Windows::Forms::Button());
	this->pictureBox1 = (gcnew PictureBox());
	this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
	this->panel_chart = (gcnew Windows::Forms::Panel());
	this->animation = (gcnew Timer(this->components));
	this->pictures_electro = (gcnew ImageList(this->components));
}