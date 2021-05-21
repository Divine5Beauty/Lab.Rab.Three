#include "pch.h"

void MyForm::graphics()
{
	DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());//Представляет область диаграммы на изображении диаграммы.
	DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());//Представляет легенду для изображения диаграммы.
	DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());//Представляет атрибуты точки а ряды данных для хранения

    // 
    // chart
    // 
    chart->ChartAreas->Add(chartArea1);
    legend1->BackColor = Color::AliceBlue;// цвет имени
    chart->Legends->Add(legend1);
    chart->Location = Point(720, 285);//местоположение
    series1->ChartType = DataVisualization::Charting::SeriesChartType::Spline;
    series1->Name = L"f(x) Кв./ед.";
    series1->LabelBackColor = Color::WhiteSmoke;
    series1->BorderWidth = 3;//жирность линии
    chart->Series->Add(series1);//добавление объекта в очередь
    chart->Size = Drawing::Size(400, 290);//отрисовка
    chart->ChartAreas[0]->Position->Height = 100;
    chart->ChartAreas[0]->Position->Width = 100;
    chart->ChartAreas[0]->Position->X = 1;//внутреннее положение
    chart->ChartAreas[0]->Position->Y = 9;//внутреннее положение
    chart->BackColor = Color::FromArgb(110, 123, 139);//цвет схема
    chart->ChartAreas[0]->BackColor = Color::WhiteSmoke;
    // 
    // button_plot
    // 
    this->button_plot->Font = (gcnew Drawing::Font(L"Comic Sans MS", 12, Drawing::FontStyle::Bold, Drawing::GraphicsUnit::Point, static_cast<Byte>(204)));
    this->button_plot->Location = Drawing::Point(580, 445);
    this->button_plot->Name = L"button_plot";
    this->button_plot->Size = Drawing::Size(140, 72);
    this->button_plot->Text = L"Построить график";
    this->button_plot->UseVisualStyleBackColor = true;//Возвращает или задает значение, которое указывает, должен ли фон рисоваться с использованием стилей оформления
    this->button_plot->Click += gcnew EventHandler(this, &MyForm::button_plot_Click);//Представляет метод, обрабатывающий событие, не имеющее данных


}