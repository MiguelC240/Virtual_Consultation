#include "Ventana_Principal.h"
#include "Datos_Generales.h"
#include "Diabetes.h"
#include "Apnea.h"
#include "Coronaria.h"
#include "Menu_General.h"
using namespace Proyecto19110127;


void Apnea::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Menu_General^ ventana_MenuGeneral = gcnew Menu_General;
	ventana_MenuGeneral->Show();
	this->Hide();
}

void Apnea::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ nombre_A;

	Int32 puntaje_Apnea, d1, d2, d3, d4, d5, genero_Apnea, edad_Apnea;
	Double IMC_Apnea;

	Datos_Generales^ obj = gcnew Datos_Generales(nombre_A);
	nombre_A = obj->nombre;

	IMC_Apnea = obj->IMC;
	genero_Apnea = obj->genero;
	edad_Apnea = obj->edad;

	puntaje_Apnea = 0;

	d1 = comboBox1->SelectedIndex;
	d2 = comboBox1->SelectedIndex;
	d3 = comboBox1->SelectedIndex;
	d4 = comboBox1->SelectedIndex;
	
	Int32::TryParse(textBox3->Text, d5);


	if (d1 == 0)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if (d1 == 1)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}


	if (d2 == 0)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if (d2 == 1)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}


	if (d3 == 0)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if (d3 == 1)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}


	if (d4 == 0)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if (d4 == 1)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}

	if (IMC_Apnea >= 35)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if (IMC_Apnea < 35)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}


	if (edad_Apnea >= 50)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if (edad_Apnea < 50)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}

	if (genero_Apnea == 0 && d5 < 43)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}
	else if (genero_Apnea == 0 && d5 >= 43)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}

	if (genero_Apnea == 1 && d5 < 41)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}
	else if (genero_Apnea == 1 && d5 >= 41)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}


	if (genero_Apnea == 0)
	{
		puntaje_Apnea = puntaje_Apnea + 1;
	}
	else if (genero_Apnea == 1)
	{
		puntaje_Apnea = puntaje_Apnea + 0;
	}

	MessageBox::Show("Independientemente del resultado obtenido le recomendamos acudir con un experto para descartar cualquier resultado inesperado");

	textBox1->Text = "Tu puntaje total fue: " + puntaje_Apnea;

	if (puntaje_Apnea >= 0 && puntaje_Apnea <= 2)
	{
		textBox2->Text = "Bajo riesgo AOS (Apnea Obstructiva del Sueño)";
	}
	if (puntaje_Apnea >= 3 && puntaje_Apnea <= 4)
	{
		textBox2->Text = "Riesgo intermedio de AOS (Apnea Obstructiva del Sueño))";
	}
	if (puntaje_Apnea >= 5 && puntaje_Apnea <= 8)
	{
		textBox2->Text = "Alto riesgo de AOS (Apnea Obstructiva del Sueño)";
	}
}
