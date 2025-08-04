#pragma once

namespace LoadGPU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for wndForm
	/// </summary>
	public ref class wndForm : public System::Windows::Forms::Form
	{
	public:
		wndForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~wndForm()
		{
			isRunning = false;

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btStart;
	private: System::Windows::Forms::Button^ btFinish;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool isRunning;
		int levelLoadGPU;
	
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numW;
	private: System::Windows::Forms::NumericUpDown^ numH;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numCntElem;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TrackBar^ trackLoad;
	private: System::Windows::Forms::TextBox^ textLoad;
	private: System::Windows::Forms::Label^ label7;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(wndForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btStart = (gcnew System::Windows::Forms::Button());
			this->btFinish = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numW = (gcnew System::Windows::Forms::NumericUpDown());
			this->numH = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numCntElem = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trackLoad = (gcnew System::Windows::Forms::TrackBar());
			this->textLoad = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numW))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numH))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCntElem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackLoad))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(579, 84);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Load GPU";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btStart
			// 
			this->btStart->BackColor = System::Drawing::Color::Cyan;
			this->btStart->Location = System::Drawing::Point(18, 96);
			this->btStart->Name = L"btStart";
			this->btStart->Size = System::Drawing::Size(120, 115);
			this->btStart->TabIndex = 1;
			this->btStart->Text = L"START";
			this->btStart->UseVisualStyleBackColor = false;
			this->btStart->Click += gcnew System::EventHandler(this, &wndForm::btStart_Click);
			// 
			// btFinish
			// 
			this->btFinish->BackColor = System::Drawing::SystemColors::Control;
			this->btFinish->Location = System::Drawing::Point(18, 256);
			this->btFinish->Name = L"btFinish";
			this->btFinish->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btFinish->Size = System::Drawing::Size(120, 115);
			this->btFinish->TabIndex = 2;
			this->btFinish->Text = L"FINISH";
			this->btFinish->UseVisualStyleBackColor = false;
			this->btFinish->Click += gcnew System::EventHandler(this, &wndForm::btFinish_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(199, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(265, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Setting test window";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(199, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 33);
			this->label3->TabIndex = 4;
			this->label3->Text = L"width";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(199, 256);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 33);
			this->label4->TabIndex = 5;
			this->label4->Text = L"height";
			// 
			// numW
			// 
			this->numW->Location = System::Drawing::Point(418, 171);
			this->numW->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3840, 0, 0, 0 });
			this->numW->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numW->Name = L"numW";
			this->numW->Size = System::Drawing::Size(135, 40);
			this->numW->TabIndex = 6;
			this->numW->Tag = L"";
			this->numW->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numW->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 800, 0, 0, 0 });
			// 
			// numH
			// 
			this->numH->Location = System::Drawing::Point(418, 249);
			this->numH->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2160, 0, 0, 0 });
			this->numH->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numH->Name = L"numH";
			this->numH->Size = System::Drawing::Size(135, 40);
			this->numH->TabIndex = 7;
			this->numH->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numH->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 600, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(199, 338);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 33);
			this->label5->TabIndex = 8;
			this->label5->Text = L"count elements";
			// 
			// numCntElem
			// 
			this->numCntElem->Location = System::Drawing::Point(418, 331);
			this->numCntElem->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numCntElem->Name = L"numCntElem";
			this->numCntElem->Size = System::Drawing::Size(135, 40);
			this->numCntElem->TabIndex = 9;
			this->numCntElem->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numCntElem->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(12, 392);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(576, 33);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Level loading GPU";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// trackLoad
			// 
			this->trackLoad->Location = System::Drawing::Point(145, 443);
			this->trackLoad->Name = L"trackLoad";
			this->trackLoad->Size = System::Drawing::Size(300, 45);
			this->trackLoad->TabIndex = 1003;
			this->trackLoad->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackLoad->Scroll += gcnew System::EventHandler(this, &wndForm::trackLoad_Scroll);
			// 
			// textLoad
			// 
			this->textLoad->Location = System::Drawing::Point(451, 443);
			this->textLoad->Name = L"textLoad";
			this->textLoad->Size = System::Drawing::Size(62, 40);
			this->textLoad->TabIndex = 1004;
			this->textLoad->Text = L"0";
			this->textLoad->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(519, 446);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 33);
			this->label7->TabIndex = 1005;
			this->label7->Text = L"%";
			// 
			// wndForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 33);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(600, 500);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textLoad);
			this->Controls->Add(this->trackLoad);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numCntElem);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numH);
			this->Controls->Add(this->numW);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btFinish);
			this->Controls->Add(this->btStart);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(8);
			this->MaximizeBox = false;
			this->Name = L"wndForm";
			this->Text = L"Load GPU";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numW))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numH))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCntElem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackLoad))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btStart_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btFinish_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void trackLoad_Scroll(System::Object^ sender, System::EventArgs^ e);
	};
}