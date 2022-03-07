#pragma once
#include "MyForm7.h"

#include "Header.h"

#include "MyForm22.h"

namespace Курсовая {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ClassLibrary2;

	/// <summary>
	/// Сводка для MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::TextBox^ textBoxOtvet;

	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->textBoxOtvet = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(124, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Дополните определение:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(313, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(627, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"- радиопомехи, в качастве которых используются шумовые помехи, создают мешающий ф"
				L"он \r\n                                    на входе приёмного устройства подавлени"
				L"я РЛС";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm6::label2_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(13, 401);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 33);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// textBoxOtvet
			// 
			this->textBoxOtvet->Location = System::Drawing::Point(127, 142);
			this->textBoxOtvet->Name = L"textBoxOtvet";
			this->textBoxOtvet->Size = System::Drawing::Size(175, 22);
			this->textBoxOtvet->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(877, 401);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click_1);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 446);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxOtvet);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm6";
			this->Text = L"Вопрос 1";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Вы уверены, что хотите выйти?", "Сообщение", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)

		{

			MyForm22^ f = gcnew MyForm22;

			f->Show();

			this->Close();

		}
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int rez1 = Class1::qt1(textBoxOtvet, rez1);

	if (rez1 == 2)

	{

		MessageBox::Show("Вы не ответили на вопрос", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	else if (rez1 == 1)

	{

		Header::n++;

		Header::result[0] = 1;

		MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm7^ f3 = gcnew MyForm7;

		f3->Show();

	}

	else

	{

		MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm7^ f3 = gcnew MyForm7;

		f3->Show();

	}
}
private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
