#pragma once
#include "Header.h"

namespace Курсовая {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ClassLibrary2;
	inline void vivodDGV1(double n1, String^ m1, DataGridView^ grid)

	{

		grid->Rows->Add(n1, m1);

	}

	/// <summary>
	/// Сводка для MyForm22
	/// </summary>
	public ref class MyForm22 : public System::Windows::Forms::Form
	{
	public:
		MyForm22(void)
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
		~MyForm22()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(551, 578);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Номер вопроса";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Баллы";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(641, 379);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ваша оценка:";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(644, 33);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Неправильно";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Правильно";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(300, 268);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(644, 414);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Записать результат";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm22::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(918, 577);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm22::button2_Click);
			// 
			// MyForm22
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1005, 623);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm22";
			this->Text = L"Результат";
			this->Load += gcnew System::EventHandler(this, &MyForm22::MyForm21_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm21_Load(System::Object^ sender, System::EventArgs^ e)

	{

		//Вывод результатов

		double k = 0;

		int res = 0;

		String^ m;

		dataGridView1->RowCount = 16;

		dataGridView1->Rows->Clear();

		dataGridView1->ColumnCount = 2;

		for (int i = 0; i < 16; i++)

		{

			k++;

			res = Convert::ToInt32(Header::result[i]);

			if (res == 1)

			{

				m = "Правильно";

			}

			else

			{

				m = "Неправильно";

			}

			vivodDGV1(k, m, dataGridView1);

		}

		//Вывод оценки

		if (Header::n <= 4)

		{

			label1->Text = ("Ваша оценка: 2");

		}

		else if (Header::n <= 7)

		{

			label1->Text = ("Ваша оценка: 3");

		}

		else if (Header::n <= 12)

		{

			label1->Text = ("Ваша оценка: 4");

		}

		else

		{

			label1->Text = ("Ваша оценка: 5");

		}

		//Диаграмма

		chart1->Series["Правильно"]->Points->AddY(Header::n);

		chart1->Series["Неправильно"]->Points->AddY(16 - Header::n);

	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Zapis();

	ZapisWordresult();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();

}

void ZapisWordresult(void)

{

	auto Wrd = gcnew Microsoft::Office::Interop::Word::ApplicationClass();

	Wrd->Visible = true;

	auto inf = Type::Missing;

	auto Doc = Wrd->Documents->Add(inf, inf, inf, inf);

	Wrd->Selection->TypeText("Результат теста\n");

	for (int i = 0; i < 16; i++)

	{

		int p = Convert::ToInt32(Header::result[i]);

		if (p == 1)

		{

			Wrd->Selection->TypeText(Convert::ToString(i + 1) + " - Правильно\n");

		}

		else

		{

			Wrd->Selection->TypeText(Convert::ToString(i + 1) + " - Неправильно\n");

		}

	}

}

void Zapis(void)

{

	String^ filename = "test_result.txt";

	try

	{

		auto fk = System::Text::Encoding::GetEncoding(1251);

		auto Z = gcnew IO::StreamWriter(filename, false, fk);

		for (int i = 0; i < 16; i++)

		{

			int b = Convert::ToInt32(Header::result[i]);

			if (b == 1)

			{

				Z->WriteLine(Convert::ToString(i + 1) + " - Правильно\n");

			}

			else

			{

				Z->WriteLine(Convert::ToString(i + 1) + " - Неправильно\n");

			}

		}

		Z->Close();

		MessageBox::Show("Запись информации в файл успешно завершена", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	catch (System::Exception ^ E)

	{

		MessageBox::Show(E->Message + "\nОшибка", "Ошибка");

	}

}
};
}
