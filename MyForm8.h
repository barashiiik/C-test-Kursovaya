#pragma once

#include "MyForm9.h"

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
	/// Сводка для MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		MyForm8(void)
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
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonOtvet;



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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonOtvet = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(554, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите выполняемые функции радиолокационной системы управления \"Барс\":";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(82, 101);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(290, 21);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Обнаружение целей дальности 140 км;";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(82, 129);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(528, 21);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Сопровождение 15 целей, атака одновременно четырех воздушных целей;";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(82, 157);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(540, 21);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Подсвет воздушных целей для управляемого и неуправляемого вооружения;";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(82, 185);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(307, 21);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"Проведение радиотехнической разведки;";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(82, 213);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(574, 21);
			this->checkBox5->TabIndex = 5;
			this->checkBox5->Text = L"Определение характеристик целей (тип цели, координаты, дальность, скорость);";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(82, 241);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(242, 21);
			this->checkBox6->TabIndex = 6;
			this->checkBox6->Text = L"Картографирование местности.";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(46, 410);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 31);
			this->buttonExit->TabIndex = 7;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm8::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(638, 410);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(75, 31);
			this->buttonOtvet->TabIndex = 8;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm8::buttonOtvet_Click_1);
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 449);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm8";
			this->Text = L"Вопрос 3";
			this->Load += gcnew System::EventHandler(this, &MyForm8::MyForm8_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm8_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void buttonOtvet_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int rez3 = Class1::qt3(checkBox1, checkBox2, checkBox3, checkBox4, checkBox5, checkBox6, rez3);

	if (rez3 == 2)

	{

		MessageBox::Show("Вы не ответили на вопрос", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	else if (rez3 == 1)

	{

		Header::n++;

		Header::result[2] = 1;

		MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		MyForm9^ f4 = gcnew MyForm9;

		f4->Show();

		this->Hide();

	}

	else

	{

		MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm9^ f4 = gcnew MyForm9;

		f4->Show();

	}
}
private: System::Void buttonExit_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Вы уверены, что хотите выйти?", "Сообщение", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)

	{

		MyForm22^ f = gcnew MyForm22;

		f->Show();

		this->Close();

	}
}
};
}
