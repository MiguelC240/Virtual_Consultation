#include "Ventana_Principal.h"
#include "Datos_Generales.h"
#include "Diabetes.h"
#include "Apnea.h"
#include "Coronaria.h"
#include "Menu_General.h"
using namespace Proyecto19110127;


void Menu_General::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Diabetes^ ventana_Diabetes = gcnew Diabetes;
	ventana_Diabetes->Show();
	this->Hide();
}

void Menu_General::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Apnea^ ventana_Apnea = gcnew Apnea;
	ventana_Apnea->Show();
	this->Hide();
}

void Menu_General::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	Coronaria^ ventana_Coronaria = gcnew Coronaria;
	ventana_Coronaria->Show();
	this->Hide();
}


void Menu_General::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

