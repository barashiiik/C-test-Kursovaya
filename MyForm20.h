#pragma once
#include "MyForm21.h"

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
	/// Сводка для MyForm20
	/// </summary>
	public ref class MyForm20 : public System::Windows::Forms::Form
	{
	public:
		MyForm20(void)
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
		~MyForm20()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;

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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonOtvet = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(123, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Какие характеристики БРЛС яв. верными:";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Прямошумовые", L"Сигналоподобные", L"Моно-импульсные",
					L"Хаотически импульсные", L"Волнообразные"
			});
			this->checkedListBox1->Location = System::Drawing::Point(126, 102);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(284, 191);
			this->checkedListBox1->TabIndex = 2;
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 424);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 32);
			this->buttonExit->TabIndex = 4;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm20::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(443, 424);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(75, 32);
			this->buttonOtvet->TabIndex = 5;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm20::buttonOtvet_Click_1);
			// 
			// MyForm20
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 468);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm20";
			this->Text = L"Вопрос 15";
			this->Load += gcnew System::EventHandler(this, &MyForm20::MyForm20_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm20_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void buttonExit_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Вы уверены, что хотите выйти?", "Сообщение.", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)

		{

			MyForm22^ f = gcnew MyForm22;

			f->Show();

			this->Close();

		}
	}
private: System::Void buttonOtvet_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int rez15 = Class1::qt15(checkedListBox1, rez15);

	if (rez15 == 2)

	{

		MessageBox::Show("Вы не ответили на вопрос", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	else if (rez15 == 1)

	{

		Header::n++;

		Header::result[14] = 1;

		MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm21^ f7 = gcnew MyForm21;

		f7->Show();

	}

	else

	{

		Header::result[14] = 0;

		MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm21^ f7 = gcnew MyForm21;

		f7->Show();

	}
}
};
}
