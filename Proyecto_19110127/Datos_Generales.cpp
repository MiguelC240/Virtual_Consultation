#include "Ventana_Principal.h"
#include "Datos_Generales.h"
#include "Diabetes.h"
#include "Apnea.h"
#include "Coronaria.h"
#include "Menu_General.h"


using namespace System::Windows::Forms;
using namespace Proyecto19110127;    // Reemplazar Project1 por el nombre que se le haya dado al proyecto


[STAThread]






int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Project1 es el nombre del proyecto
	Proyecto19110127::Menu_General form;	//Reemplazar MyForm por el nombre que tenga tu clase 
	Ventana_Principal^ Principal_ventana = gcnew Ventana_Principal;
	Application::Run(Principal_ventana);
}

void Datos_Generales::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Menu_General^ ventana_MenuGeneral = gcnew Menu_General;
	ventana_MenuGeneral->Show();
	this->Hide();

}

void Datos_Generales::button2_Click(System::Object^ sender, System::EventArgs^ e)
{


	if (Nombre->Text == "" || Genero->Text == "" || Edad->Text == "" || Altura->Text == "" || Peso->Text == "")
	{
		this->button1->Enabled = false;
		MessageBox::Show("No has llenado todos los campos");
	}
	else
	{
		this->button1->Enabled = true;

		nombre = Nombre->Text;
		

		genero = Genero->SelectedIndex;

		Int32::TryParse(Edad->Text, edad);

		Double::TryParse(Altura->Text, altura);

		Double::TryParse(Peso->Text, peso);

		altura_m = altura / 100;

		IMC = ((peso) / (pow(altura_m, 2)));


		IMC_Box->Text = "" + IMC.ToString("N2");

		if (IMC < 18.5)
		{
			Clasificacion->Text = "" + nombre + " te encuentras bajo de peso";
		}

		if (IMC >= 18.5 && IMC < 24.9)
		{
			Clasificacion->Text = "" + nombre + " te encuentras en peso normal";
		}
		if (IMC >= 24.9 && IMC < 29.9)
		{
			Clasificacion->Text = "" + nombre + " te encuentras en sobrepeso";
		}
		if (IMC >= 29.9 && IMC < 34.9)
		{
			Clasificacion->Text = "" + nombre + " te encuentras en obesidad grado I";
		}
		if (IMC >= 34.9 && IMC < 39.9)
		{
			Clasificacion->Text = "" + nombre + " te encuentras en obesidad grado II";
		}
		if (IMC > 40)
		{
			Clasificacion->Text = "" + nombre + " te encuentras en obesidad grado III";
		}
		

	}
}


