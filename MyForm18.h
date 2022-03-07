#pragma once
#include "MyForm19.h"

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
	/// Сводка для MyForm18
	/// </summary>
	public ref class MyForm18 : public System::Windows::Forms::Form
	{
	public:
		MyForm18(void)
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
		~MyForm18()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label2;
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
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonOtvet = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(100, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Чувствительность РТР для САП \"Программа INEWS\"";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(34, 213);
			this->trackBar1->Maximum = 200;
			this->trackBar1->Minimum = -200;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(498, 56);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm18::trackBar1_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(240, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ваш ответ";
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(13, 427);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 29);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm18::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(475, 427);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(75, 29);
			this->buttonOtvet->TabIndex = 4;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm18::buttonOtvet_Click_1);
			// 
			// MyForm18
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(562, 468);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm18";
			this->Text = L"Вопрос 13";
			this->Load += gcnew System::EventHandler(this, &MyForm18::MyForm18_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm18_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e)

		   {

			   label2->Text = ("Ваш ответ: " + Convert::ToInt32(trackBar1->Value));

		   }



	private: System::Void buttonExit_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Вы уверены, что хотите выйти?", "Сообщение", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)

		{

			MyForm22^ f = gcnew MyForm22;

			f->Show();

			this->Close();

		}
	}
private: System::Void buttonOtvet_Click_1(System::Object^ sender, System::EventArgs^ e) {

	int rez13 = Class1::qt13(trackBar1, rez13);

	if (rez13 == 1)

	{

		Header::n++;

		Header::result[12] = 1;

		MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm19^ f7 = gcnew MyForm19;

		f7->Show();

	}

	else

	{

		MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm19^ f7 = gcnew MyForm19;

		f7->Show();

	}
}
};
}
