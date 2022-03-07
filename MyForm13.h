#pragma once
#include "MyForm14.h"

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
	/// Сводка для MyForm13
	/// </summary>
	public ref class MyForm13 : public System::Windows::Forms::Form
	{
	public:
		MyForm13(void)
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
		~MyForm13()
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
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 432);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 34);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm13::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(601, 432);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(75, 34);
			this->buttonOtvet->TabIndex = 1;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm13::buttonOtvet_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(166, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(304, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Сопоставьте определение с аббревиатурой:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(169, 62);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(340, 100);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm13::listBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(166, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"АКФ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(169, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"АСД";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(166, 326);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"АФР";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(169, 194);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(301, 36);
			this->listBox2->TabIndex = 7;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(169, 267);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(301, 36);
			this->listBox3->TabIndex = 8;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(169, 346);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(301, 36);
			this->listBox4->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm13::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 280);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"->";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm13::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(128, 359);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"->";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm13::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(477, 194);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(32, 35);
			this->button4->TabIndex = 13;
			this->button4->Text = L"х";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm13::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(477, 267);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(32, 36);
			this->button5->TabIndex = 14;
			this->button5->Text = L"х";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm13::button5_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(477, 346);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(32, 36);
			this->button6->TabIndex = 15;
			this->button6->Text = L"х";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm13::button6_Click_1);
			// 
			// MyForm13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 472);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Name = L"MyForm13";
			this->Text = L"Вопрос 8";
			this->Load += gcnew System::EventHandler(this, &MyForm13::MyForm13_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm13_Load(System::Object^ sender, System::EventArgs^ e) {
		array <System::Object^>^ mas = gcnew array <System::Object^>(3);

		mas[0] = ("автокорреляционная функция");

		mas[1] = ("автоматическое сопровождение дальности");

		mas[2] = ("антенная фазированная решётка");

		for (int i = 0; i < 3; i++)

		{

			listBox1->Items->Add(mas[i]);

		}
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
		int rez8 = Class1::qt8(listBox2, listBox3, listBox4, rez8);

		if (rez8 == 2)

		{

			MessageBox::Show("Вы не ответили на вопрос", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

		else if (rez8 == 1)

		{

			Header::n++;

			Header::result[7] = 1;

			MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();

			MyForm14^ f7 = gcnew MyForm14;

			f7->Show();

		}

		else

		{

			MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

			this->Hide();

			MyForm14^ f7 = gcnew MyForm14;

			f7->Show();

		}
	}
	
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0)

	{

		listBox2->Items->Add(Convert::ToString(listBox1->Items[0]));

		listBox1->Items->RemoveAt(0);

	}

	else if (listBox1->SelectedIndex == 1)

	{

		listBox2->Items->Add(Convert::ToString(listBox1->Items[1]));

		listBox1->Items->RemoveAt(1);

	}

	else if (listBox1->SelectedIndex == 2)

	{

		listBox2->Items->Add(Convert::ToString(listBox1->Items[2]));

		listBox1->Items->RemoveAt(2);

	}
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0)

	{

		listBox3->Items->Add(Convert::ToString(listBox1->Items[0]));

		listBox1->Items->RemoveAt(0);

	}

	else if (listBox1->SelectedIndex == 1)

	{

		listBox3->Items->Add(Convert::ToString(listBox1->Items[1]));

		listBox1->Items->RemoveAt(1);

	}

	else if (listBox1->SelectedIndex == 2)

	{

		listBox3->Items->Add(Convert::ToString(listBox1->Items[2]));

		listBox1->Items->RemoveAt(2);

	}
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0)

	{

		listBox4->Items->Add(Convert::ToString(listBox1->Items[0]));

		listBox1->Items->RemoveAt(0);

	}

	else if (listBox1->SelectedIndex == 1)

	{

		listBox4->Items->Add(Convert::ToString(listBox1->Items[1]));

		listBox1->Items->RemoveAt(1);

	}

	else if (listBox1->SelectedIndex == 2)

	{

		listBox4->Items->Add(Convert::ToString(listBox1->Items[2]));

		listBox1->Items->RemoveAt(2);

	}
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (listBox2->SelectedIndex == 0)

	{

		listBox1->Items->Add(Convert::ToString(listBox2->Items[0]));

		listBox2->Items->RemoveAt(0);

	}
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (listBox3->SelectedIndex == 0)

	{

		listBox1->Items->Add(Convert::ToString(listBox3->Items[0]));

		listBox3->Items->RemoveAt(0);

	}
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (listBox4->SelectedIndex == 0)

	{

		listBox1->Items->Add(Convert::ToString(listBox4->Items[0]));

		listBox4->Items->RemoveAt(0);

	}
}
};
}
