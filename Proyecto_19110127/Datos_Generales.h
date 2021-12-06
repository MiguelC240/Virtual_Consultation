#pragma once
#include <string>
#include "Diabetes.h"


namespace Proyecto19110127 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Proyecto19110127;
	//using namespace std;

	/// <summary>
	/// Resumen de Datos_Generales
	/// </summary>
	public ref class Datos_Generales : public System::Windows::Forms::Form
	{
	public:
		static String^ nombre;
		static Double altura_m, IMC, altura, peso;
		static Int32 edad, genero;

	public:
		Datos_Generales(String^ d1)
		{
			InitializeComponent();

			Nombre->Text = d1;

			//
			//TODO: agregar código de constructor aquí
			//

	
		}
	/*public:
		void D_Generales(String^ d1)
		{
			InitializeComponent();

			Nombre->Text = d1;
		}*/
	

	
	


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Datos_Generales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ Altura;
	protected:

	private: System::Windows::Forms::ComboBox^ Genero;
	private: System::Windows::Forms::TextBox^ Peso;


	private: System::Windows::Forms::TextBox^ Edad;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ IMC_Box;

	private: System::Windows::Forms::TextBox^ Clasificacion;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ Nombre;

	private: System::Windows::Forms::Label^ label1;

	protected:
















	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Datos_Generales::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Altura = (gcnew System::Windows::Forms::ComboBox());
			this->Genero = (gcnew System::Windows::Forms::ComboBox());
			this->Peso = (gcnew System::Windows::Forms::TextBox());
			this->Edad = (gcnew System::Windows::Forms::TextBox());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Clasificacion = (gcnew System::Windows::Forms::TextBox());
			this->IMC_Box = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->Altura);
			this->groupBox1->Controls->Add(this->Genero);
			this->groupBox1->Controls->Add(this->Peso);
			this->groupBox1->Controls->Add(this->Edad);
			this->groupBox1->Controls->Add(this->Nombre);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(19, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(491, 394);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Generales";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(164, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 39);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Calcular IMC";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Datos_Generales::button2_Click);
			// 
			// Altura
			// 
			this->Altura->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Altura->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Altura->FormattingEnabled = true;
			this->Altura->Items->AddRange(gcnew cli::array< System::Object^  >(111) {
				L"100", L"101", L"102", L"103", L"104", L"105", L"106",
					L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", L"115", L"116", L"117", L"118", L"119", L"120", L"121", L"122",
					L"123", L"124", L"125", L"126", L"127", L"128", L"129", L"130", L"131", L"132", L"133", L"134", L"135", L"136", L"137", L"138",
					L"139", L"140", L"141", L"142", L"143", L"144", L"145", L"146", L"147", L"148", L"149", L"150", L"151", L"152", L"153", L"154",
					L"155", L"156", L"157", L"158", L"159", L"160", L"161", L"162", L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170",
					L"171", L"172", L"173", L"174", L"175", L"176", L"177", L"178", L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186",
					L"187", L"188", L"189", L"190", L"191", L"192", L"193", L"194", L"195", L"196", L"197", L"198", L"199", L"200", L"201", L"202",
					L"203", L"204", L"205", L"206", L"207", L"208", L"209", L"210"
			});
			this->Altura->Location = System::Drawing::Point(232, 213);
			this->Altura->Name = L"Altura";
			this->Altura->Size = System::Drawing::Size(219, 27);
			this->Altura->TabIndex = 22;
			// 
			// Genero
			// 
			this->Genero->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Genero->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Genero->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Genero->FormattingEnabled = true;
			this->Genero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->Genero->Location = System::Drawing::Point(232, 110);
			this->Genero->Name = L"Genero";
			this->Genero->Size = System::Drawing::Size(219, 27);
			this->Genero->TabIndex = 21;
			// 
			// Peso
			// 
			this->Peso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Peso->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Peso->Location = System::Drawing::Point(232, 268);
			this->Peso->Name = L"Peso";
			this->Peso->Size = System::Drawing::Size(219, 26);
			this->Peso->TabIndex = 20;
			// 
			// Edad
			// 
			this->Edad->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Edad->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Edad->Location = System::Drawing::Point(232, 165);
			this->Edad->Name = L"Edad";
			this->Edad->Size = System::Drawing::Size(219, 26);
			this->Edad->TabIndex = 19;
			// 
			// Nombre
			// 
			this->Nombre->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Nombre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nombre->Location = System::Drawing::Point(232, 53);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(219, 26);
			this->Nombre->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(29, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 19);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Ingresa tu peso (kg): ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(29, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 19);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Ingresa tu altura (cm): ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(29, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 19);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Ingresa tu edad: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(29, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 19);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Ingresa tu genero: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(29, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 19);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Ingresa tu nombre: ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Clasificacion);
			this->groupBox2->Controls->Add(this->IMC_Box);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(526, 26);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(455, 394);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"IMC";
			// 
			// Clasificacion
			// 
			this->Clasificacion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Clasificacion->Enabled = false;
			this->Clasificacion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clasificacion->Location = System::Drawing::Point(18, 113);
			this->Clasificacion->Name = L"Clasificacion";
			this->Clasificacion->Size = System::Drawing::Size(420, 26);
			this->Clasificacion->TabIndex = 20;
			// 
			// IMC_Box
			// 
			this->IMC_Box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->IMC_Box->Enabled = false;
			this->IMC_Box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IMC_Box->Location = System::Drawing::Point(141, 46);
			this->IMC_Box->Name = L"IMC_Box";
			this->IMC_Box->Size = System::Drawing::Size(190, 26);
			this->IMC_Box->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(34, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 19);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Tu IMC es: ";
			this->label6->Click += gcnew System::EventHandler(this, &Datos_Generales::label6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(52, 193);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(346, 153);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(405, 469);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 39);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Siguiente";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Datos_Generales::button1_Click);
			// 
			// Datos_Generales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(993, 530);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Datos_Generales";
			this->Text = L"Datos_Generales";
			this->Load += gcnew System::EventHandler(this, &Datos_Generales::Datos_Generales_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: Void Datos_Generales_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: 
	Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	Void button2_Click(System::Object^ sender, System::EventArgs^ e);

//public: 
	

};
}
