#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Microsoft::VisualBasic;

[STAThread]

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	��������::MyForm1 form;
	Application::Run(% form);
}

