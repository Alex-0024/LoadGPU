#include "wndForm.h"

using namespace LoadGPU;

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	wndForm^ workObj = gcnew wndForm();
	Application::Run(workObj);

	return 0;
}