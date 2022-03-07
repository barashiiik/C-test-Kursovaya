#pragma once

using namespace System;

using namespace System::Windows::Forms;

public ref class Header

{

public:

	static Form^ reg;

	static Form^ menu;

	static Form^ Teoria;

	static int n = 0;

	static array<int^>^ result = gcnew array <int^>(16);

};