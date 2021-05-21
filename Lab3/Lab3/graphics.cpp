#include "pch.h"

void MyForm::graphics()
{
	DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());//������������ ������� ��������� �� ����������� ���������.
	DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());//������������ ������� ��� ����������� ���������.
	DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());//������������ �������� ����� � ���� ������ ��� ��������

    // 
    // chart
    // 
    chart->ChartAreas->Add(chartArea1);
    legend1->BackColor = Color::AliceBlue;// ���� �����
    chart->Legends->Add(legend1);
    chart->Location = Point(720, 285);//��������������
    series1->ChartType = DataVisualization::Charting::SeriesChartType::Spline;
    series1->Name = L"f(x) ��./��.";
    series1->LabelBackColor = Color::WhiteSmoke;
    series1->BorderWidth = 3;//�������� �����
    chart->Series->Add(series1);//���������� ������� � �������
    chart->Size = Drawing::Size(400, 290);//���������
    chart->ChartAreas[0]->Position->Height = 100;
    chart->ChartAreas[0]->Position->Width = 100;
    chart->ChartAreas[0]->Position->X = 1;//���������� ���������
    chart->ChartAreas[0]->Position->Y = 9;//���������� ���������
    chart->BackColor = Color::FromArgb(110, 123, 139);//���� �����
    chart->ChartAreas[0]->BackColor = Color::WhiteSmoke;
    // 
    // button_plot
    // 
    this->button_plot->Font = (gcnew Drawing::Font(L"Comic Sans MS", 12, Drawing::FontStyle::Bold, Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->button_plot->Location = Drawing::Point(580, 445);
    this->button_plot->Name = L"button_plot";
    this->button_plot->Size = Drawing::Size(140, 72);
    this->button_plot->Text = L"��������� ������";
    this->button_plot->UseVisualStyleBackColor = true;//���������� ��� ������ ��������, ������� ���������, ������ �� ��� ���������� � �������������� ������ ����������
    this->button_plot->Click += gcnew EventHandler(this, &MyForm::button_plot_Click);//������������ �����, �������������� �������, �� ������� ������


}