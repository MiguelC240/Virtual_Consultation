#include "Ventana_Principal.h"
#include "Datos_Generales.h"

using namespace Proyecto19110127;    // Reemplazar Project1 por el nombre que se le haya dado al proyecto


void Ventana_Principal::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ m2;
	Datos_Generales^ ventana_DatosGenerales = gcnew Datos_Generales(m2);
	ventana_DatosGenerales->Show();
	this->Hide();
}



