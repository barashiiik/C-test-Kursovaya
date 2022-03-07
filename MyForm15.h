#pragma once
#include "MyForm16.h"

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
	/// Сводка для MyForm15
	/// </summary>
	public ref class MyForm15 : public System::Windows::Forms::Form
	{
	public:
		MyForm15(void)
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
		~MyForm15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonOtvet;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonOtvet = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Что изображено\?";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Двигательная установка", L"Кабина пилота", L"Подвесное оборудование",
					L"Антенные системы"
			});
			this->comboBox1->Location = System::Drawing::Point(23, 347);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(213, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Двигательная установка", L"Кабина пилота", L"Подвесное оборудование",
					L"Антенные системы"
			});
			this->comboBox2->Location = System::Drawing::Point(267, 347);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(219, 24);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Двигательная установка", L"Кабина пилота", L"Подвесное оборудование",
					L"Антенные системы"
			});
			this->comboBox3->Location = System::Drawing::Point(528, 347);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(220, 24);
			this->comboBox3->TabIndex = 3;
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 409);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 33);
			this->buttonExit->TabIndex = 4;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm15::buttonExit_Click_1);
			// 
			// buttonOtvet
			// 
			this->buttonOtvet->Location = System::Drawing::Point(673, 409);
			this->buttonOtvet->Name = L"buttonOtvet";
			this->buttonOtvet->Size = System::Drawing::Size(75, 33);
			this->buttonOtvet->TabIndex = 5;
			this->buttonOtvet->Text = L"Далее";
			this->buttonOtvet->UseVisualStyleBackColor = true;
			this->buttonOtvet->Click += gcnew System::EventHandler(this, &MyForm15::buttonOtvet_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(34, 149);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(190, 177);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm15::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(288, 149);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(176, 177);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(550, 149);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(180, 177);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// MyForm15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 454);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonOtvet);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm15";
			this->Text = L"Вопрос 10";
			this->Load += gcnew System::EventHandler(this, &MyForm15::MyForm15_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm15_Load(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Image = Image::FromFile("Двигательная установка.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox2->Image = Image::FromFile("Кабина пилота.jpg");
		pictureBox2->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox3->Image = Image::FromFile("Антенные системы.jpg");
		pictureBox3->SizeMode = PictureBoxSizeMode::StretchImage;
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
	int rez10 = Class1::qt10(comboBox1, comboBox2, comboBox3, rez10);

	if (rez10 == 2)

	{

		MessageBox::Show("Вы не ответили на вопрос", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	else if (rez10 == 1)

	{

		Header::n++;

		Header::result[9] = 1;

		MessageBox::Show("Вы ответили правильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm16^ f7 = gcnew MyForm16;

		f7->Show();

	}

	else

	{

		MessageBox::Show("Вы ответили неправильно", "Тест", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Hide();

		MyForm16^ f7 = gcnew MyForm16;

		f7->Show();

	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) { 
	
}
};
}
