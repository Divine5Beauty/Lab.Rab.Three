#include "pch.h"

void MyForm::created_buttons()
{
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label1->Location = System::Drawing::Point(5, 9);
	this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(213, 29);
	this->label1->TabIndex = 0;
	this->label1->Text = L"Сопротивление";
	this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label2->Location = System::Drawing::Point(255, 9);
	this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(172, 29);
	this->label2->TabIndex = 0;
	this->label2->Text = L"Напряжение";
	this->label2->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
	// 
	// textBox3
	// 
	this->textBox3->BackColor = System::Drawing::SystemColors::HighlightText;
	this->textBox3->Location = System::Drawing::Point(313, 57);
	this->textBox3->Name = L"textBox3";
	this->textBox3->Size = System::Drawing::Size(114, 22);
	this->textBox3->TabIndex = 1;
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label3->Location = System::Drawing::Point(5, 57);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(63, 25);
	this->label3->TabIndex = 2;
	this->label3->Text = L"R1 = ";
	this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label4->Location = System::Drawing::Point(5, 102);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(63, 25);
	this->label4->TabIndex = 2;
	this->label4->Text = L"R2 = ";
	this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label5->Location = System::Drawing::Point(255, 57);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(52, 25);
	this->label5->TabIndex = 2;
	this->label5->Text = L"V = ";
	// 
	// button1
	// 
	this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->button1->Location = System::Drawing::Point(138, 291);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(227, 42);
	this->button1->TabIndex = 3;
	this->button1->Text = L"Решить";
	this->button1->UseVisualStyleBackColor = false;
	this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_logic);
	// 
	// button2
	// 
	this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->button2->Location = System::Drawing::Point(1119, 539);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(237, 39);
	this->button2->TabIndex = 3;
	this->button2->Text = L"Закрыть";
	this->button2->UseVisualStyleBackColor = false;
	this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_to_close);
	// 
	// button5
	// 
	this->button5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->button5->Location = System::Drawing::Point(10, 394);
	this->button5->Name = L"button5";
	this->button5->Size = System::Drawing::Size(154, 36);
	this->button5->TabIndex = 3;
	this->button5->Text = L"Сбросить";
	this->button5->UseVisualStyleBackColor = false;
	this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_reset);
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
	this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label6->ForeColor = System::Drawing::Color::Black;
	this->label6->Location = System::Drawing::Point(124, 155);
	this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(251, 58);
	this->label6->TabIndex = 0;
	this->label6->Text = L"Программа готова \r\n         к работе";
	this->label6->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
	// 
	// textBox4
	// 
	this->textBox4->BackColor = System::Drawing::SystemColors::ControlLightLight;
	this->textBox4->Location = System::Drawing::Point(138, 244);
	this->textBox4->Name = L"textBox4";
	this->textBox4->ReadOnly = true;
	this->textBox4->Size = System::Drawing::Size(227, 22);
	this->textBox4->TabIndex = 1;
	this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
	// 
	// textBox1
	// 
	this->textBox1->Location = System::Drawing::Point(74, 57);
	this->textBox1->Name = L"textBox1";
	this->textBox1->Size = System::Drawing::Size(114, 22);
	this->textBox1->TabIndex = 1;
	this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
	// 
	// textBox2
	// 
	this->textBox2->Location = System::Drawing::Point(74, 102);
	this->textBox2->Name = L"textBox2";
	this->textBox2->Size = System::Drawing::Size(114, 22);
	this->textBox2->TabIndex = 1;
	this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);


}
