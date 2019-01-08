#include "GUI.h"
#include <iostream>
#include "Generative_Design.h"

//Material Input
System::Void Hephaestus::GUI::MaterialList_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (Hephaestus::GUI::MaterialList->Text == "ABS")
	{ 
		Hephaestus::GUI::MaterialDensityInput->Text = L"1.04";
		Hephaestus::GUI::MaterialElasticityInput->Text = L"2.56";
		Hephaestus::GUI::YieldStrengthInput->Text = L"40";
		Hephaestus::GUI::MaterialList->Text = L"ABS";
	}
	else if (Hephaestus::GUI::MaterialList->Text == "PLA")
	{
		Hephaestus::GUI::MaterialDensityInput->Text = L"1.25";
		Hephaestus::GUI::MaterialElasticityInput->Text = L"3.56";
		Hephaestus::GUI::YieldStrengthInput->Text = L"35.9";
		Hephaestus::GUI::MaterialList->Text = L"PLA";
	}

}
System::Void Hephaestus::GUI::MaterialInput_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	Hephaestus::GUI::MaterialList->ResetText();
}

//Simulate Growth
System::Void Hephaestus::GUI::SimulateButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (Hephaestus::GUI::MaterialDensityInput->Text != "" && 
		Hephaestus::GUI::YieldStrengthInput->Text != "" &&
		Hephaestus::GUI::MaterialElasticityInput->Text != "" &&
		Hephaestus::GUI::StrainLimitInput->Text != "" &&
		Hephaestus::GUI::GravityInput->Text != "" &&
		Hephaestus::GUI::NodeSpacingInput->Text != "" &&
		Hephaestus::GUI::SeedXInput->Text != "" &&
		Hephaestus::GUI::SeedYInput->Text != "" &&
		Hephaestus::GUI::SeedZInput->Text != "" &&
		Hephaestus::GUI::TargetXInput->Text != "" &&
		Hephaestus::GUI::TargetYInput->Text != "" &&
		Hephaestus::GUI::TargetZInput->Text)
	{
		int seedVertex[3] = { int::Parse(Hephaestus::GUI::SeedXInput->Text), int::Parse(Hephaestus::GUI::SeedYInput->Text),  int::Parse(Hephaestus::GUI::SeedZInput->Text) };
		int targetVertex[3] = { int::Parse(Hephaestus::GUI::TargetXInput->Text), int::Parse(Hephaestus::GUI::TargetYInput->Text),  int::Parse(Hephaestus::GUI::TargetZInput->Text) };

		Growth simulation = Growth(double::Parse(Hephaestus::GUI::MaterialDensityInput->Text),
			double::Parse(Hephaestus::GUI::MaterialElasticityInput->Text),
			double::Parse(Hephaestus::GUI::YieldStrengthInput->Text),
			int::Parse(Hephaestus::GUI::StrainLimitInput->Text),
			double::Parse(Hephaestus::GUI::GravityInput->Text),
			double::Parse(Hephaestus::GUI::NodeSpacingInput->Text),
			seedVertex,
			targetVertex);

		Hephaestus::GUI::PositionalReadOut->Text = simulation.format();
	}
}


//Title Bar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Close down the program (changes color when hovering over with Hover & Hoveroff functions)
System::Void Hephaestus::GUI::ExitButtonImage_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}
System::Void Hephaestus::GUI::ExitButtonImage_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	Hephaestus::GUI::ExitButtonImage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
		static_cast<System::Int32>(static_cast<System::Byte>(65)));
}
System::Void Hephaestus::GUI::ExitButtonImage_Hoveroff(System::Object^  sender, System::EventArgs^  e)
{
	Hephaestus::GUI::ExitButtonImage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(48)));
}

//Minimize the program (changes color when hovering over with Hover & Hoveroff functions)
System::Void Hephaestus::GUI::MinimizeButtonImage_Click(System::Object^  sender, System::EventArgs^  e)
{
	Hephaestus::GUI::WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
System::Void Hephaestus::GUI::MinimizeButtonImage_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	Hephaestus::GUI::MinimizeButtonImage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
		static_cast<System::Int32>(static_cast<System::Byte>(65)));
}
System::Void Hephaestus::GUI::MinimizeButtonImage_Hoveroff(System::Object^  sender, System::EventArgs^  e)
{
	Hephaestus::GUI::MinimizeButtonImage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(48)));
}

//Restore Down - Fullscreen the program (changes color when hovering over with Hover & Hoveroff functions)
System::Void Hephaestus::GUI::SizeButtonImage_Click(System::Object^  sender, System::EventArgs^  e)
{

}
System::Void Hephaestus::GUI::SizeButtonImage_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	Hephaestus::GUI::SizeButtonImage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
		static_cast<System::Int32>(static_cast<System::Byte>(65)));
}
System::Void Hephaestus::GUI::SizeButtonImage_Hoveroff(System::Object^  sender, System::EventArgs^  e)
{
	Hephaestus::GUI::SizeButtonImage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(48)));
}

//Title Bar drag
System::Void Hephaestus::GUI::TitleBar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	//restore Down
	//Set GUI position to mouse position with offset based on mouse position on title bar
	Point currentScreenPos = PointToScreen(e->Location);
	Hephaestus::GUI::Location = Point(currentScreenPos.X - e->X, currentScreenPos.Y - e->Y);
	//Redraw GUI
}

//Menu Strip
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Help Button (changes color when hovering over with Hover & Hoveroff functions)
System::Void Hephaestus::GUI::HelpButton_Click(System::Object^  sender, System::EventArgs^  e)
{
		InstructionsPanel->Visible = !InstructionsPanel->Visible;

		//Save show again status to config file
		std::ofstream config(L"Config.cfg");
		config << "show again = " << !InstructionsShowAgainCheckbox->Checked;
		config.close();
}
System::Void Hephaestus::GUI::HelpButton_Hover(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	Hephaestus::GUI::HelpButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
		static_cast<System::Int32>(static_cast<System::Byte>(65)));
}
System::Void Hephaestus::GUI::HelpButton_Hoveroff(System::Object^  sender, System::EventArgs^  e)
{
	Hephaestus::GUI::HelpButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(48)));
}

//Close instructions panel
System::Void Hephaestus::GUI::InstructionsButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	InstructionsPanel->Visible = false;
	//Save show again status to config file
	std::ofstream config(L"Config.cfg");
	config << "show again = " << !InstructionsShowAgainCheckbox->Checked;
	config.close();
}