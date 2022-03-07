#pragma once
#include "MyForm22.h"
#include "Header.h"


namespace Курсовая {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ClassLibrary2;

	/// <summary>
	/// Сводка для MyForm21
	/// </summary>
	public ref class MyForm21 : public System::Windows::Forms::Form
	{
	public:
		MyForm21(void)
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
		~MyForm21()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;


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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonOtvet = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(130, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Существуют типы помех:";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Активные", L"Пассивные", L"Маскирующие",
					L"Разведывательные", L"Успокаивающие"
			});
			this->checkedListBox1->Location = System::Drawing::Point(130, 78);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(356, 293);
			this->checkedListBox1->TabIndex = 1;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm21::checkedListBox1_SelectedIndexChanged);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 418);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 34);
			this->buttonExit->TabIndex = 4;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm21::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(516, 418);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(75, 34);
			this->buttonOtvet->TabIndex = 5;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm21::buttonOtvet_Click_1);
			// 
			// MyForm21
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 464);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm21";
			this->Text = L"Вопрос 16";
			this->Load += gcnew System::EventHandler(this, &MyForm21::MyForm21_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm21_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		 
	private: System::Void buttonExit_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Вы уверены, что хотите выйти?", "Сообщение.", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)

		{

			MyForm21^ f = gcnew MyForm21;

			f->Show();

			this->Close();

		}
	}
private: System::Void buttonOtvet_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int rez16 = Class1::qt16(checkedListBox1, rez16);

	if (rez16 == 2)

	{

		MessageBox::Show("Вы не ответили на вопрос", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	else if (rez16 == 1)

	{

		Header::n++;

		Header::result[15] = 1;

		MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm22^ f7 = gcnew MyForm22;

		f7->Show();

	}

	else

	{

		Header::result[15] = 0;

		MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm22^ f7 = gcnew MyForm22;

		f7->Show();

	}
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
