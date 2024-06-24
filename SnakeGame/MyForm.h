#pragma once

namespace SnakeGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ LeftBorder;
	private: System::Windows::Forms::PictureBox^ RightBorder;
	protected:


	private: System::Windows::Forms::PictureBox^ DownBorder;

	private: System::Windows::Forms::PictureBox^ UpBorder;
	private: System::Windows::Forms::Label^ labelScore;


	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàóçàïğîäîëæèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èíôîğìàöèÿÎÈãğåToolStripMenuItem;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSpeed;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBoxSettings;

	private: System::Windows::Forms::Button^ buttonApply;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêèToolStripMenuItem;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxColorSnake;
	private: System::Windows::Forms::CheckBox^ checkBoxBorders;



	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->LeftBorder = (gcnew System::Windows::Forms::PictureBox());
			this->RightBorder = (gcnew System::Windows::Forms::PictureBox());
			this->DownBorder = (gcnew System::Windows::Forms::PictureBox());
			this->UpBorder = (gcnew System::Windows::Forms::PictureBox());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâàÿÈãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàóçàïğîäîëæèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòğîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->numericUpDownSpeed = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxBorders = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxColorSnake = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonApply = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DownBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpBorder))->BeginInit();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeed))->BeginInit();
			this->groupBoxSettings->SuspendLayout();
			this->SuspendLayout();
			// 
			// LeftBorder
			// 
			this->LeftBorder->BackColor = System::Drawing::Color::Black;
			this->LeftBorder->Location = System::Drawing::Point(53, 98);
			this->LeftBorder->Name = L"LeftBorder";
			this->LeftBorder->Size = System::Drawing::Size(15, 432);
			this->LeftBorder->TabIndex = 0;
			this->LeftBorder->TabStop = false;
			// 
			// RightBorder
			// 
			this->RightBorder->BackColor = System::Drawing::Color::Black;
			this->RightBorder->Location = System::Drawing::Point(773, 111);
			this->RightBorder->Name = L"RightBorder";
			this->RightBorder->Size = System::Drawing::Size(15, 432);
			this->RightBorder->TabIndex = 1;
			this->RightBorder->TabStop = false;
			// 
			// DownBorder
			// 
			this->DownBorder->BackColor = System::Drawing::Color::Black;
			this->DownBorder->Location = System::Drawing::Point(53, 529);
			this->DownBorder->Name = L"DownBorder";
			this->DownBorder->Size = System::Drawing::Size(735, 14);
			this->DownBorder->TabIndex = 2;
			this->DownBorder->TabStop = false;
			// 
			// UpBorder
			// 
			this->UpBorder->BackColor = System::Drawing::Color::Black;
			this->UpBorder->Location = System::Drawing::Point(53, 98);
			this->UpBorder->Name = L"UpBorder";
			this->UpBorder->Size = System::Drawing::Size(735, 14);
			this->UpBorder->TabIndex = 3;
			this->UpBorder->TabStop = false;
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelScore->Location = System::Drawing::Point(535, 54);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(81, 25);
			this->labelScore->TabIndex = 4;
			this->labelScore->Text = L"Ñ÷åò: 0";
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíşToolStripMenuItem,
					this->èíôîğìàöèÿÎÈãğåToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(981, 28);
			this->menuStrip2->TabIndex = 5;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->íîâàÿÈãğàToolStripMenuItem,
					this->ïàóçàïğîäîëæèòüToolStripMenuItem, this->íàñòğîéêèToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->ìåíşToolStripMenuItem->Text = L" Ìåíş ";
			// 
			// íîâàÿÈãğàToolStripMenuItem
			// 
			this->íîâàÿÈãğàToolStripMenuItem->Name = L"íîâàÿÈãğàToolStripMenuItem";
			this->íîâàÿÈãğàToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->íîâàÿÈãğàToolStripMenuItem->Text = L"Íîâàÿ èãğà ";
			this->íîâàÿÈãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íîâàÿÈãğàToolStripMenuItem_Click);
			// 
			// ïàóçàïğîäîëæèòüToolStripMenuItem
			// 
			this->ïàóçàïğîäîëæèòüToolStripMenuItem->Name = L"ïàóçàïğîäîëæèòüToolStripMenuItem";
			this->ïàóçàïğîäîëæèòüToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->ïàóçàïğîäîëæèòüToolStripMenuItem->Text = L"Ïàóçà/ïğîäîëæèòü ";
			this->ïàóçàïğîäîëæèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïàóçàïğîäîëæèòüToolStripMenuItem_Click);
			// 
			// íàñòğîéêèToolStripMenuItem
			// 
			this->íàñòğîéêèToolStripMenuItem->Name = L"íàñòğîéêèToolStripMenuItem";
			this->íàñòğîéêèToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->íàñòğîéêèToolStripMenuItem->Text = L"Íàñòğîéêè ";
			this->íàñòğîéêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàñòğîéêèToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä ";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// èíôîğìàöèÿÎÈãğåToolStripMenuItem
			// 
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem->Name = L"èíôîğìàöèÿÎÈãğåToolStripMenuItem";
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem->Size = System::Drawing::Size(165, 24);
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem->Text = L"Èíôîğìàöèÿ î èãğå";
			this->èíôîğìàöèÿÎÈãğåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::èíôîğìàöèÿÎÈãğåToolStripMenuItem_Click);
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::Form_Updete);
			// 
			// numericUpDownSpeed
			// 
			this->numericUpDownSpeed->Enabled = false;
			this->numericUpDownSpeed->Location = System::Drawing::Point(200, 54);
			this->numericUpDownSpeed->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSpeed->Name = L"numericUpDownSpeed";
			this->numericUpDownSpeed->Size = System::Drawing::Size(120, 22);
			this->numericUpDownSpeed->TabIndex = 6;
			this->numericUpDownSpeed->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(65, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Ñêîğîñòü";
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->checkBoxBorders);
			this->groupBoxSettings->Controls->Add(this->comboBoxColorSnake);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Controls->Add(this->buttonApply);
			this->groupBoxSettings->Controls->Add(this->label1);
			this->groupBoxSettings->Controls->Add(this->numericUpDownSpeed);
			this->groupBoxSettings->Location = System::Drawing::Point(229, 126);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(363, 365);
			this->groupBoxSettings->TabIndex = 8;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"Íàñòğîéêè ";
			this->groupBoxSettings->Visible = false;
			// 
			// checkBoxBorders
			// 
			this->checkBoxBorders->AutoSize = true;
			this->checkBoxBorders->Checked = true;
			this->checkBoxBorders->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxBorders->Location = System::Drawing::Point(124, 128);
			this->checkBoxBorders->Name = L"checkBoxBorders";
			this->checkBoxBorders->Size = System::Drawing::Size(144, 20);
			this->checkBoxBorders->TabIndex = 12;
			this->checkBoxBorders->Text = L"Ñìåğòü îò ãğàíèö";
			this->checkBoxBorders->UseVisualStyleBackColor = true;
			// 
			// comboBoxColorSnake
			// 
			this->comboBoxColorSnake->FormattingEnabled = true;
			this->comboBoxColorSnake->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Green", L"Red", L"Blue", L"Black", L"Yellow" });
			this->comboBoxColorSnake->Location = System::Drawing::Point(199, 82);
			this->comboBoxColorSnake->Name = L"comboBoxColorSnake";
			this->comboBoxColorSnake->Size = System::Drawing::Size(121, 24);
			this->comboBoxColorSnake->TabIndex = 11;
			this->comboBoxColorSnake->Text = L"Green";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(65, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Öâåò òåëà";
			// 
			// buttonApply
			// 
			this->buttonApply->Location = System::Drawing::Point(124, 317);
			this->buttonApply->Name = L"buttonApply";
			this->buttonApply->Size = System::Drawing::Size(116, 33);
			this->buttonApply->TabIndex = 8;
			this->buttonApply->Text = L"Ïğèìåíèòü ";
			this->buttonApply->UseVisualStyleBackColor = true;
			this->buttonApply->Click += gcnew System::EventHandler(this, &MyForm::buttonApply_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 676);
			this->Controls->Add(this->groupBoxSettings);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->labelScore);
			this->Controls->Add(this->UpBorder);
			this->Controls->Add(this->DownBorder);
			this->Controls->Add(this->RightBorder);
			this->Controls->Add(this->LeftBorder);
			this->MainMenuStrip = this->menuStrip2;
			this->Name = L"MyForm";
			this->Text = L"Snake";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DownBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpBorder))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeed))->EndInit();
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		private: array<PictureBox^>^ SnakePart;
		private: PictureBox^ fruit;
		private: bool play;
		private: bool die; 
		private: bool firstLaunch;

		private: int step = 10;
		private: int updateInterval = 100;
		private: int score = 0;
		private: Color snakeColor = Color::Green;


	    private: void Eating();
	    private: void GenerationPositionFruit();
		private: void Movement();
		private: void EatYourself();
		private: void GameOver();
		private: void NewGame();
		private: void CheckBorders();

#pragma endregion
	private: System::Void íîâàÿÈãğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïàóçàïğîäîëæèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void èíôîğìàöèÿÎÈãğåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: void Form_Updete(System::Object^ sender, System::EventArgs^ e);
    private: System::Void íàñòğîéêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void buttonApply_Click(System::Object^ sender, System::EventArgs^ e);
};
}
