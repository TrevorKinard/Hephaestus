#include "GUI.h"
#include <iostream>
#include "Object.h"

//Drag Application Form
System::Void Hephaestus::GUI::TitleBar_Click(System::Object^ sender, System::EventArgs^ e)
{
}

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
	else
	{}

}
System::Void Hephaestus::GUI::MaterialInput_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	Hephaestus::GUI::MaterialList->ResetText();
}

//Obstacle File
System::Void Hephaestus::GUI::ObstacleFileInput_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{

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

//Close down the program
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

//Restore down or maximize program
System::Void Hephaestus::GUI::TitleBar_DoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{}
System::Void Hephaestus::GUI::SizeButtonImage_Click(System::Object^  sender, System::EventArgs^  e)
{
	switch (Hephaestus::GUI::WindowState)
	{
	case System::Windows::Forms::FormWindowState::Maximized:
		Hephaestus::GUI::WindowState = System::Windows::Forms::FormWindowState::Minimized;
		//Hephaestus::GUI::Maximize->Image = (cli::safe_cast<System::Drawing::Image^>(System::Resources::ResourceManager::GetObject(L"Restore Down.Image")));

	case System::Windows::Forms::FormWindowState::Minimized:
		Hephaestus::GUI::WindowState = System::Windows::Forms::FormWindowState::Maximized;
		//Hephaestus::GUI::Maximize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Maximize.Image")));

	}
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

//Minimize the program
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