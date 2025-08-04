#include "main.h"

using namespace LoadGPU;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	wndForm^ workObj = gcnew wndForm();
	Application::Run(workObj);
}