#pragma once
#include "Header.h"
#include "MyForm6.h"
#include "MyForm4.h"
#include "MyForm22.h"

namespace Курсовая {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(215, 414);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(215, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 27);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Теория";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(180, 208);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Начать тест";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 2700000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm3::timer1_Tick);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 462);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm3";
			this->Text = L"Главная страница";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		MessageBox::Show("Время на прохождение теста: 45 минут", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Hide();
		MyForm6^ f2 = gcnew MyForm6;
		f2->Show();
		Header::n = 0;
		for (int i = 0; i < 16; i++)
			Header::result[i] = 0;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
		Header::Teoria = this;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ f4 = gcnew MyForm4;
		f4->Show();
		this->Hide();
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	timer1->Stop();
	MessageBox::Show("Время для прохождения теста истекло", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);
	MyForm22^ f = gcnew MyForm22;
	f->Show();
	this->Hide();
}
};
}
