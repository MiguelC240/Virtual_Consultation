#include "Ventana_Principal.h"
#include "Datos_Generales.h"
#include "Diabetes.h"
#include "Apnea.h"
#include "Coronaria.h"
#include "Menu_General.h"
using namespace Proyecto19110127;


void Diabetes::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Menu_General^ ventana_MenuGeneral = gcnew Menu_General;
	ventana_MenuGeneral->Show();
	this->Hide();
}



void Diabetes::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ nombre_D;

	Int32 genero_Diabetes, puntaje_Diabetes, perimetro_ombligo, edad_Diabetes, in_dia, AF, FV, medicamentos, azucar;
	Double IMC_Diabetes;

	Datos_Generales^ obj = gcnew Datos_Generales(nombre_D);
	nombre_D = obj->nombre;

	puntaje_Diabetes = 0;

	IMC_Diabetes = obj->IMC;
	edad_Diabetes = obj->edad;
	genero_Diabetes = obj->genero;

	in_dia = comboBox1->SelectedIndex;
	AF = comboBox2->SelectedIndex;
	FV = comboBox3->SelectedIndex;
	medicamentos = comboBox4->SelectedIndex;
	azucar = comboBox5->SelectedIndex;
	Int32::TryParse(textBox3->Text, perimetro_ombligo);

	if (edad_Diabetes < 35)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	if (edad_Diabetes >= 35 && edad_Diabetes <= 44)
	{
		puntaje_Diabetes = puntaje_Diabetes + 1;
	}
	if (edad_Diabetes >= 45 && edad_Diabetes <= 54)
	{
		puntaje_Diabetes = puntaje_Diabetes + 2;
	}
	if (edad_Diabetes >= 55 && edad_Diabetes <= 64)
	{
		puntaje_Diabetes = puntaje_Diabetes + 3;
	}
	if (edad_Diabetes > 64)
	{
		puntaje_Diabetes = puntaje_Diabetes + 4;
	}

	//MessageBox::Show("Puntos: " + puntaje_Diabetes);




	
	if (in_dia == 0)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	if (in_dia == 1)
	{
		puntaje_Diabetes = puntaje_Diabetes + 3;
	}
	if (in_dia == 2)
	{
		puntaje_Diabetes = puntaje_Diabetes + 5;
	}

	//MessageBox::Show("Puntos: " + puntaje_Diabetes);


	if (genero_Diabetes == 0 && perimetro_ombligo < 94)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	else if (genero_Diabetes == 0 && perimetro_ombligo >= 94 && perimetro_ombligo <= 102)
	{
		puntaje_Diabetes = puntaje_Diabetes + 3;
	}
	else if (genero_Diabetes == 0 && perimetro_ombligo > 102)
	{
		puntaje_Diabetes = puntaje_Diabetes + 4;
	}

	
	if (genero_Diabetes == 1 && perimetro_ombligo < 80)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	else if (genero_Diabetes == 1 && perimetro_ombligo >= 80 && perimetro_ombligo <= 88)
	{
		puntaje_Diabetes = puntaje_Diabetes + 3;
	}
	else if (genero_Diabetes == 1 && perimetro_ombligo > 88)
	{
		puntaje_Diabetes = puntaje_Diabetes + 4;
	}

	//MessageBox::Show("Puntos: " + puntaje_Diabetes);

	if (AF == 0)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	else if (AF == 1)
	{
		puntaje_Diabetes = puntaje_Diabetes + 2;
	}

	//MessageBox::Show("Puntos: " + puntaje_Diabetes);



	if (FV == 0)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	if (FV == 1)
	{
		puntaje_Diabetes = puntaje_Diabetes + 1;
	}

	//MessageBox::Show("Puntos: " + puntaje_Diabetes);


	if (medicamentos == 1)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	if (medicamentos == 0)
	{
		puntaje_Diabetes = puntaje_Diabetes + 2;
	}

	//MessageBox::Show("Puntos: " + puntaje_Diabetes);

	if (azucar == 1)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	if (azucar == 0)
	{
		puntaje_Diabetes = puntaje_Diabetes + 5;
	}


	//MessageBox::Show("Puntos: " + puntaje_Diabetes);

	if (IMC_Diabetes < 25)
	{
		puntaje_Diabetes = puntaje_Diabetes + 0;
	}
	if (IMC_Diabetes >= 25 && IMC_Diabetes <= 30)
	{
		puntaje_Diabetes = puntaje_Diabetes + 1;
	}
	if (IMC_Diabetes > 30)
	{
		puntaje_Diabetes = puntaje_Diabetes + 3;
	}

	//MessageBox::Show("Puntos: " + puntaje_Diabetes);

	MessageBox::Show("Independientemente del resultado obtenido le recomendamos acudir con un experto para descartar cualquier resultado inesperado");

	textBox1->Text = "Tu puntaje total fue: " + puntaje_Diabetes;


	if (puntaje_Diabetes < 7)
	{
		textBox2->Text = "1% -----> Riesgo muy bajo";
	}
	if (puntaje_Diabetes >= 7 && puntaje_Diabetes <= 11)
	{
		textBox2->Text = "4% -----> Riesgo bajo";
	}
	if (puntaje_Diabetes >= 12 && puntaje_Diabetes <= 14)
	{
		textBox2->Text = "17% -----> Riesgo moderado";
	}
	if (puntaje_Diabetes >= 15 && puntaje_Diabetes <= 20)
	{
		textBox2->Text = "33% -----> Riesgo alto";
	}
	if (puntaje_Diabetes > 20)
	{
		textBox2->Text = "50% -----> Riesgo muy alto";
	}

	
}