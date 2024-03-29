#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

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

			//load config file
			//////////////////////////////////////////////
			std::ifstream config;

			//declare variables
			std::string oneLine;

			//Open config file
			config.open(L"Config.cfg");

			//Loop through each line in file
			while (std::getline(config, oneLine))
			{
				//Find show again config
				if (oneLine.find("show again =") != std::string::npos)
				{
					//grab setting
					size_t index = oneLine.find_last_of(" ");
					std::string last;
					bool show;
					if (index != std::string::npos) 
					{
						std::istringstream(oneLine.substr(index + 1, oneLine.length())) >> std::boolalpha >> show;
						InstructionsShowAgainCheckbox->Checked = !show;
						InstructionsPanel->Visible = show;
					}
				}
			}

			//Close file
			config.close();
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
	private: 
		System::Windows::Forms::Panel^  PropertiesPanel;
		System::Windows::Forms::Panel^  PropertiesBar;
	private: System::Windows::Forms::Label^  GrowthScenarioLabel;

		System::Windows::Forms::Panel^  ViewerPanel;
		System::Windows::Forms::PictureBox^  Logo;
		System::Windows::Forms::Label^  ApplicationLabel;
		System::Windows::Forms::PictureBox^  ExitButtonImage;
		System::Windows::Forms::PictureBox^  SizeButtonImage;
		System::Windows::Forms::PictureBox^  MinimizeButtonImage;
		System::Windows::Forms::Panel^  TitleBar;
		System::Windows::Forms::Panel^  ToolMenu;
		System::Windows::Forms::Label^  ObjectInformationLabel;
		System::Windows::Forms::Label^  HelpButton;
		System::Windows::Forms::Label^  FileButton;
		System::Windows::Forms::Label^  ViewButton;
		System::Windows::Forms::Panel^  BottomSeperator;
		System::Windows::Forms::Panel^  LeftSeperator;
		System::Windows::Forms::Panel^  RightSeperator;
		System::Windows::Forms::Panel^  PanelSeperator;



		System::Windows::Forms::Label^  ShearTensileLabel;
		System::Windows::Forms::Label^  NodeSpacingLabel;
		System::Windows::Forms::Label^  StrainLabel;
		System::Windows::Forms::TrackBar^  ShearTensileSlider;
		System::Windows::Forms::SaveFileDialog^  saveFileDialog1;


		System::Windows::Forms::NumericUpDown^  NodeSpacingInput;
		System::Windows::Forms::NumericUpDown^  StrainLimitInput;
		System::Windows::Forms::Label^  GravityLabel;
		System::Windows::Forms::TextBox^  GravityInput;

		System::Windows::Forms::TextBox^  PositionalReadOut;












		System::Windows::Forms::Panel^  PropertiesTopSeperator;
		System::Windows::Forms::Panel^  PropertiesRightSeperator;
		System::Windows::Forms::Panel^  PropertiesLeftSeperator;


		System::Windows::Forms::OpenFileDialog^  openFileDialog1;














		System::Windows::Forms::Panel^  InstructionsPanel;
		System::Windows::Forms::Button^  InstructionsButton;
		System::Windows::Forms::Label^  InstructionsLabel;
		System::Windows::Forms::CheckBox^  InstructionsShowAgainCheckbox;
		System::Windows::Forms::Panel^  panel_options;
private: System::Windows::Forms::Button^  buttonAddVector;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::TextBox^  MaterialElasticityInput;

private: System::Windows::Forms::Label^  label_Elasticity;
private: System::Windows::Forms::TextBox^  YieldStrengthInput;




private: System::Windows::Forms::Label^  label_Yield;
private: System::Windows::Forms::TextBox^  MaterialDensityInput;


private: System::Windows::Forms::Label^  label_Density;
private: System::Windows::Forms::DomainUpDown^  MaterialList;


private: System::Windows::Forms::Label^  label_Material;

private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Label^  LabelProperties;
private: System::Windows::Forms::TreeView^  treeView_Objects;


private: System::Windows::Forms::Button^  SimulateButton;
private: System::Windows::Forms::Panel^  PropertiesSeperator;
private: System::Windows::Forms::Panel^  TargetPanel;

private: System::Windows::Forms::TextBox^  TargetZInput;

private: System::Windows::Forms::Label^  TargetZLabel;

private: System::Windows::Forms::TextBox^  TargetYInput;

private: System::Windows::Forms::Label^  TargetYLabel;
private: System::Windows::Forms::TextBox^  TargetXInput;
private: System::Windows::Forms::Label^  TargetXLabel;
private: System::Windows::Forms::Label^  TargetNodeLabel;
private: System::Windows::Forms::Panel^  SeedPanel;
private: System::Windows::Forms::TextBox^  SeedZInput;
private: System::Windows::Forms::Label^  SeedZLabel;
private: System::Windows::Forms::TextBox^  SeedYInput;
private: System::Windows::Forms::Label^  SeedYLabel;
private: System::Windows::Forms::TextBox^  SeedXInput;
private: System::Windows::Forms::Label^  SeedXLabel;
private: System::Windows::Forms::Label^  SeedNodeLabel;

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
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Object"));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->PropertiesPanel = (gcnew System::Windows::Forms::Panel());
			this->SimulateButton = (gcnew System::Windows::Forms::Button());
			this->PropertiesSeperator = (gcnew System::Windows::Forms::Panel());
			this->GravityInput = (gcnew System::Windows::Forms::TextBox());
			this->GravityLabel = (gcnew System::Windows::Forms::Label());
			this->NodeSpacingInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->NodeSpacingLabel = (gcnew System::Windows::Forms::Label());
			this->ShearTensileSlider = (gcnew System::Windows::Forms::TrackBar());
			this->ShearTensileLabel = (gcnew System::Windows::Forms::Label());
			this->StrainLimitInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->StrainLabel = (gcnew System::Windows::Forms::Label());
			this->PropertiesLeftSeperator = (gcnew System::Windows::Forms::Panel());
			this->PropertiesRightSeperator = (gcnew System::Windows::Forms::Panel());
			this->PropertiesTopSeperator = (gcnew System::Windows::Forms::Panel());
			this->PropertiesBar = (gcnew System::Windows::Forms::Panel());
			this->GrowthScenarioLabel = (gcnew System::Windows::Forms::Label());
			this->ViewerPanel = (gcnew System::Windows::Forms::Panel());
			this->PositionalReadOut = (gcnew System::Windows::Forms::TextBox());
			this->panel_options = (gcnew System::Windows::Forms::Panel());
			this->buttonAddVector = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
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
			this->MaterialElasticityInput = (gcnew System::Windows::Forms::TextBox());
			this->label_Elasticity = (gcnew System::Windows::Forms::Label());
			this->YieldStrengthInput = (gcnew System::Windows::Forms::TextBox());
			this->label_Yield = (gcnew System::Windows::Forms::Label());
			this->MaterialDensityInput = (gcnew System::Windows::Forms::TextBox());
			this->label_Density = (gcnew System::Windows::Forms::Label());
			this->MaterialList = (gcnew System::Windows::Forms::DomainUpDown());
			this->label_Material = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->LabelProperties = (gcnew System::Windows::Forms::Label());
			this->treeView_Objects = (gcnew System::Windows::Forms::TreeView());
			this->InstructionsPanel = (gcnew System::Windows::Forms::Panel());
			this->InstructionsLabel = (gcnew System::Windows::Forms::Label());
			this->InstructionsButton = (gcnew System::Windows::Forms::Button());
			this->InstructionsShowAgainCheckbox = (gcnew System::Windows::Forms::CheckBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NodeSpacingInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShearTensileSlider))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StrainLimitInput))->BeginInit();
			this->PropertiesBar->SuspendLayout();
			this->ViewerPanel->SuspendLayout();
			this->panel_options->SuspendLayout();
			this->TargetPanel->SuspendLayout();
			this->SeedPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->InstructionsPanel->SuspendLayout();
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
			this->PropertiesPanel->Controls->Add(this->SimulateButton);
			this->PropertiesPanel->Controls->Add(this->PropertiesSeperator);
			this->PropertiesPanel->Controls->Add(this->GravityInput);
			this->PropertiesPanel->Controls->Add(this->GravityLabel);
			this->PropertiesPanel->Controls->Add(this->NodeSpacingInput);
			this->PropertiesPanel->Controls->Add(this->NodeSpacingLabel);
			this->PropertiesPanel->Controls->Add(this->ShearTensileSlider);
			this->PropertiesPanel->Controls->Add(this->ShearTensileLabel);
			this->PropertiesPanel->Controls->Add(this->StrainLimitInput);
			this->PropertiesPanel->Controls->Add(this->StrainLabel);
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
			// SimulateButton
			// 
			this->SimulateButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->SimulateButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->SimulateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SimulateButton->ForeColor = System::Drawing::SystemColors::Control;
			this->SimulateButton->Location = System::Drawing::Point(12, 385);
			this->SimulateButton->Name = L"SimulateButton";
			this->SimulateButton->Size = System::Drawing::Size(410, 43);
			this->SimulateButton->TabIndex = 36;
			this->SimulateButton->Text = L"Simulate";
			this->SimulateButton->UseVisualStyleBackColor = false;
			// 
			// PropertiesSeperator
			// 
			this->PropertiesSeperator->Dock = System::Windows::Forms::DockStyle::Top;
			this->PropertiesSeperator->Location = System::Drawing::Point(12, 373);
			this->PropertiesSeperator->Name = L"PropertiesSeperator";
			this->PropertiesSeperator->Size = System::Drawing::Size(410, 12);
			this->PropertiesSeperator->TabIndex = 37;
			// 
			// GravityInput
			// 
			this->GravityInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->GravityInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->GravityInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->GravityInput->ForeColor = System::Drawing::SystemColors::Control;
			this->GravityInput->Location = System::Drawing::Point(12, 335);
			this->GravityInput->Name = L"GravityInput";
			this->GravityInput->Size = System::Drawing::Size(410, 38);
			this->GravityInput->TabIndex = 13;
			this->GravityInput->Text = L"9.82";
			this->GravityInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// GravityLabel
			// 
			this->GravityLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->GravityLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->GravityLabel->Location = System::Drawing::Point(12, 303);
			this->GravityLabel->Name = L"GravityLabel";
			this->GravityLabel->Size = System::Drawing::Size(410, 32);
			this->GravityLabel->TabIndex = 14;
			this->GravityLabel->Text = L"Gravity (m/s^2)";
			this->GravityLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// NodeSpacingInput
			// 
			this->NodeSpacingInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->NodeSpacingInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NodeSpacingInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->NodeSpacingInput->ForeColor = System::Drawing::SystemColors::Control;
			this->NodeSpacingInput->Location = System::Drawing::Point(12, 265);
			this->NodeSpacingInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NodeSpacingInput->Name = L"NodeSpacingInput";
			this->NodeSpacingInput->Size = System::Drawing::Size(410, 38);
			this->NodeSpacingInput->TabIndex = 9;
			this->NodeSpacingInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->NodeSpacingInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// NodeSpacingLabel
			// 
			this->NodeSpacingLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->NodeSpacingLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->NodeSpacingLabel->Location = System::Drawing::Point(12, 233);
			this->NodeSpacingLabel->Name = L"NodeSpacingLabel";
			this->NodeSpacingLabel->Size = System::Drawing::Size(410, 32);
			this->NodeSpacingLabel->TabIndex = 5;
			this->NodeSpacingLabel->Text = L"Node Spacing (* .1mm)";
			this->NodeSpacingLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ShearTensileSlider
			// 
			this->ShearTensileSlider->AutoSize = false;
			this->ShearTensileSlider->Dock = System::Windows::Forms::DockStyle::Top;
			this->ShearTensileSlider->Location = System::Drawing::Point(12, 176);
			this->ShearTensileSlider->Maximum = 100;
			this->ShearTensileSlider->Name = L"ShearTensileSlider";
			this->ShearTensileSlider->Size = System::Drawing::Size(410, 57);
			this->ShearTensileSlider->TabIndex = 7;
			this->ShearTensileSlider->TickStyle = System::Windows::Forms::TickStyle::None;
			this->ShearTensileSlider->Value = 50;
			this->ShearTensileSlider->Visible = false;
			// 
			// ShearTensileLabel
			// 
			this->ShearTensileLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ShearTensileLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->ShearTensileLabel->Location = System::Drawing::Point(12, 144);
			this->ShearTensileLabel->Name = L"ShearTensileLabel";
			this->ShearTensileLabel->Size = System::Drawing::Size(410, 32);
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
			this->StrainLimitInput->Location = System::Drawing::Point(12, 106);
			this->StrainLimitInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->StrainLimitInput->Name = L"StrainLimitInput";
			this->StrainLimitInput->Size = System::Drawing::Size(410, 38);
			this->StrainLimitInput->TabIndex = 8;
			this->StrainLimitInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->StrainLimitInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// StrainLabel
			// 
			this->StrainLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->StrainLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->StrainLabel->Location = System::Drawing::Point(12, 74);
			this->StrainLabel->Name = L"StrainLabel";
			this->StrainLabel->Size = System::Drawing::Size(410, 32);
			this->StrainLabel->TabIndex = 4;
			this->StrainLabel->Text = L"Strain Limit";
			this->StrainLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// PropertiesLeftSeperator
			// 
			this->PropertiesLeftSeperator->Dock = System::Windows::Forms::DockStyle::Left;
			this->PropertiesLeftSeperator->Location = System::Drawing::Point(0, 74);
			this->PropertiesLeftSeperator->Name = L"PropertiesLeftSeperator";
			this->PropertiesLeftSeperator->Size = System::Drawing::Size(12, 914);
			this->PropertiesLeftSeperator->TabIndex = 19;
			// 
			// PropertiesRightSeperator
			// 
			this->PropertiesRightSeperator->Dock = System::Windows::Forms::DockStyle::Right;
			this->PropertiesRightSeperator->Location = System::Drawing::Point(422, 74);
			this->PropertiesRightSeperator->Name = L"PropertiesRightSeperator";
			this->PropertiesRightSeperator->Size = System::Drawing::Size(12, 914);
			this->PropertiesRightSeperator->TabIndex = 20;
			// 
			// PropertiesTopSeperator
			// 
			this->PropertiesTopSeperator->Dock = System::Windows::Forms::DockStyle::Top;
			this->PropertiesTopSeperator->Location = System::Drawing::Point(0, 62);
			this->PropertiesTopSeperator->Name = L"PropertiesTopSeperator";
			this->PropertiesTopSeperator->Size = System::Drawing::Size(434, 12);
			this->PropertiesTopSeperator->TabIndex = 18;
			// 
			// PropertiesBar
			// 
			this->PropertiesBar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PropertiesBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->PropertiesBar->Controls->Add(this->GrowthScenarioLabel);
			this->PropertiesBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->PropertiesBar->ForeColor = System::Drawing::SystemColors::Control;
			this->PropertiesBar->Location = System::Drawing::Point(0, 0);
			this->PropertiesBar->Name = L"PropertiesBar";
			this->PropertiesBar->Size = System::Drawing::Size(434, 62);
			this->PropertiesBar->TabIndex = 0;
			// 
			// GrowthScenarioLabel
			// 
			this->GrowthScenarioLabel->AutoSize = true;
			this->GrowthScenarioLabel->BackColor = System::Drawing::Color::Transparent;
			this->GrowthScenarioLabel->Location = System::Drawing::Point(3, 15);
			this->GrowthScenarioLabel->Name = L"GrowthScenarioLabel";
			this->GrowthScenarioLabel->Size = System::Drawing::Size(226, 32);
			this->GrowthScenarioLabel->TabIndex = 0;
			this->GrowthScenarioLabel->Text = L"Growth Scenario";
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
			// panel_options
			// 
			this->panel_options->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->panel_options->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_options->Controls->Add(this->buttonAddVector);
			this->panel_options->Controls->Add(this->panel3);
			this->panel_options->Controls->Add(this->TargetPanel);
			this->panel_options->Controls->Add(this->TargetNodeLabel);
			this->panel_options->Controls->Add(this->SeedPanel);
			this->panel_options->Controls->Add(this->SeedNodeLabel);
			this->panel_options->Controls->Add(this->MaterialElasticityInput);
			this->panel_options->Controls->Add(this->label_Elasticity);
			this->panel_options->Controls->Add(this->YieldStrengthInput);
			this->panel_options->Controls->Add(this->label_Yield);
			this->panel_options->Controls->Add(this->MaterialDensityInput);
			this->panel_options->Controls->Add(this->label_Density);
			this->panel_options->Controls->Add(this->MaterialList);
			this->panel_options->Controls->Add(this->label_Material);
			this->panel_options->Controls->Add(this->panel4);
			this->panel_options->Controls->Add(this->panel5);
			this->panel_options->Controls->Add(this->panel6);
			this->panel_options->Controls->Add(this->panel2);
			this->panel_options->Controls->Add(this->treeView_Objects);
			this->panel_options->Location = System::Drawing::Point(1745, 114);
			this->panel_options->Name = L"panel_options";
			this->panel_options->Size = System::Drawing::Size(371, 989);
			this->panel_options->TabIndex = 1;
			// 
			// buttonAddVector
			// 
			this->buttonAddVector->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->buttonAddVector->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonAddVector->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddVector->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonAddVector->Location = System::Drawing::Point(12, 719);
			this->buttonAddVector->Name = L"buttonAddVector";
			this->buttonAddVector->Size = System::Drawing::Size(343, 43);
			this->buttonAddVector->TabIndex = 40;
			this->buttonAddVector->Text = L"Add Growth Vector";
			this->buttonAddVector->UseVisualStyleBackColor = false;
			this->buttonAddVector->Click += gcnew System::EventHandler(this, &GUI::buttonAddVector_Click);
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(12, 707);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(343, 12);
			this->panel3->TabIndex = 44;
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
			this->TargetPanel->Location = System::Drawing::Point(12, 669);
			this->TargetPanel->Name = L"TargetPanel";
			this->TargetPanel->Size = System::Drawing::Size(343, 38);
			this->TargetPanel->TabIndex = 50;
			this->TargetPanel->Visible = false;
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
			this->TargetZInput->Visible = false;
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
			this->TargetZLabel->Visible = false;
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
			this->TargetYInput->Visible = false;
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
			this->TargetYLabel->Visible = false;
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
			this->TargetXInput->Visible = false;
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
			this->TargetXLabel->Visible = false;
			// 
			// TargetNodeLabel
			// 
			this->TargetNodeLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->TargetNodeLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->TargetNodeLabel->Location = System::Drawing::Point(12, 637);
			this->TargetNodeLabel->Name = L"TargetNodeLabel";
			this->TargetNodeLabel->Size = System::Drawing::Size(343, 32);
			this->TargetNodeLabel->TabIndex = 48;
			this->TargetNodeLabel->Text = L"Target Node";
			this->TargetNodeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->TargetNodeLabel->Visible = false;
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
			this->SeedPanel->Location = System::Drawing::Point(12, 599);
			this->SeedPanel->Name = L"SeedPanel";
			this->SeedPanel->Size = System::Drawing::Size(343, 38);
			this->SeedPanel->TabIndex = 49;
			this->SeedPanel->Visible = false;
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
			this->SeedZInput->Visible = false;
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
			this->SeedZLabel->Visible = false;
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
			this->SeedYInput->Visible = false;
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
			this->SeedYLabel->Visible = false;
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
			this->SeedXInput->Visible = false;
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
			this->SeedXLabel->Visible = false;
			// 
			// SeedNodeLabel
			// 
			this->SeedNodeLabel->Dock = System::Windows::Forms::DockStyle::Top;
			this->SeedNodeLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->SeedNodeLabel->Location = System::Drawing::Point(12, 567);
			this->SeedNodeLabel->Name = L"SeedNodeLabel";
			this->SeedNodeLabel->Size = System::Drawing::Size(343, 32);
			this->SeedNodeLabel->TabIndex = 47;
			this->SeedNodeLabel->Text = L"Seed Node";
			this->SeedNodeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->SeedNodeLabel->Visible = false;
			// 
			// MaterialElasticityInput
			// 
			this->MaterialElasticityInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->MaterialElasticityInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MaterialElasticityInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->MaterialElasticityInput->ForeColor = System::Drawing::SystemColors::Control;
			this->MaterialElasticityInput->Location = System::Drawing::Point(12, 529);
			this->MaterialElasticityInput->Name = L"MaterialElasticityInput";
			this->MaterialElasticityInput->Size = System::Drawing::Size(343, 38);
			this->MaterialElasticityInput->TabIndex = 37;
			this->MaterialElasticityInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MaterialElasticityInput->TextChanged += gcnew System::EventHandler(this, &GUI::MaterialInput_TextChanged);
			// 
			// label_Elasticity
			// 
			this->label_Elasticity->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_Elasticity->ForeColor = System::Drawing::SystemColors::Control;
			this->label_Elasticity->Location = System::Drawing::Point(12, 497);
			this->label_Elasticity->Name = L"label_Elasticity";
			this->label_Elasticity->Size = System::Drawing::Size(343, 32);
			this->label_Elasticity->TabIndex = 35;
			this->label_Elasticity->Text = L"Material Elasticity";
			this->label_Elasticity->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// YieldStrengthInput
			// 
			this->YieldStrengthInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->YieldStrengthInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->YieldStrengthInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->YieldStrengthInput->ForeColor = System::Drawing::SystemColors::Control;
			this->YieldStrengthInput->Location = System::Drawing::Point(12, 459);
			this->YieldStrengthInput->Name = L"YieldStrengthInput";
			this->YieldStrengthInput->Size = System::Drawing::Size(343, 38);
			this->YieldStrengthInput->TabIndex = 38;
			this->YieldStrengthInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->YieldStrengthInput->TextChanged += gcnew System::EventHandler(this, &GUI::MaterialInput_TextChanged);
			// 
			// label_Yield
			// 
			this->label_Yield->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_Yield->ForeColor = System::Drawing::SystemColors::Control;
			this->label_Yield->Location = System::Drawing::Point(12, 427);
			this->label_Yield->Name = L"label_Yield";
			this->label_Yield->Size = System::Drawing::Size(343, 32);
			this->label_Yield->TabIndex = 34;
			this->label_Yield->Text = L"Material Yield Strength";
			this->label_Yield->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MaterialDensityInput
			// 
			this->MaterialDensityInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->MaterialDensityInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MaterialDensityInput->Dock = System::Windows::Forms::DockStyle::Top;
			this->MaterialDensityInput->ForeColor = System::Drawing::SystemColors::Control;
			this->MaterialDensityInput->Location = System::Drawing::Point(12, 389);
			this->MaterialDensityInput->Name = L"MaterialDensityInput";
			this->MaterialDensityInput->Size = System::Drawing::Size(343, 38);
			this->MaterialDensityInput->TabIndex = 46;
			this->MaterialDensityInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MaterialDensityInput->TextChanged += gcnew System::EventHandler(this, &GUI::MaterialInput_TextChanged);
			// 
			// label_Density
			// 
			this->label_Density->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_Density->ForeColor = System::Drawing::SystemColors::Control;
			this->label_Density->Location = System::Drawing::Point(12, 357);
			this->label_Density->Name = L"label_Density";
			this->label_Density->Size = System::Drawing::Size(343, 32);
			this->label_Density->TabIndex = 45;
			this->label_Density->Text = L"Material Density";
			this->label_Density->TextAlign = System::Drawing::ContentAlignment::TopCenter;
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
			this->MaterialList->Location = System::Drawing::Point(12, 319);
			this->MaterialList->Name = L"MaterialList";
			this->MaterialList->ReadOnly = true;
			this->MaterialList->Size = System::Drawing::Size(343, 38);
			this->MaterialList->TabIndex = 39;
			this->MaterialList->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MaterialList->TextChanged += gcnew System::EventHandler(this, &GUI::MaterialList_TextChanged);
			// 
			// label_Material
			// 
			this->label_Material->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_Material->ForeColor = System::Drawing::SystemColors::Control;
			this->label_Material->Location = System::Drawing::Point(12, 287);
			this->label_Material->Name = L"label_Material";
			this->label_Material->Size = System::Drawing::Size(343, 32);
			this->label_Material->TabIndex = 36;
			this->label_Material->Text = L"Material";
			this->label_Material->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel4
			// 
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 287);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(12, 698);
			this->panel4->TabIndex = 42;
			// 
			// panel5
			// 
			this->panel5->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel5->Location = System::Drawing::Point(355, 287);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(12, 698);
			this->panel5->TabIndex = 43;
			// 
			// panel6
			// 
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 275);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(367, 12);
			this->panel6->TabIndex = 41;
			// 
			// panel2
			// 
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel2->Controls->Add(this->LabelProperties);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->ForeColor = System::Drawing::SystemColors::Control;
			this->panel2->Location = System::Drawing::Point(0, 213);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(367, 62);
			this->panel2->TabIndex = 1;
			// 
			// LabelProperties
			// 
			this->LabelProperties->AutoSize = true;
			this->LabelProperties->BackColor = System::Drawing::Color::Transparent;
			this->LabelProperties->Location = System::Drawing::Point(3, 15);
			this->LabelProperties->Name = L"LabelProperties";
			this->LabelProperties->Size = System::Drawing::Size(220, 32);
			this->LabelProperties->TabIndex = 0;
			this->LabelProperties->Text = L"Node Properties";
			// 
			// treeView_Objects
			// 
			this->treeView_Objects->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->treeView_Objects->Dock = System::Windows::Forms::DockStyle::Top;
			this->treeView_Objects->ForeColor = System::Drawing::SystemColors::Control;
			this->treeView_Objects->LabelEdit = true;
			this->treeView_Objects->Location = System::Drawing::Point(0, 0);
			this->treeView_Objects->Name = L"treeView_Objects";
			treeNode1->Name = L"Object";
			treeNode1->Text = L"Object";
			this->treeView_Objects->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 });
			this->treeView_Objects->Size = System::Drawing::Size(367, 213);
			this->treeView_Objects->TabIndex = 0;
			this->treeView_Objects->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &GUI::ObjectSelect);
			// 
			// InstructionsPanel
			// 
			this->InstructionsPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->InstructionsPanel->Controls->Add(this->InstructionsLabel);
			this->InstructionsPanel->Controls->Add(this->InstructionsButton);
			this->InstructionsPanel->Controls->Add(this->InstructionsShowAgainCheckbox);
			this->InstructionsPanel->Location = System::Drawing::Point(573, 229);
			this->InstructionsPanel->Name = L"InstructionsPanel";
			this->InstructionsPanel->Size = System::Drawing::Size(982, 650);
			this->InstructionsPanel->TabIndex = 5;
			// 
			// InstructionsLabel
			// 
			this->InstructionsLabel->AutoSize = true;
			this->InstructionsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InstructionsLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->InstructionsLabel->Location = System::Drawing::Point(0, 0);
			this->InstructionsLabel->Name = L"InstructionsLabel";
			this->InstructionsLabel->Size = System::Drawing::Size(975, 576);
			this->InstructionsLabel->TabIndex = 0;
			this->InstructionsLabel->Text = resources->GetString(L"InstructionsLabel.Text");
			// 
			// InstructionsButton
			// 
			this->InstructionsButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->InstructionsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->InstructionsButton->ForeColor = System::Drawing::SystemColors::Control;
			this->InstructionsButton->Location = System::Drawing::Point(893, 610);
			this->InstructionsButton->Name = L"InstructionsButton";
			this->InstructionsButton->Size = System::Drawing::Size(85, 36);
			this->InstructionsButton->TabIndex = 2;
			this->InstructionsButton->Text = L"Ok";
			this->InstructionsButton->UseVisualStyleBackColor = false;
			this->InstructionsButton->Click += gcnew System::EventHandler(this, &GUI::InstructionsButton_Click);
			// 
			// InstructionsShowAgainCheckbox
			// 
			this->InstructionsShowAgainCheckbox->AutoSize = true;
			this->InstructionsShowAgainCheckbox->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->InstructionsShowAgainCheckbox->ForeColor = System::Drawing::SystemColors::Control;
			this->InstructionsShowAgainCheckbox->Location = System::Drawing::Point(0, 610);
			this->InstructionsShowAgainCheckbox->Name = L"InstructionsShowAgainCheckbox";
			this->InstructionsShowAgainCheckbox->Size = System::Drawing::Size(978, 36);
			this->InstructionsShowAgainCheckbox->TabIndex = 1;
			this->InstructionsShowAgainCheckbox->Text = L"Do not show this message again";
			this->InstructionsShowAgainCheckbox->UseVisualStyleBackColor = true;
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
			this->TitleBar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GUI::TitleBar_MouseDown);
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
			// 
			// ObjectInformationLabel
			// 
			this->ObjectInformationLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ObjectInformationLabel->AutoSize = true;
			this->ObjectInformationLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->ObjectInformationLabel->Location = System::Drawing::Point(1646, 10);
			this->ObjectInformationLabel->Name = L"ObjectInformationLabel";
			this->ObjectInformationLabel->Size = System::Drawing::Size(470, 32);
			this->ObjectInformationLabel->TabIndex = 2;
			this->ObjectInformationLabel->Text = L"v1.0.0a | Nodes:0 | Mem:0M | Object";
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
			this->HelpButton->Click += gcnew System::EventHandler(this, &GUI::HelpButton_Click);
			this->HelpButton->MouseLeave += gcnew System::EventHandler(this, &GUI::HelpButton_Hoveroff);
			this->HelpButton->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GUI::HelpButton_Hover);
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
			this->Controls->Add(this->panel_options);
			this->Controls->Add(this->InstructionsPanel);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NodeSpacingInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ShearTensileSlider))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StrainLimitInput))->EndInit();
			this->PropertiesBar->ResumeLayout(false);
			this->PropertiesBar->PerformLayout();
			this->ViewerPanel->ResumeLayout(false);
			this->ViewerPanel->PerformLayout();
			this->panel_options->ResumeLayout(false);
			this->panel_options->PerformLayout();
			this->TargetPanel->ResumeLayout(false);
			this->TargetPanel->PerformLayout();
			this->SeedPanel->ResumeLayout(false);
			this->SeedPanel->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->InstructionsPanel->ResumeLayout(false);
			this->InstructionsPanel->PerformLayout();
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
	private: 
		System::Void ExitButtonImage_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void ExitButtonImage_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void ExitButtonImage_Hoveroff(System::Object^  sender, System::EventArgs^  e);
		System::Void SizeButtonImage_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void SizeButtonImage_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void SizeButtonImage_Hoveroff(System::Object^  sender, System::EventArgs^  e);
		System::Void MinimizeButtonImage_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void MinimizeButtonImage_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void MinimizeButtonImage_Hoveroff(System::Object^  sender, System::EventArgs^  e);
		System::Void MaterialList_TextChanged(System::Object^  sender, System::EventArgs^  e);
		System::Void MaterialInput_TextChanged(System::Object^  sender, System::EventArgs^  e);
		System::Void SimulateButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void HelpButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void HelpButton_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void HelpButton_Hoveroff(System::Object^  sender, System::EventArgs^  e);
		System::Void InstructionsButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void TitleBar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void ObjectSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e);
		System::Void buttonAddVector_Click(System::Object^  sender, System::EventArgs^  e);
};
}