#include "pch.h"
#pragma region Windows Form Designer generated code


void Lab3::MyForm::InitializeComponent(void)
{
	createCompanent();
	this->panel_chart->SuspendLayout();

	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
	
	this->SuspendLayout();

	graphics();
	created_buttons();
	init_pictures_animation();
	// 
	// MyForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::SystemColors::InactiveBorder;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->ClientSize = System::Drawing::Size(1353, 581);
	this->Controls->Add(this->button_plot);
	this->Controls->Add(this->chart);
	this->Controls->Add(this->button5);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->pictureBox1);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->label5);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->textBox4);
	this->Controls->Add(this->textBox2);
	this->Controls->Add(this->textBox1);
	this->Controls->Add(this->textBox3);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->label1);
	this->Cursor = Cursors::Default;
	this->MaximizeBox = false;
	this->Margin = System::Windows::Forms::Padding(4);
	this->Name = L"MyForm";
	this->Text = L"Расчет силы тока в цепи";
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();
	Load += gcnew EventHandler(this, &MyForm::onLoadForm1);//Представляет метод, обрабатывающий событие, не имеющее данных.
}
#pragma endregion