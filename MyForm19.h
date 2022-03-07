#pragma once
#include "MyForm20.h"

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
	/// Сводка для MyForm19
	/// </summary>
	public ref class MyForm19 : public System::Windows::Forms::Form
	{
	public:
		MyForm19(void)
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
		~MyForm19()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TrackBar^ trackBar1;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonOtvet = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(181, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Чувствительность РТР для САП \" ZSR-63\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(284, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ваш ответ";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(77, 152);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Minimum = -100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(495, 56);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm19::trackBar1_Scroll_1);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 416);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 29);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm19::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(572, 413);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(75, 32);
			this->buttonOtvet->TabIndex = 4;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm19::buttonOtvet_Click_1);
			// 
			// MyForm19
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 457);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm19";
			this->Text = L"Вопрос 14";
			this->Load += gcnew System::EventHandler(this, &MyForm19::MyForm19_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm19_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void buttonExit_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Вы уверены, что хотите выйти?", "Сообщение", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)

		{

			MyForm20^ f = gcnew MyForm20;

			f->Show();

			this->Close();

		}
	}
private: System::Void buttonOtvet_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int rez14 = Class1::qt14(trackBar1, rez14);

	if (rez14 == 1)

	{

		Header::n++;

		Header::result[13] = 1;

		MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm20^ f7 = gcnew MyForm20;

		f7->Show();

	}

	else

	{

		MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm20^ f7 = gcnew MyForm20;

		f7->Show();

	}
}
private: System::Void trackBar1_Scroll_1(System::Object^ sender, System::EventArgs^ e) {
	label2->Text = ("Ваш ответ: " + Convert::ToInt32(trackBar1->Value));
}
};
}
