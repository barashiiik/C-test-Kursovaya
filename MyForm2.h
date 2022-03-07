#pragma once
#include "Header.h"

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
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxLogin;
	private: System::Windows::Forms::TextBox^ textBoxPassword;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(82, 106);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(186, 22);
			this->textBoxLogin->TabIndex = 2;
			this->textBoxLogin->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(82, 176);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(186, 22);
			this->textBoxPassword->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Зарегистрироваться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(356, 358);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 393);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"Регистрация";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		Header::reg = this;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxPassword->Text == "" && textBoxLogin->Text == "" || textBoxPassword->Text == "" || textBoxLogin->Text == "")
			MessageBox::Show("Пожалуйста, заполните все поля", "Вывод", MessageBoxButtons::OK, MessageBoxIcon::Information);
		else
		{
			add_uch(textBoxLogin, textBoxPassword);
		}
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*addLogPassword(textBoxLogin, textBoxPassword);*/
}    
	   String^ StartupPath = "reg.mdb";
	  /* void addLogPassword(TextBox^ Login, TextBox^ Password)

	   {

		   StartupPath = Interaction::InputBox("Введите путь, где будет сохранена ваша база данных:", "Ввод", "", -1, -1);

		   ADOX::Catalog^ k = gcnew ADOX::CatalogClass();

		   try {

			   k->Create("Provider=Microsoft.Jet.OLEDB.4.0; Data Source = " + StartupPath);

			   MessageBox::Show("База данных успешно создана!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);

		   }

		   catch (System::Runtime::InteropServices::COMException ^ situation)

		   {

			   MessageBox::Show(situation->Message);

		   }

		   k = nullptr;

		   auto connection = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0; Data Source = " + StartupPath);

		   connection->Open();

		   auto strConnect = gcnew OleDbCommand("CREATE TABLE[logins_passwords]([Номер элемента] counter,[Logins] char(200),[Passwords] char(200))", connection);

		   try

		   {

			   strConnect->ExecuteNonQuery();

		   }

		   catch (System::Runtime::InteropServices::COMException ^ situation)

		   {

			   MessageBox::Show(situation->Message);

		   }

	   }*/
	   void add_uch(TextBox^ Login, TextBox^ Password)
	   {
		   auto connection = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0; Data Source = " + StartupPath);
		   connection->Open();
		   auto c = gcnew OleDbCommand("INSERT INTO[logins_passwords](" + "[Logins],[Passwords])VALUES('" + Login->Text + "','" + Password->Text + "')");
		   c->Connection = connection;
		   c->ExecuteNonQuery();
		   connection->Close();
		   MessageBox::Show("Учетная запись была успешно добавлена в базу данных", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
