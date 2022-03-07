#pragma once
#include "MyForm3.h"
#include "MyForm3.h"
#include "MyForm2.h"
#include "Header.h"
#include <stdio.h>

namespace Курсовая {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
    using namespace Microsoft::VisualBasic;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::TextBox^ textBoxPass;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(900, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(377, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Кафедра «Информатика»";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(407, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Курсовая работа";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(315, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(305, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"По дисциплине: «Языки программирования»";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(271, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(400, 34);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Тема: «Метод повышения помехозащищенности бортовой \r\n               радиолокацион"
				L"ной системы истребителя»";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(358, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Логин:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(348, 244);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Пароль:";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm1::label7_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(443, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(397, 321);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 36);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Зарегистрироваться";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 408);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(714, 375);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(238, 68);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Выполнила студентка \r\nГруппы БИК1901\r\nЛыжненко Д.А.\r\nРуководитель: к. п. н. Гурик"
				L"ов С.Р.";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(428, 199);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(100, 22);
			this->textBoxLogin->TabIndex = 11;
			this->textBoxLogin->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// textBoxPass
			// 
			this->textBoxPass->Location = System::Drawing::Point(428, 244);
			this->textBoxPass->Name = L"textBoxPass";
			this->textBoxPass->PasswordChar = '*';
			this->textBoxPass->Size = System::Drawing::Size(100, 22);
			this->textBoxPass->TabIndex = 12;
			this->textBoxPass->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 300000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 455);
			this->Controls->Add(this->textBoxPass);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"Авторизация";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	remove("test_result.txt");
timer1->Start();
	Header::menu = this;
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ g1 = gcnew MyForm2;
	g1->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   String^ StartupPath = "reg.mdb";

	   void checkLogPassword(TextBox^ Login, TextBox^ Password, bool& flag)

	   {

		   flag = 0;

		   auto connection = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0; Data Source = " + StartupPath);

		   connection->Open();

		   auto strConnect = gcnew OleDbCommand("SELECT * FROM logins_passwords WHERE Logins = '" + Login->Text + "'AND Passwords = '" + Password->Text + "'", connection);

		   if (strConnect->ExecuteScalar() != nullptr)

		   {

			   flag = 1;

			   MessageBox::Show("Добро пожаловать в программу, " + Login->Text, "Приветствие", MessageBoxButtons::OK, MessageBoxIcon::Information);

			   connection->Close();

		   }

		   else

		   {

			   MessageBox::Show("Неверный логин или пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Information);

			   Login->Text = "";

			   Password->Text = "";

			   connection->Close();

		   }

	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	bool f;

	checkLogPassword(textBoxLogin, textBoxPass, f);

	if (f)

	{

		timer1->Stop();

		MyForm3^ t = gcnew MyForm3();

		t->Show();

		this->Hide();

	}

	else

	{

		textBoxLogin->Text = "";

		textBoxPass->Text = "";

	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Время на вход или регистрацию истекло", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
	Application::Exit();
}
};
}
