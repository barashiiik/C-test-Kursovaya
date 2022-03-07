#pragma once
#include "MyForm17.h"

#include "Header.h"

#include "MyForm21.h"
namespace Курсовая {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ClassLibrary2;

	/// <summary>
	/// Сводка для MyForm16
	/// </summary>
	public ref class MyForm16 : public System::Windows::Forms::Form
	{
	public:
		MyForm16(void)
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
		~MyForm16()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonExit;
	protected:
	private: System::Windows::Forms::Button^ buttonOtvet;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::HScrollBar^ hScrollBar2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonOtvet = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar2 = (gcnew System::Windows::Forms::HScrollBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(13, 421);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 32);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm16::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(577, 421);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(75, 32);
			this->buttonOtvet->TabIndex = 1;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm16::buttonOtvet_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(141, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(413, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Максимальный диапазон частот станций помех лежит между";
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(271, 105);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(129, 21);
			this->hScrollBar1->TabIndex = 3;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm16::hScrollBar1_Scroll_1);
			// 
			// hScrollBar2
			// 
			this->hScrollBar2->Location = System::Drawing::Point(179, 243);
			this->hScrollBar2->Name = L"hScrollBar2";
			this->hScrollBar2->Size = System::Drawing::Size(314, 27);
			this->hScrollBar2->TabIndex = 4;
			this->hScrollBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm16::hScrollBar2_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(300, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ваш ответ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(300, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ваш ответ";
			// 
			// MyForm16
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 465);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->hScrollBar2);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Name = L"MyForm16";
			this->Text = L"Вопрос 11";
			this->Load += gcnew System::EventHandler(this, &MyForm16::MyForm16_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm16_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void hScrollBar1_Scroll_1(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e)

{

	label2->Text = ("Ваш ответ: " + Convert::ToInt32(hScrollBar1->Value));

}


private: System::Void buttonExit_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Вы уверены, что хотите выйти?", "Сообщение", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)

	{

		MyForm16^ f = gcnew MyForm16;

		f->Show();

		this->Close();

	}
}
private: System::Void buttonOtvet_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int rez11 = Class1::qt11(hScrollBar1, hScrollBar2, rez11);

	if (rez11 == 1)

	{

		Header::n++;

		Header::result[10] = 1;

		MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm17^ f11 = gcnew MyForm17;

		f11->Show();

	}

	else

	{

		MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm17^ f11 = gcnew MyForm17;

		f11->Show();

	}
}
private: System::Void hScrollBar2_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	label3->Text = ("Ваш ответ: " + Convert::ToInt32(hScrollBar2->Value));
}
};
}
