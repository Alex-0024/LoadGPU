#include "wndForm.h"
#include "testWnd.h"

using namespace LoadGPU;

System::Void wndForm::btStart_Click(System::Object^ sender, System::EventArgs^ e)
{
	isRunning = true;

	btStart->Enabled = false;
	btFinish->Enabled = true;

	btStart->BackColor = System::Drawing::SystemColors::Control;
	btFinish->BackColor = System::Drawing::Color::Cyan;

	startTest(
		isRunning, static_cast<int>(numW->Value),
		static_cast<int>(numH->Value), static_cast<int>(numCntElem->Value),
		levelLoadGPU
	);
}

System::Void wndForm::btFinish_Click(System::Object^ sender, System::EventArgs^ e)
{
	isRunning = false;

	btStart->Enabled = true;
	btFinish->Enabled = false;

	btStart->BackColor = System::Drawing::Color::Cyan;
	btFinish->BackColor = System::Drawing::SystemColors::Control;
}

System::Void wndForm::trackLoad_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	textLoad->Text = (trackLoad->Value * 10).ToString();
	levelLoadGPU = static_cast<int>(trackLoad->Value);
}

