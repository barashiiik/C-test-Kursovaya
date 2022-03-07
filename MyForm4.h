#pragma once
#include "Header.h"

namespace Курсовая {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(858, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(946, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Вперед";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(740, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Назад";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(740, 67);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(281, 41);
			this->progressBar1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(29, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(651, 724);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm4::pictureBox1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm4::timer1_Tick);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 748);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"Теория";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numpage - 1 != 0)
		{
			page_way = Convert::ToString("page" + (--numpage) + ".jpg");
			pictureBox1->Image = Image::FromFile(page_way);
			pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		}
		else
			MessageBox::Show("Вы на первой странице", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = Image::FromFile("page1.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page1.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page3.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page4.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page5.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page6.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page7.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page8.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page9.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page10.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page11.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page12.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page13.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page14.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page15.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page16.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page17.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page18.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page19.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page20.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page21.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page22.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	pictureBox1->Image = Image::FromFile("page23.jpg");
	pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	MessageBox::Show("Время на изучение теоретической части: 25 минут", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
	timer1->Start();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Вы уверены, что хотите выйти?", "Сообщение", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		this->timer1->Stop();
		this->Hide();
		Header::Teoria->Show();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numpage != 23)
	{
		page_way = Convert::ToString("page" + (++numpage) + ".jpg");
		pictureBox1->Image = Image::FromFile(page_way);
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	}
	else
		MessageBox::Show("Вы дочитали до конца", "Сообщение", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value += 1;
	if (progressBar1->Value == progressBar1->Maximum)
	{
		this->timer1->Stop();
		MessageBox::Show("Время на изучение теоретической части истекло", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Header::Teoria->Show();
		this->Hide();
	}
}int numpage = 0;
	   String^ page_way;
	   String^ f;
};
}
