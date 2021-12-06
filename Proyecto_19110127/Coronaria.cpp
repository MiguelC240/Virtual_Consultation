#include "Ventana_Principal.h"
#include "Datos_Generales.h"
#include "Diabetes.h"
#include "Apnea.h"
#include "Coronaria.h"
#include "Menu_General.h"
using namespace Proyecto19110127;


void Coronaria::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Menu_General^ ventana_MenuGeneral = gcnew Menu_General;
	ventana_MenuGeneral->Show();
	this->Hide();
}


void Coronaria::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ nombre_C;

	Int32 puntaje_Coronaria, c1, c2, c3, c4, genero_Coronaria, edad_Coronaria;
	Double IMC_Coronaria;

	Datos_Generales^ obj = gcnew Datos_Generales(nombre_C);
	nombre_C = obj->nombre;


	IMC_Coronaria = obj->IMC;
	genero_Coronaria = obj->genero;
	edad_Coronaria = obj->edad;

	puntaje_Coronaria = 0;


	c1 = comboBox1->SelectedIndex;
	c2 = comboBox2->SelectedIndex;
	c3 = comboBox3->SelectedIndex;
	c4 = comboBox4->SelectedIndex;


	if (genero_Coronaria == 0 && edad_Coronaria < 45)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	if (genero_Coronaria == 0 && edad_Coronaria >= 45 && edad_Coronaria <= 49)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	if (genero_Coronaria == 0 && edad_Coronaria >= 50 && edad_Coronaria <= 59)
	{
		puntaje_Coronaria = puntaje_Coronaria + 2;
	}
	if (genero_Coronaria == 0 && edad_Coronaria > 60)
	{
		puntaje_Coronaria = puntaje_Coronaria + 3;
	}

	//MessageBox::Show("Edad: " + edad_Coronaria);

	if (genero_Coronaria == 1 && edad_Coronaria < 50)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	if (genero_Coronaria == 1 && edad_Coronaria >= 50 && edad_Coronaria <= 55)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	if (genero_Coronaria == 1 && edad_Coronaria > 55)
	{
		puntaje_Coronaria = puntaje_Coronaria + 3;
	}



	//MessageBox::Show("Puntaje: " + puntaje_Coronaria);

	if (c1 == 0)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (c1 == 1)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}

	//MessageBox::Show("Puntaje: " + puntaje_Coronaria);


	if (c2 == 0)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (c2 == 1)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}


	//MessageBox::Show("Puntaje: " + puntaje_Coronaria);


	if (c3 == 0)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	else if (c3 == 1)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	//MessageBox::Show("Puntaje: " + puntaje_Coronaria);

	if (c4 == 0)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	else if (c4 == 1)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}


	//MessageBox::Show("Puntaje: " + puntaje_Coronaria);

	if (IMC_Coronaria < 25)
	{
		puntaje_Coronaria = puntaje_Coronaria + 0;
	}
	if (IMC_Coronaria >= 25 && IMC_Coronaria <= 30)
	{
		puntaje_Coronaria = puntaje_Coronaria + 1;
	}
	if (IMC_Coronaria > 30)
	{
		puntaje_Coronaria = puntaje_Coronaria + 3;
	}


	//MessageBox::Show("Puntaje: " + puntaje_Coronaria);

	MessageBox::Show("Independientemente del resultado obtenido le recomendamos acudir con un experto para descartar cualquier resultado inesperado");

	textBox1->Text = "" + puntaje_Coronaria;


	if (puntaje_Coronaria <= 3)
	{
		textBox2->Text = "1% ---> Riesgo muy bajo";
	}
	if (puntaje_Coronaria >= 4 && puntaje_Coronaria <= 6)
	{
		textBox2->Text = "4% ---> Riesgo bajo";
	}
	if (puntaje_Coronaria >= 7 && puntaje_Coronaria <= 9)
	{
		textBox2->Text = "17% ---> Riesgo moderado";
	}
	if (puntaje_Coronaria >= 9 && puntaje_Coronaria <= 10)
	{
		textBox2->Text = "33% ---> Riesgo alto";
	}
	if (puntaje_Coronaria >= 11)
	{
		textBox2->Text = "50% ---> Riesgo muy alto";
	}
}