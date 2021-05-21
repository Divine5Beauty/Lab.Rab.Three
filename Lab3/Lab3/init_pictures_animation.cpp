#include "pch.h"

void MyForm::init_pictures_animation()
{
    // 
    // pictureBox1
    // 
    this->pictureBox1->Location = Drawing::Point(720, 6);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = Drawing::Size(400, 280);
    this->pictureBox1->SizeMode = Windows::Forms::PictureBoxSizeMode::Zoom;
    this->pictureBox1->Visible = false;
    this->pictureBox1->TabIndex = 6;
    this->pictureBox1->TabStop = false;

    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
    // 
    // animation
    // 
    this->animation->Tick += gcnew EventHandler(this, &MyForm::animation_Tick);
    animation_repeats = 0;
    // 
    // pictures
    // 
    this->pictures_electro->ImageStream = (cli::safe_cast<ImageListStreamer^>(resources->GetObject(L"pictures.ImageStream")));//для качества
    this->pictures_electro->TransparentColor = Drawing::Color::Transparent;
    this->pictures_electro->ImageSize = Drawing::Size(256, 190);//качество
    loadingImages("electro");

}