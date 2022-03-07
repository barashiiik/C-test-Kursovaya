#pragma once
#include "MyForm15.h"

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
	/// Сводка для MyForm14
	/// </summary>
	public ref class MyForm14 : public System::Windows::Forms::Form
	{
	public:
		MyForm14(void)
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
		~MyForm14()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonOtvet = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"К задачам БРЛС не относится:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Обнаружение", L"Распознание", L"Устранение",
					L"Сопровождение"
			});
			this->comboBox1->Location = System::Drawing::Point(33, 102);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm14::comboBox1_SelectedIndexChanged);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 414);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(90, 39);
			this->buttonExit->TabIndex = 2;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm14::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(656, 414);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(99, 39);
			this->buttonOtvet->TabIndex = 3;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm14::buttonOtvet_Click);
			// 
			// MyForm14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 465);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm14";
			this->Text = L"Вопрос 9";
			this->Load += gcnew System::EventHandler(this, &MyForm14::MyForm14_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm14_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonOtvet_Click(System::Object^ sender, System::EventArgs^ e) {
		int rez9 = Class1::qt9(comboBox1, rez9);

		if (rez9 == 2)

		{

			MessageBox::Show("Вы не ответили на вопрос", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

		else if (rez9 == 1)

		{

			Header::n++;

			Header::result[8] = 1;

			MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();

			MyForm15^ f7 = gcnew MyForm15;

			f7->Show();

		}

		else

		{

			MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();

			MyForm15^ f7 = gcnew MyForm15;

			f7->Show();

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
