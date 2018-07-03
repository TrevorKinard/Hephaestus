#pragma once

namespace Hephaestus
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  PropertiesPanel;
	private: System::Windows::Forms::Panel^  PropertiesBar;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^  PropertiesExit;
	private: System::Windows::Forms::Label^  CellPropertiesLabel;
	private: System::Windows::Forms::Panel^  ViewerPanel;
	private: System::Windows::Forms::PictureBox^  Logo;
	private: System::Windows::Forms::Label^  ApplicationLabel;
	private: System::Windows::Forms::PictureBox^  ExitButtonImage;
	private: System::Windows::Forms::PictureBox^  SizeButtonImage;
	private: System::Windows::Forms::PictureBox^  MinimizeButtonImage;
	private: System::Windows::Forms::Panel^  TitleBar;
	private: System::Windows::Forms::Panel^  ToolMenu;
	private: System::Windows::Forms::Label^  ObjectInformationLabel;
	private: System::Windows::Forms::Label^  HelpButton;
	private: System::Windows::Forms::Label^  FileButton;
	private: System::Windows::Forms::Label^  ViewButton;
	private: System::Windows::Forms::Panel^  BottomSeperator;
	private: System::Windows::Forms::Panel^  LeftSeperator;
	private: System::Windows::Forms::Panel^  RightSeperator;
	private: System::Windows::Forms::Panel^  PanelSeperator;
	private: System::Windows::Forms::Label^  ElasticityLabel;
	private: System::Windows::Forms::Label^  YieldStrengthLabel;
	private: System::Windows::Forms::Label^  MaterialLabel;
	private: System::Windows::Forms::Label^  ShearTensileLabel;
	private: System::Windows::Forms::Label^  NodeSpacingLabel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TrackBar^  ShearTensileSlider;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TextBox^  YieldStrengthInput;
	private: System::Windows::Forms::TextBox^  MaterialElasticityInput;
	private: System::Windows::Forms::NumericUpDown^  NodeSpacingInput;
	private: System::Windows::Forms::NumericUpDown^  StrainLimitInput;
	private: System::Windows::Forms::Label^  GravityLabel;
	private: System::Windows::Forms::TextBox^  GravityInput;
	private: System::Windows::Forms::DomainUpDown^  MaterialList;
	private: System::Windows::Forms::TextBox^  PositionalReadOut;
	private: System::Windows::Forms::Button^  SimulateButton;
	private: System::Windows::Forms::Label^  ForceObjectsLabel;
	private: System::Windows::Forms::Label^  ObstacleObjectsLabel;
	private: System::Windows::Forms::Label^  MaterialDensityLabel;
	private: System::Windows::Forms::Label^  FillObjectsLabel;
	private: System::Windows::Forms::Label^  TargetNodeLabel;
	private: System::Windows::Forms::Label^  SeedNodeLabel;
	private: System::Windows::Forms::Panel^  PropertiesSeperator2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  GrowthScenarioLabel;
	private: System::Windows::Forms::Panel^  PropertiesSeperator1;
	private: System::Windows::Forms::Panel^  PropertiesSeperator;
	private: System::Windows::Forms::Panel^  PropertiesTopSeperator;
	private: System::Windows::Forms::Panel^  PropertiesRightSeperator;
	private: System::Windows::Forms::Panel^  PropertiesLeftSeperator;
	private: System::Windows::Forms::TextBox^  ObstacleFileInput;
	private: System::Windows::Forms::TextBox^  MaterialDensityInput;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Panel^  TargetPanel;
	private: System::Windows::Forms::TextBox^  TargetZInput;
	private: System::Windows::Forms::Label^  TargetZLabel;
	private: System::Windows::Forms::TextBox^  TargetYInput;
	private: System::Windows::Forms::Label^  TargetYLabel;
	private: System::Windows::Forms::TextBox^  TargetXInput;
	private: System::Windows::Forms::Label^  TargetXLabel;
	private: System::Windows::Forms::Panel^  SeedPanel;
	private: System::Windows::Forms::TextBox^  SeedZInput;
	private: System::Windows::Forms::Label^  SeedZLabel;
	private: System::Windows::Forms::TextBox^  SeedYInput;
	private: System::Windows::Forms::Label^  SeedYLabel;
	private: System::Windows::Forms::TextBox^  SeedXInput;
	private: System::Windows::Forms::Label^  SeedXLabel;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->PropertiesPanel = (gcnew System::Windows::Forms::Panel());
			this->FillObjectsLabel = (gcnew System::Windows::Forms::Label());
			this->ForceObjectsLabel = (gcnew System::Windows::Forms::Label());
			this->ObstacleFileInput = (gcnew System::Windows::Forms::TextBox());
			this->ObstacleObjectsLabel = (gcnew System::Windows::Forms::Label());
			this->TargetPanel = (gcnew System::Windows::Forms::Panel());
			this->TargetZInput = (gcnew System::Windows::Forms::TextBox());
			this->TargetZLabel = (gcnew System::Windows::Forms::Label());
			this->TargetYInput = (gcnew System::Windows::Forms::TextBox());
			this->TargetYLabel = (gcnew System::Windows::Forms::Label());
			this->TargetXInput = (gcnew System::Windows::Forms::TextBox());
			this->TargetXLabel = (gcnew System::Windows::Forms::Label());
			this->TargetNodeLabel = (gcnew System::Windows::Forms::Label());
			this->SeedPanel = (gcnew System::Windows::Forms::Panel());
			this->SeedZInput = (gcnew System::Windows::Forms::TextBox());
			this->SeedZLabel = (gcnew System::Windows::Forms::Label());
			this->SeedYInput = (gcnew System::Windows::Forms::TextBox());
			this->SeedYLabel = (gcnew System::Windows::Forms::Label());
			this->SeedXInput = (gcnew System::Windows::Forms::TextBox());
			this->SeedXLabel = (gcnew System::Windows::Forms::Label());
			this->SeedNodeLabel = (gcnew System::Windows::Forms::Label());
			this->GravityInput = (gcnew System::Windows::Forms::TextBox());
			this->GravityLabel = (gcnew System::Windows::Forms::Label());
			this->PropertiesSeperator2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->GrowthScenarioLabel = (gcnew System::Windows::Forms::Label());
			this->PropertiesSeperator1 = (gcnew System::Windows::Forms::Panel());
			this->SimulateButton = (gcnew System::Windows::Forms::Button());
			this->PropertiesSeperator = (gcnew System::Windows::Forms::Panel());
			this->NodeSpacingInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->NodeSpacingLabel = (gcnew System::Windows::Forms::Label());
			this->ShearTensileSlider = (gcnew System::Windows::Forms::TrackBar());
			this->ShearTensileLabel = (gcnew System::Windows::Forms::Label());
			this->StrainLimitInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MaterialElasticityInput = (gcnew System::Windows::Forms::TextBox());
			this->ElasticityLabel = (gcnew System::Windows::Forms::Label());
			this->YieldStrengthInput = (gcnew System::Windows::Forms::TextBox());
			this->YieldStrengthLabel = (gcnew System::Windows::Forms::Label());
			this->MaterialDensityInput = (gcnew System::Windows::Forms::TextBox());
			this->MaterialDensityLabel = (gcnew System::Windows::Forms::Label());
			this->MaterialList = (gcnew System::Windows::Forms::DomainUpDown());
			this->MaterialLabel = (gcnew System::Windows::Forms::Label());
			this->PropertiesLeftSeperator = (gcnew System::Windows::Forms::Panel());
			this->PropertiesRightSeperator = (gcnew System::Windows::Forms::Panel());
			this->PropertiesTopSeperator = (gcnew System::Windows::Forms::Panel());
			this->PropertiesBar = (gcnew System::Windows::Forms::Panel());
			this->PropertiesExit = (gcnew System::Windows::Forms::PictureBox());
			this->CellPropertiesLabel = (gcnew System::Windows::Forms::Label());
			this->ViewerPanel = (gcnew System::Windows::Forms::Panel());
			this->PositionalReadOut = (gcnew System::Windows::Forms::TextBox());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->ApplicationLabel = (gcnew System::Windows::Forms::Label());
			this->ExitButtonImage = (gcnew System::Windows::Forms::PictureBox());
			this->SizeButtonImage = (gcnew System::Windows::Forms::PictureBox());
			this->MinimizeButtonImage = (gcnew System::Windows::Forms::PictureBox());
			this->TitleBar = (gcnew System::Windows::Forms::Panel());
			this->ToolMenu = (gcnew System::Windows::Forms::Panel());
			this->ViewButton = (gcnew System::Windows::Forms::Label());
			this->ObjectInformationLabel = (gcnew System::Windows::Forms::Label());
			this->HelpButton = (gcnew System::Windows::Forms::Label());
			this->FileButton = (gcnew System::Windows::Forms::Label());
			this->BottomSeperator = (gcnew System::Windows::Forms::Panel());
			this->LeftSeperator = (gcnew System::Windows::Forms::Panel());
			this->RightSeperator = (gcnew System::Windows::Forms::Panel());
			this->PanelSeperator = (gcnew System::Windows::Forms::Panel());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->PropertiesPanel->SuspendLayout();
			this->TargetPanel->SuspendLayout();
			this->SeedPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NodeSpacingInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShearTensileSlider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StrainLimitInput))->BeginInit();
			this->PropertiesBar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PropertiesExit))->BeginInit();
			this->ViewerPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExitButtonImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeButtonImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinimizeButtonImage))->BeginInit();
			this->TitleBar->SuspendLayout();
			this->ToolMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// PropertiesPanel
			// 
			this->PropertiesPanel->AutoScroll = true;
			this->PropertiesPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PropertiesPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->PropertiesPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PropertiesPanel->Controls->Add(this->FillObjectsLabel);
			this->PropertiesPanel->Controls->Add(this->ForceObjectsLabel);
			this->PropertiesPanel->Controls->Add(this->ObstacleFileInput);
			this->PropertiesPanel->Controls->Add(this->ObstacleObjectsLabel);
			this->PropertiesPanel->Controls->Add(this->TargetPanel);
			this->PropertiesPanel->Controls->Add(this->TargetNodeLabel);
			this->PropertiesPanel->Controls->Add(this->SeedPanel);
			this->PropertiesPanel->Controls->Add(this->SeedNodeLabel);
			this->PropertiesPanel->Controls->Add(this->GravityInput);
			this->PropertiesPanel->Controls->Add(this->GravityLabel);
			this->PropertiesPanel->Controls->Add(this->PropertiesSeperator2);
			this->PropertiesPanel->Controls->Add(this->panel1);
			this->PropertiesPanel->Controls->Add(this->PropertiesSeperator1);
			this->PropertiesPanel->Controls->Add(this->SimulateButton);
			this->PropertiesPanel->Controls->Add(this->PropertiesSeperator);
			this->PropertiesPanel->Controls->Add(this->NodeSpacingInput);
			this->PropertiesPanel->Controls->Add(this->NodeSpacingLabel);
			this->PropertiesPanel->Controls->Add(this->ShearTensileSlider);
			this->PropertiesPanel->Controls->Add(this->ShearTensileLabel);
			this->PropertiesPanel->Controls->Add(this->StrainLimitInput);
			this->PropertiesPanel->Controls->Add(this->label1);
			this->PropertiesPanel->Controls->Add(this->MaterialElasticityInput);
			this->PropertiesPanel->Controls->Add(this->ElasticityLabel);
			this->PropertiesPanel->Controls->Add(this->YieldStrengthInput);
			this->PropertiesPanel->Controls->Add(this->YieldStrengthLabel);
			this->PropertiesPanel->Controls->Add(this->MaterialDensityInput);
			this->PropertiesPanel->Controls->Add(this->MaterialDensityLabel);
			this->PropertiesPanel->Controls->Add(this->MaterialList);
			this->PropertiesPanel->Controls->Add(this->MaterialLabel);
			this->PropertiesPanel->Controls->Add(this->PropertiesLeftSeperator);
			this->PropertiesPanel->Controls->Add(this->PropertiesRightSeperator);
			this->PropertiesPanel->Controls->Add(this->PropertiesTopSeperator);
			this->PropertiesPanel->Controls->Add(this->PropertiesBar);
			this->PropertiesPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->PropertiesPanel->Location = System::Drawing::Point(12, 114);
			this->PropertiesPanel->Name = L"PropertiesPanel";
			this->PropertiesPanel->Size = System::Drawing::Size(436, 990);
			this->PropertiesPanel->TabIndex = 1;
			// 
			// FillObjectsLabel
			// 
			this->FillObjectsLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->FillObjectsLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->FillObjectsLabel->Location = System::Drawing::Point(12, 1036);
			this->FillObjectsLabel->Name = L"FillObjectsLabel";
			this->FillObjectsLabel->Size = System::Drawing::Size(367, 32);
			this->FillObjectsLabel->TabIndex = 27;
			this->FillObjectsLabel->Text = L"Fill Objects";
			this->FillObjectsLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->FillObjectsLabel->Visible = false;
			// 
			// ForceObjectsLabel
			// 
			this->ForceObjectsLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ForceObjectsLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->ForceObjectsLabel->Location = System::Drawing::Point(12, 1004);
			this->ForceObjectsLabel->Name = L"ForceObjectsLabel";
			this->ForceObjectsLabel->Size = System::Drawing::Size(367, 32);
			this->ForceObjectsLabel->TabIndex = 30;
			this->ForceObjectsLabel->Text = L"Force Objects";
			this->ForceObjectsLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ForceObjectsLabel->Visible = false;
			// 
			// ObstacleFileInput
			// 
			this->ObstacleFileInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ObstacleFileInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ObstacleFileInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->ObstacleFileInput->ForeColor = System::Drawing::SystemColors::Control;
			this->ObstacleFileInput->Location = System::Drawing::Point(12, 966);
			this->ObstacleFileInput->Name = L"ObstacleFileInput";
			this->ObstacleFileInput->Size = System::Drawing::Size(367, 38);
			this->ObstacleFileInput->TabIndex = 32;
			this->ObstacleFileInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ObstacleFileInput->Visible = false;
			this->ObstacleFileInput->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &GUI::ObstacleFileInput_MouseDoubleClick);
			// 
			// ObstacleObjectsLabel
			// 
			this->ObstacleObjectsLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ObstacleObjectsLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->ObstacleObjectsLabel->Location = System::Drawing::Point(12, 934);
			this->ObstacleObjectsLabel->Name = L"ObstacleObjectsLabel";
			this->ObstacleObjectsLabel->Size = System::Drawing::Size(367, 32);
			this->ObstacleObjectsLabel->TabIndex = 26;
			this->ObstacleObjectsLabel->Text = L"Obstacle Objects";
			this->ObstacleObjectsLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ObstacleObjectsLabel->Visible = false;
			// 
			// TargetPanel
			// 
			this->TargetPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TargetPanel->Controls->Add(this->TargetZInput);
			this->TargetPanel->Controls->Add(this->TargetZLabel);
			this->TargetPanel->Controls->Add(this->TargetYInput);
			this->TargetPanel->Controls->Add(this->TargetYLabel);
			this->TargetPanel->Controls->Add(this->TargetXInput);
			this->TargetPanel->Controls->Add(this->TargetXLabel);
			this->TargetPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->TargetPanel->Location = System::Drawing::Point(12, 896);
			this->TargetPanel->Name = L"TargetPanel";
			this->TargetPanel->Size = System::Drawing::Size(367, 38);
			this->TargetPanel->TabIndex = 35;
			// 
			// TargetZInput
			// 
			this->TargetZInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->TargetZInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TargetZInput->Dock = System::Windows::Forms::DockStyle::Left;
			this->TargetZInput->ForeColor = System::Drawing::SystemColors::Control;
			this->TargetZInput->Location = System::Drawing::Point(284, 0);
			this->TargetZInput->Name = L"TargetZInput";
			this->TargetZInput->Size = System::Drawing::Size(80, 38);
			this->TargetZInput->TabIndex = 11;
			this->TargetZInput->Text = L"8";
			this->TargetZInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TargetZLabel
			// 
			this->TargetZLabel->AutoSize = true;
			this->TargetZLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->TargetZLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->TargetZLabel->Location = System::Drawing::Point(244, 0);
			this->TargetZLabel->Name = L"TargetZLabel";
			this->TargetZLabel->Size = System::Drawing::Size(40, 32);
			this->TargetZLabel->TabIndex = 8;
			this->TargetZLabel->Text = L"Z:";
			// 
			// TargetYInput
			// 
			this->TargetYInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->TargetYInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TargetYInput->Dock = System::Windows::Forms::DockStyle::Left;
			this->TargetYInput->ForeColor = System::Drawing::SystemColors::Control;
			this->TargetYInput->Location = System::Drawing::Point(164, 0);
			this->TargetYInput->Name = L"TargetYInput";
			this->TargetYInput->Size = System::Drawing::Size(80, 38);
			this->TargetYInput->TabIndex = 10;
			this->TargetYInput->Text = L"0";
			this->TargetYInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TargetYLabel
			// 
			this->TargetYLabel->AutoSize = true;
			this->TargetYLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->TargetYLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->TargetYLabel->Location = System::Drawing::Point(122, 0);
			this->TargetYLabel->Name = L"TargetYLabel";
			this->TargetYLabel->Size = System::Drawing::Size(42, 32);
			this->TargetYLabel->TabIndex = 7;
			this->TargetYLabel->Text = L"Y:";
			// 
			// TargetXInput
			// 
			this->TargetXInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->TargetXInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TargetXInput->Dock = System::Windows::Forms::DockStyle::Left;
			this->TargetXInput->ForeColor = System::Drawing::SystemColors::Control;
			this->TargetXInput->Location = System::Drawing::Point(42, 0);
			this->TargetXInput->Name = L"TargetXInput";
			this->TargetXInput->Size = System::Drawing::Size(80, 38);
			this->TargetXInput->TabIndex = 9;
			this->TargetXInput->Text = L"0";
			this->TargetXInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TargetXLabel
			// 
			this->TargetXLabel->AutoSize = true;
			this->TargetXLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->TargetXLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->TargetXLabel->Location = System::Drawing::Point(0, 0);
			this->TargetXLabel->Name = L"TargetXLabel";
			this->TargetXLabel->Size = System::Drawing::Size(42, 32);
			this->TargetXLabel->TabIndex = 6;
			this->TargetXLabel->Text = L"X:";
			// 
			// TargetNodeLabel
			// 
			this->TargetNodeLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->TargetNodeLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->TargetNodeLabel->Location = System::Drawing::Point(12, 864);
			this->TargetNodeLabel->Name = L"TargetNodeLabel";
			this->TargetNodeLabel->Size = System::Drawing::Size(367, 32);
			this->TargetNodeLabel->TabIndex = 25;
			this->TargetNodeLabel->Text = L"Target Node";
			this->TargetNodeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// SeedPanel
			// 
			this->SeedPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SeedPanel->Controls->Add(this->SeedZInput);
			this->SeedPanel->Controls->Add(this->SeedZLabel);
			this->SeedPanel->Controls->Add(this->SeedYInput);
			this->SeedPanel->Controls->Add(this->SeedYLabel);
			this->SeedPanel->Controls->Add(this->SeedXInput);
			this->SeedPanel->Controls->Add(this->SeedXLabel);
			this->SeedPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->SeedPanel->Location = System::Drawing::Point(12, 826);
			this->SeedPanel->Name = L"SeedPanel";
			this->SeedPanel->Size = System::Drawing::Size(367, 38);
			this->SeedPanel->TabIndex = 34;
			// 
			// SeedZInput
			// 
			this->SeedZInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->SeedZInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SeedZInput->Dock = System::Windows::Forms::DockStyle::Left;
			this->SeedZInput->ForeColor = System::Drawing::SystemColors::Control;
			this->SeedZInput->Location = System::Drawing::Point(284, 0);
			this->SeedZInput->Name = L"SeedZInput";
			this->SeedZInput->Size = System::Drawing::Size(80, 38);
			this->SeedZInput->TabIndex = 5;
			this->SeedZInput->Text = L"0";
			this->SeedZInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// SeedZLabel
			// 
			this->SeedZLabel->AutoSize = true;
			this->SeedZLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->SeedZLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->SeedZLabel->Location = System::Drawing::Point(244, 0);
			this->SeedZLabel->Name = L"SeedZLabel";
			this->SeedZLabel->Size = System::Drawing::Size(40, 32);
			this->SeedZLabel->TabIndex = 2;
			this->SeedZLabel->Text = L"Z:";
			// 
			// SeedYInput
			// 
			this->SeedYInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->SeedYInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SeedYInput->Dock = System::Windows::Forms::DockStyle::Left;
			this->SeedYInput->ForeColor = System::Drawing::SystemColors::Control;
			this->SeedYInput->Location = System::Drawing::Point(164, 0);
			this->SeedYInput->Name = L"SeedYInput";
			this->SeedYInput->Size = System::Drawing::Size(80, 38);
			this->SeedYInput->TabIndex = 4;
			this->SeedYInput->Text = L"0";
			this->SeedYInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// SeedYLabel
			// 
			this->SeedYLabel->AutoSize = true;
			this->SeedYLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->SeedYLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->SeedYLabel->Location = System::Drawing::Point(122, 0);
			this->SeedYLabel->Name = L"SeedYLabel";
			this->SeedYLabel->Size = System::Drawing::Size(42, 32);
			this->SeedYLabel->TabIndex = 1;
			this->SeedYLabel->Text = L"Y:";
			// 
			// SeedXInput
			// 
			this->SeedXInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->SeedXInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SeedXInput->Dock = System::Windows::Forms::DockStyle::Left;
			this->SeedXInput->ForeColor = System::Drawing::SystemColors::Control;
			this->SeedXInput->Location = System::Drawing::Point(42, 0);
			this->SeedXInput->Name = L"SeedXInput";
			this->SeedXInput->Size = System::Drawing::Size(80, 38);
			this->SeedXInput->TabIndex = 3;
			this->SeedXInput->Text = L"0";
			this->SeedXInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// SeedXLabel
			// 
			this->SeedXLabel->AutoSize = true;
			this->SeedXLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->SeedXLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->SeedXLabel->Location = System::Drawing::Point(0, 0);
			this->SeedXLabel->Name = L"SeedXLabel";
			this->SeedXLabel->Size = System::Drawing::Size(42, 32);
			this->SeedXLabel->TabIndex = 0;
			this->SeedXLabel->Text = L"X:";
			// 
			// SeedNodeLabel
			// 
			this->SeedNodeLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->SeedNodeLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->SeedNodeLabel->Location = System::Drawing::Point(12, 794);
			this->SeedNodeLabel->Name = L"SeedNodeLabel";
			this->SeedNodeLabel->Size = System::Drawing::Size(367, 32);
			this->SeedNodeLabel->TabIndex = 24;
			this->SeedNodeLabel->Text = L"Seed Node";
			this->SeedNodeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// GravityInput
			// 
			this->GravityInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->GravityInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->GravityInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->GravityInput->ForeColor = System::Drawing::SystemColors::Control;
			this->GravityInput->Location = System::Drawing::Point(12, 756);
			this->GravityInput->Name = L"GravityInput";
			this->GravityInput->Size = System::Drawing::Size(367, 38);
			this->GravityInput->TabIndex = 13;
			this->GravityInput->Text = L"9.82";
			this->GravityInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// GravityLabel
			// 
			this->GravityLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->GravityLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->GravityLabel->Location = System::Drawing::Point(12, 724);
			this->GravityLabel->Name = L"GravityLabel";
			this->GravityLabel->Size = System::Drawing::Size(367, 32);
			this->GravityLabel->TabIndex = 14;
			this->GravityLabel->Text = L"Gravity (m/s^2)";
			this->GravityLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// PropertiesSeperator2
			// 
			this->PropertiesSeperator2->Dock = System::Windows::Forms::DockStyle::Top;
			this->PropertiesSeperator2->Location = System::Drawing::Point(12, 712);
			this->PropertiesSeperator2->Name = L"PropertiesSeperator2";
			this->PropertiesSeperator2->Size = System::Drawing::Size(367, 12);
			this->PropertiesSeperator2->TabIndex = 23;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel1->Controls->Add(this->GrowthScenarioLabel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(12, 650);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(367, 62);
			this->panel1->TabIndex = 17;
			// 
			// GrowthScenarioLabel
			// 
			this->GrowthScenarioLabel->AutoSize = true;
			this->GrowthScenarioLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->GrowthScenarioLabel->Location = System::Drawing::Point(3, 15);
			this->GrowthScenarioLabel->Name = L"GrowthScenarioLabel";
			this->GrowthScenarioLabel->Size = System::Drawing::Size(226, 32);
			this->GrowthScenarioLabel->TabIndex = 0;
			this->GrowthScenarioLabel->Text = L"Growth Scenario";
			// 
			// PropertiesSeperator1
			// 
			this->PropertiesSeperator1->Dock = System::Windows::Forms::DockStyle::Top;
			this->PropertiesSeperator1->Location = System::Drawing::Point(12, 638);
			this->PropertiesSeperator1->Name = L"PropertiesSeperator1";
			this->PropertiesSeperator1->Size = System::Drawing::Size(367, 12);
			this->PropertiesSeperator1->TabIndex = 22;
			// 
			// SimulateButton
			// 
			this->SimulateButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->SimulateButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->SimulateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SimulateButton->ForeColor = System::Drawing::SystemColors::Control;
			this->SimulateButton->Location = System::Drawing::Point(12, 595);
			this->SimulateButton->Name = L"SimulateButton";
			this->SimulateButton->Size = System::Drawing::Size(367, 43);
			this->SimulateButton->TabIndex = 16;
			this->SimulateButton->Text = L"Simulate";
			this->SimulateButton->UseVisualStyleBackColor = false;
			this->SimulateButton->Click += gcnew System::EventHandler(this, &GUI::SimulateButton_Click);
			// 
			// PropertiesSeperator
			// 
			this->PropertiesSeperator->Dock = System::Windows::Forms::DockStyle::Top;
			this->PropertiesSeperator->Location = System::Drawing::Point(12, 583);
			this->PropertiesSeperator->Name = L"PropertiesSeperator";
			this->PropertiesSeperator->Size = System::Drawing::Size(367, 12);
			this->PropertiesSeperator->TabIndex = 21;
			// 
			// NodeSpacingInput
			// 
			this->NodeSpacingInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->NodeSpacingInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NodeSpacingInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->NodeSpacingInput->ForeColor = System::Drawing::SystemColors::Control;
			this->NodeSpacingInput->Location = System::Drawing::Point(12, 545);
			this->NodeSpacingInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NodeSpacingInput->Name = L"NodeSpacingInput";
			this->NodeSpacingInput->Size = System::Drawing::Size(367, 38);
			this->NodeSpacingInput->TabIndex = 9;
			this->NodeSpacingInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->NodeSpacingInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// NodeSpacingLabel
			// 
			this->NodeSpacingLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->NodeSpacingLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->NodeSpacingLabel->Location = System::Drawing::Point(12, 513);
			this->NodeSpacingLabel->Name = L"NodeSpacingLabel";
			this->NodeSpacingLabel->Size = System::Drawing::Size(367, 32);
			this->NodeSpacingLabel->TabIndex = 5;
			this->NodeSpacingLabel->Text = L"Node Spacing (* .1mm)";
			this->NodeSpacingLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ShearTensileSlider
			// 
			this->ShearTensileSlider->AutoSize = false;
			this->ShearTensileSlider->Dock = System::Windows::Forms::DockStyle::Top;
			this->ShearTensileSlider->Location = System::Drawing::Point(12, 456);
			this->ShearTensileSlider->Maximum = 100;
			this->ShearTensileSlider->Name = L"ShearTensileSlider";
			this->ShearTensileSlider->Size = System::Drawing::Size(367, 57);
			this->ShearTensileSlider->TabIndex = 7;
			this->ShearTensileSlider->TickStyle = System::Windows::Forms::TickStyle::None;
			this->ShearTensileSlider->Value = 50;
			this->ShearTensileSlider->Visible = false;
			// 
			// ShearTensileLabel
			// 
			this->ShearTensileLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ShearTensileLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->ShearTensileLabel->Location = System::Drawing::Point(12, 424);
			this->ShearTensileLabel->Name = L"ShearTensileLabel";
			this->ShearTensileLabel->Size = System::Drawing::Size(367, 32);
			this->ShearTensileLabel->TabIndex = 6;
			this->ShearTensileLabel->Text = L"Shear / Tensile";
			this->ShearTensileLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ShearTensileLabel->Visible = false;
			// 
			// StrainLimitInput
			// 
			this->StrainLimitInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->StrainLimitInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->StrainLimitInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->StrainLimitInput->ForeColor = System::Drawing::SystemColors::Control;
			this->StrainLimitInput->Location = System::Drawing::Point(12, 386);
			this->StrainLimitInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->StrainLimitInput->Name = L"StrainLimitInput";
			this->StrainLimitInput->Size = System::Drawing::Size(367, 38);
			this->StrainLimitInput->TabIndex = 8;
			this->StrainLimitInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->StrainLimitInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 354);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(367, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Strain Limit";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MaterialElasticityInput
			// 
			this->MaterialElasticityInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->MaterialElasticityInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MaterialElasticityInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->MaterialElasticityInput->ForeColor = System::Drawing::SystemColors::Control;
			this->MaterialElasticityInput->Location = System::Drawing::Point(12, 316);
			this->MaterialElasticityInput->Name = L"MaterialElasticityInput";
			this->MaterialElasticityInput->Size = System::Drawing::Size(367, 38);
			this->MaterialElasticityInput->TabIndex = 10;
			this->MaterialElasticityInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MaterialElasticityInput->TextChanged += gcnew System::EventHandler(this, &GUI::MaterialInput_TextChanged);
			// 
			// ElasticityLabel
			// 
			this->ElasticityLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ElasticityLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->ElasticityLabel->Location = System::Drawing::Point(12, 284);
			this->ElasticityLabel->Name = L"ElasticityLabel";
			this->ElasticityLabel->Size = System::Drawing::Size(367, 32);
			this->ElasticityLabel->TabIndex = 2;
			this->ElasticityLabel->Text = L"Material Elasticity";
			this->ElasticityLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// YieldStrengthInput
			// 
			this->YieldStrengthInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->YieldStrengthInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->YieldStrengthInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->YieldStrengthInput->ForeColor = System::Drawing::SystemColors::Control;
			this->YieldStrengthInput->Location = System::Drawing::Point(12, 246);
			this->YieldStrengthInput->Name = L"YieldStrengthInput";
			this->YieldStrengthInput->Size = System::Drawing::Size(367, 38);
			this->YieldStrengthInput->TabIndex = 12;
			this->YieldStrengthInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->YieldStrengthInput->TextChanged += gcnew System::EventHandler(this, &GUI::MaterialInput_TextChanged);
			// 
			// YieldStrengthLabel
			// 
			this->YieldStrengthLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->YieldStrengthLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->YieldStrengthLabel->Location = System::Drawing::Point(12, 214);
			this->YieldStrengthLabel->Name = L"YieldStrengthLabel";
			this->YieldStrengthLabel->Size = System::Drawing::Size(367, 32);
			this->YieldStrengthLabel->TabIndex = 1;
			this->YieldStrengthLabel->Text = L"Material Yield Strength";
			this->YieldStrengthLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MaterialDensityInput
			// 
			this->MaterialDensityInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->MaterialDensityInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MaterialDensityInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->MaterialDensityInput->ForeColor = System::Drawing::SystemColors::Control;
			this->MaterialDensityInput->Location = System::Drawing::Point(12, 176);
			this->MaterialDensityInput->Name = L"MaterialDensityInput";
			this->MaterialDensityInput->Size = System::Drawing::Size(367, 38);
			this->MaterialDensityInput->TabIndex = 33;
			this->MaterialDensityInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MaterialDensityInput->TextChanged += gcnew System::EventHandler(this, &GUI::MaterialInput_TextChanged);
			// 
			// MaterialDensityLabel
			// 
			this->MaterialDensityLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->MaterialDensityLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->MaterialDensityLabel->Location = System::Drawing::Point(12, 144);
			this->MaterialDensityLabel->Name = L"MaterialDensityLabel";
			this->MaterialDensityLabel->Size = System::Drawing::Size(367, 32);
			this->MaterialDensityLabel->TabIndex = 28;
			this->MaterialDensityLabel->Text = L"Material Density";
			this->MaterialDensityLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MaterialList
			// 
			this->MaterialList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->MaterialList->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MaterialList->Dock = System::Windows::Forms::DockStyle::Top;
			this->MaterialList->ForeColor = System::Drawing::SystemColors::Control;
			this->MaterialList->Items->Add(L"");
			this->MaterialList->Items->Add(L"ABS");
			this->MaterialList->Items->Add(L"PLA");
			this->MaterialList->Location = System::Drawing::Point(12, 106);
			this->MaterialList->Name = L"MaterialList";
			this->MaterialList->ReadOnly = true;
			this->MaterialList->Size = System::Drawing::Size(367, 38);
			this->MaterialList->TabIndex = 15;
			this->MaterialList->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MaterialList->TextChanged += gcnew System::EventHandler(this, &GUI::MaterialList_TextChanged);
			// 
			// MaterialLabel
			// 
			this->MaterialLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->MaterialLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->MaterialLabel->Location = System::Drawing::Point(12, 74);
			this->MaterialLabel->Name = L"MaterialLabel";
			this->MaterialLabel->Size = System::Drawing::Size(367, 32);
			this->MaterialLabel->TabIndex = 3;
			this->MaterialLabel->Text = L"Material";
			this->MaterialLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// PropertiesLeftSeperator
			// 
			this->PropertiesLeftSeperator->Dock = System::Windows::Forms::DockStyle::Left;
			this->PropertiesLeftSeperator->Location = System::Drawing::Point(0, 74);
			this->PropertiesLeftSeperator->Name = L"PropertiesLeftSeperator";
			this->PropertiesLeftSeperator->Size = System::Drawing::Size(12, 994);
			this->PropertiesLeftSeperator->TabIndex = 19;
			// 
			// PropertiesRightSeperator
			// 
			this->PropertiesRightSeperator->Dock = System::Windows::Forms::DockStyle::Right;
			this->PropertiesRightSeperator->Location = System::Drawing::Point(379, 74);
			this->PropertiesRightSeperator->Name = L"PropertiesRightSeperator";
			this->PropertiesRightSeperator->Size = System::Drawing::Size(12, 994);
			this->PropertiesRightSeperator->TabIndex = 20;
			// 
			// PropertiesTopSeperator
			// 
			this->PropertiesTopSeperator->Dock = System::Windows::Forms::DockStyle::Top;
			this->PropertiesTopSeperator->Location = System::Drawing::Point(0, 62);
			this->PropertiesTopSeperator->Name = L"PropertiesTopSeperator";
			this->PropertiesTopSeperator->Size = System::Drawing::Size(391, 12);
			this->PropertiesTopSeperator->TabIndex = 18;
			// 
			// PropertiesBar
			// 
			this->PropertiesBar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PropertiesBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->PropertiesBar->Controls->Add(this->PropertiesExit);
			this->PropertiesBar->Controls->Add(this->CellPropertiesLabel);
			this->PropertiesBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->PropertiesBar->ForeColor = System::Drawing::SystemColors::Control;
			this->PropertiesBar->Location = System::Drawing::Point(0, 0);
			this->PropertiesBar->Name = L"PropertiesBar";
			this->PropertiesBar->Size = System::Drawing::Size(391, 62);
			this->PropertiesBar->TabIndex = 0;
			// 
			// PropertiesExit
			// 
			this->PropertiesExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PropertiesExit.Image")));
			this->PropertiesExit->Location = System::Drawing::Point(375, 2);
			this->PropertiesExit->Name = L"PropertiesExit";
			this->PropertiesExit->Size = System::Drawing::Size(58, 58);
			this->PropertiesExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PropertiesExit->TabIndex = 1;
			this->PropertiesExit->TabStop = false;
			this->PropertiesExit->Visible = false;
			// 
			// CellPropertiesLabel
			// 
			this->CellPropertiesLabel->AutoSize = true;
			this->CellPropertiesLabel->BackColor = System::Drawing::Color::Transparent;
			this->CellPropertiesLabel->Location = System::Drawing::Point(3, 15);
			this->CellPropertiesLabel->Name = L"CellPropertiesLabel";
			this->CellPropertiesLabel->Size = System::Drawing::Size(220, 32);
			this->CellPropertiesLabel->TabIndex = 0;
			this->CellPropertiesLabel->Text = L"Node Properties";
			// 
			// ViewerPanel
			// 
			this->ViewerPanel->AutoScroll = true;
			this->ViewerPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ViewerPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ViewerPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ViewerPanel->Controls->Add(this->PositionalReadOut);
			this->ViewerPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ViewerPanel->Location = System::Drawing::Point(460, 114);
			this->ViewerPanel->Name = L"ViewerPanel";
			this->ViewerPanel->Size = System::Drawing::Size(1656, 990);
			this->ViewerPanel->TabIndex = 3;
			// 
			// PositionalReadOut
			// 
			this->PositionalReadOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->PositionalReadOut->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PositionalReadOut->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PositionalReadOut->ForeColor = System::Drawing::SystemColors::Control;
			this->PositionalReadOut->Location = System::Drawing::Point(0, 0);
			this->PositionalReadOut->Multiline = true;
			this->PositionalReadOut->Name = L"PositionalReadOut";
			this->PositionalReadOut->ReadOnly = true;
			this->PositionalReadOut->Size = System::Drawing::Size(1654, 988);
			this->PositionalReadOut->TabIndex = 0;
			// 
			// Logo
			// 
			this->Logo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(3, 2);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(58, 58);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 0;
			this->Logo->TabStop = false;
			// 
			// ApplicationLabel
			// 
			this->ApplicationLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->ApplicationLabel->AutoSize = true;
			this->ApplicationLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->ApplicationLabel->Location = System::Drawing::Point(67, 15);
			this->ApplicationLabel->Name = L"ApplicationLabel";
			this->ApplicationLabel->Size = System::Drawing::Size(167, 32);
			this->ApplicationLabel->TabIndex = 1;
			this->ApplicationLabel->Text = L"Hephaestus";
			// 
			// ExitButtonImage
			// 
			this->ExitButtonImage->Dock = System::Windows::Forms::DockStyle::Right;
			this->ExitButtonImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitButtonImage.Image")));
			this->ExitButtonImage->Location = System::Drawing::Point(2043, 0);
			this->ExitButtonImage->Name = L"ExitButtonImage";
			this->ExitButtonImage->Size = System::Drawing::Size(85, 62);
			this->ExitButtonImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ExitButtonImage->TabIndex = 2;
			this->ExitButtonImage->TabStop = false;
			this->ExitButtonImage->Click += gcnew System::EventHandler(this, &GUI::ExitButtonImage_Click);
			this->ExitButtonImage->MouseLeave += gcnew System::EventHandler(this, &GUI::ExitButtonImage_Hoveroff);
			this->ExitButtonImage->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GUI::ExitButtonImage_Hover);
			// 
			// SizeButtonImage
			// 
			this->SizeButtonImage->Dock = System::Windows::Forms::DockStyle::Right;
			this->SizeButtonImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SizeButtonImage.Image")));
			this->SizeButtonImage->Location = System::Drawing::Point(1958, 0);
			this->SizeButtonImage->Name = L"SizeButtonImage";
			this->SizeButtonImage->Size = System::Drawing::Size(85, 62);
			this->SizeButtonImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->SizeButtonImage->TabIndex = 3;
			this->SizeButtonImage->TabStop = false;
			this->SizeButtonImage->Visible = false;
			this->SizeButtonImage->Click += gcnew System::EventHandler(this, &GUI::SizeButtonImage_Click);
			this->SizeButtonImage->MouseLeave += gcnew System::EventHandler(this, &GUI::SizeButtonImage_Hoveroff);
			this->SizeButtonImage->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GUI::SizeButtonImage_Hover);
			// 
			// MinimizeButtonImage
			// 
			this->MinimizeButtonImage->Dock = System::Windows::Forms::DockStyle::Right;
			this->MinimizeButtonImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MinimizeButtonImage.Image")));
			this->MinimizeButtonImage->Location = System::Drawing::Point(1873, 0);
			this->MinimizeButtonImage->Name = L"MinimizeButtonImage";
			this->MinimizeButtonImage->Size = System::Drawing::Size(85, 62);
			this->MinimizeButtonImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->MinimizeButtonImage->TabIndex = 4;
			this->MinimizeButtonImage->TabStop = false;
			this->MinimizeButtonImage->Click += gcnew System::EventHandler(this, &GUI::MinimizeButtonImage_Click);
			this->MinimizeButtonImage->MouseLeave += gcnew System::EventHandler(this, &GUI::MinimizeButtonImage_Hoveroff);
			this->MinimizeButtonImage->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GUI::MinimizeButtonImage_Hover);
			// 
			// TitleBar
			// 
			this->TitleBar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->TitleBar->BackColor = System::Drawing::Color::Transparent;
			this->TitleBar->Controls->Add(this->MinimizeButtonImage);
			this->TitleBar->Controls->Add(this->SizeButtonImage);
			this->TitleBar->Controls->Add(this->ExitButtonImage);
			this->TitleBar->Controls->Add(this->ApplicationLabel);
			this->TitleBar->Controls->Add(this->Logo);
			this->TitleBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->TitleBar->Location = System::Drawing::Point(0, 0);
			this->TitleBar->Name = L"TitleBar";
			this->TitleBar->Size = System::Drawing::Size(2128, 62);
			this->TitleBar->TabIndex = 2;
			this->TitleBar->Click += gcnew System::EventHandler(this, &GUI::TitleBar_Click);
			this->TitleBar->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &GUI::TitleBar_DoubleClick);
			// 
			// ToolMenu
			// 
			this->ToolMenu->Controls->Add(this->ViewButton);
			this->ToolMenu->Controls->Add(this->ObjectInformationLabel);
			this->ToolMenu->Controls->Add(this->HelpButton);
			this->ToolMenu->Controls->Add(this->FileButton);
			this->ToolMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->ToolMenu->Location = System::Drawing::Point(0, 62);
			this->ToolMenu->Name = L"ToolMenu";
			this->ToolMenu->Size = System::Drawing::Size(2128, 52);
			this->ToolMenu->TabIndex = 4;
			// 
			// ViewButton
			// 
			this->ViewButton->AutoSize = true;
			this->ViewButton->ForeColor = System::Drawing::SystemColors::Control;
			this->ViewButton->Location = System::Drawing::Point(80, 10);
			this->ViewButton->Name = L"ViewButton";
			this->ViewButton->Size = System::Drawing::Size(77, 32);
			this->ViewButton->TabIndex = 3;
			this->ViewButton->Text = L"View";
			this->ViewButton->Visible = false;
			// 
			// ObjectInformationLabel
			// 
			this->ObjectInformationLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ObjectInformationLabel->AutoSize = true;
			this->ObjectInformationLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->ObjectInformationLabel->Location = System::Drawing::Point(1670, 10);
			this->ObjectInformationLabel->Name = L"ObjectInformationLabel";
			this->ObjectInformationLabel->Size = System::Drawing::Size(446, 32);
			this->ObjectInformationLabel->TabIndex = 2;
			this->ObjectInformationLabel->Text = L"v1.00 | Nodes:0 | Mem:0M | Object";
			this->ObjectInformationLabel->Visible = false;
			// 
			// HelpButton
			// 
			this->HelpButton->AutoSize = true;
			this->HelpButton->ForeColor = System::Drawing::SystemColors::Control;
			this->HelpButton->Location = System::Drawing::Point(163, 10);
			this->HelpButton->Name = L"HelpButton";
			this->HelpButton->Size = System::Drawing::Size(74, 32);
			this->HelpButton->TabIndex = 1;
			this->HelpButton->Text = L"Help";
			this->HelpButton->Visible = false;
			// 
			// FileButton
			// 
			this->FileButton->AutoSize = true;
			this->FileButton->ForeColor = System::Drawing::SystemColors::Control;
			this->FileButton->Location = System::Drawing::Point(12, 10);
			this->FileButton->Name = L"FileButton";
			this->FileButton->Size = System::Drawing::Size(62, 32);
			this->FileButton->TabIndex = 0;
			this->FileButton->Text = L"File";
			this->FileButton->Visible = false;
			// 
			// BottomSeperator
			// 
			this->BottomSeperator->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->BottomSeperator->Location = System::Drawing::Point(0, 1104);
			this->BottomSeperator->Name = L"BottomSeperator";
			this->BottomSeperator->Size = System::Drawing::Size(2128, 12);
			this->BottomSeperator->TabIndex = 5;
			// 
			// LeftSeperator
			// 
			this->LeftSeperator->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->LeftSeperator->Dock = System::Windows::Forms::DockStyle::Left;
			this->LeftSeperator->ForeColor = System::Drawing::SystemColors::Control;
			this->LeftSeperator->Location = System::Drawing::Point(0, 114);
			this->LeftSeperator->Name = L"LeftSeperator";
			this->LeftSeperator->Size = System::Drawing::Size(12, 990);
			this->LeftSeperator->TabIndex = 6;
			// 
			// RightSeperator
			// 
			this->RightSeperator->Dock = System::Windows::Forms::DockStyle::Right;
			this->RightSeperator->Location = System::Drawing::Point(2116, 114);
			this->RightSeperator->Name = L"RightSeperator";
			this->RightSeperator->Size = System::Drawing::Size(12, 990);
			this->RightSeperator->TabIndex = 7;
			// 
			// PanelSeperator
			// 
			this->PanelSeperator->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelSeperator->Location = System::Drawing::Point(448, 114);
			this->PanelSeperator->Name = L"PanelSeperator";
			this->PanelSeperator->Size = System::Drawing::Size(12, 990);
			this->PanelSeperator->TabIndex = 8;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"obj";
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(2128, 1116);
			this->Controls->Add(this->ViewerPanel);
			this->Controls->Add(this->PanelSeperator);
			this->Controls->Add(this->PropertiesPanel);
			this->Controls->Add(this->LeftSeperator);
			this->Controls->Add(this->RightSeperator);
			this->Controls->Add(this->BottomSeperator);
			this->Controls->Add(this->ToolMenu);
			this->Controls->Add(this->TitleBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GUI";
			this->Text = L"Hephaestus";
			this->PropertiesPanel->ResumeLayout(false);
			this->PropertiesPanel->PerformLayout();
			this->TargetPanel->ResumeLayout(false);
			this->TargetPanel->PerformLayout();
			this->SeedPanel->ResumeLayout(false);
			this->SeedPanel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NodeSpacingInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShearTensileSlider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StrainLimitInput))->EndInit();
			this->PropertiesBar->ResumeLayout(false);
			this->PropertiesBar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PropertiesExit))->EndInit();
			this->ViewerPanel->ResumeLayout(false);
			this->ViewerPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExitButtonImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeButtonImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinimizeButtonImage))->EndInit();
			this->TitleBar->ResumeLayout(false);
			this->TitleBar->PerformLayout();
			this->ToolMenu->ResumeLayout(false);
			this->ToolMenu->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitButtonImage_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ExitButtonImage_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void ExitButtonImage_Hoveroff(System::Object^  sender, System::EventArgs^  e);
	private: System::Void SizeButtonImage_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void SizeButtonImage_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void SizeButtonImage_Hoveroff(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MinimizeButtonImage_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MinimizeButtonImage_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void MinimizeButtonImage_Hoveroff(System::Object^  sender, System::EventArgs^  e);
	private: System::Void TitleBar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TitleBar_DoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void MaterialList_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MaterialInput_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ObstacleFileInput_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void SimulateButton_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
