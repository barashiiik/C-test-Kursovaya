#pragma once
#include "MyForm18.h"

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
	/// Сводка для MyForm17
	/// </summary>
	public ref class MyForm17 : public System::Windows::Forms::Form
	{
	public:
		MyForm17(void)
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
		~MyForm17()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::HScrollBar^ hScrollBar2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonOtvet;
	protected:

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
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar2 = (gcnew System::Windows::Forms::HScrollBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonOtvet = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(142, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(407, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Минимальный диапазон частот станций помех лежит между";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm17::label1_Click);
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(290, 118);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(106, 20);
			this->hScrollBar1->TabIndex = 1;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm17::hScrollBar1_Scroll_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(307, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ваш ответ";
			// 
			// hScrollBar2
			// 
			this->hScrollBar2->Location = System::Drawing::Point(231, 231);
			this->hScrollBar2->Name = L"hScrollBar2";
			this->hScrollBar2->Size = System::Drawing::Size(231, 28);
			this->hScrollBar2->TabIndex = 3;
			this->hScrollBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm17::hScrollBar2_Scroll_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(307, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ваш ответ";
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 426);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(79, 35);
			this->buttonExit->TabIndex = 5;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm17::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(597, 426);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(75, 35);
			this->buttonOtvet->TabIndex = 6;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm17::buttonOtvet_Click);
			// 
			// MyForm17
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 473);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->hScrollBar2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm17";
			this->Text = L"Вопрос 12";
			this->Load += gcnew System::EventHandler(this, &MyForm17::MyForm17_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm17_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		
	private: System::Void buttonExit_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Вы уверены, что хотите выйти?", "Сообщение", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)

		{

			MyForm22^ f = gcnew MyForm22;

			f->Show();

			this->Close();

		}
	}
private: System::Void buttonOtvet_Click(System::Object^ sender, System::EventArgs^ e) {
	int rez12 = Class1::qt12(hScrollBar1, hScrollBar2, rez12);

	if (rez12 == 1)

	{

		Header::n++;

		Header::result[11] = 1;

		MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm18^ f11 = gcnew MyForm18;

		f11->Show();

	}

	else

	{

		MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm18^ f11 = gcnew MyForm18;

		f11->Show();

	}

}
private: System::Void hScrollBar1_Scroll_1(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	label2->Text = ("Ваш ответ: " + Convert::ToInt32(hScrollBar1->Value));
}
private: System::Void hScrollBar2_Scroll_1(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	label3->Text = ("Ваш ответ: " + Convert::ToInt32(hScrollBar2->Value));
}
};
}
