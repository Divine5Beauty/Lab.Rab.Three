#pragma once

namespace Lab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		void InitializeComponent(void);
		void createCompanent();
		void graphics();
		void created_buttons();
		void init_pictures_animation();
		int i = 0;
		PictureBox^ pictureBox1;
		Label^ label1;
		Label^ label2;
		DataVisualization::Charting::Chart^ chart;
		TextBox^ textBox3;
		int checking_the_animation;
		int animation_repeats;
		Label^ label3;
		Label^ label4;
		Label^ label5;
		Button^ button1;
		Button^ button2;
		Button^ button5;
		Label^ label6;
		TextBox^ textBox4;
		TextBox^ textBox1;
		TextBox^ textBox2;
		Button^ button_plot;
		Panel^ panel_chart;
		Timer^ animation;
		ImageList^ pictures_electro;
		IContainer^ components;

		void loadingImages(String^);
			
#pragma endregion

Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e){
}
Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}

Void button_plot_Click(Object^ sender, EventArgs^ e);
Void button1_Click_logic(System::Object^ sender, System::EventArgs^ e);
Void onLoadForm1(System::Object^ sender, System::EventArgs^ e) { button_plot_Click(nullptr, nullptr); }
// сброс данных
Void button5_Click_reset(System::Object^ sender, System::EventArgs^ e);
//закрытие формы
Void button2_Click_to_close(System::Object^ sender, System::EventArgs^ e);
Void animation_Tick(System::Object^ sender, System::EventArgs^ e);
};
}
