#pragma once
#include "agrupamiento.h"

namespace Grupo02Karnagaugh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Operacion4
	/// </summary>
	public ref class Operacion4 : public System::Windows::Forms::Form
	{
	public:
		Operacion4(void)
		{
			InitializeComponent();
			g = groupBox2->CreateGraphics();



			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		Graphics^ g;
	private: System::Windows::Forms::TextBox^ textBox36;
	protected:
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox96;
	private: System::Windows::Forms::TextBox^ textBox95;
	private: System::Windows::Forms::TextBox^ textBox94;
	private: System::Windows::Forms::TextBox^ textBox93;
	private: System::Windows::Forms::TextBox^ textBox92;
	private: System::Windows::Forms::TextBox^ textBox91;
	private: System::Windows::Forms::TextBox^ textBox90;
	private: System::Windows::Forms::TextBox^ textBox89;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button2;


		   Agrupamiento* agrupamiento;
		   ~Operacion4()
		   {
			   if (components)
			   {
				   delete components;
			   }
		   }

	protected:



















	private: System::Windows::Forms::GroupBox^ groupBox1;




	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox41;
	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::TextBox^ textBox43;
	private: System::Windows::Forms::TextBox^ textBox44;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox45;
	private: System::Windows::Forms::TextBox^ textBox46;
	private: System::Windows::Forms::TextBox^ textBox47;
	private: System::Windows::Forms::TextBox^ textBox48;
	private: System::Windows::Forms::TextBox^ textBox49;
	private: System::Windows::Forms::TextBox^ textBox50;
	private: System::Windows::Forms::TextBox^ textBox51;
	private: System::Windows::Forms::TextBox^ textBox52;
	private: System::Windows::Forms::TextBox^ textBox53;
	private: System::Windows::Forms::TextBox^ textBox54;
	private: System::Windows::Forms::TextBox^ textBox55;
	private: System::Windows::Forms::TextBox^ textBox56;




	private: System::Windows::Forms::TextBox^ textBox61;
	private: System::Windows::Forms::TextBox^ textBox62;
	private: System::Windows::Forms::TextBox^ textBox63;
	private: System::Windows::Forms::TextBox^ textBox64;
	private: System::Windows::Forms::TextBox^ textBox65;
	private: System::Windows::Forms::TextBox^ textBox66;
	private: System::Windows::Forms::TextBox^ textBox67;
	private: System::Windows::Forms::TextBox^ textBox68;
	private: System::Windows::Forms::TextBox^ textBox69;
	private: System::Windows::Forms::TextBox^ textBox70;
	private: System::Windows::Forms::TextBox^ textBox71;
	private: System::Windows::Forms::TextBox^ textBox72;




	private: System::Windows::Forms::TextBox^ textBox77;
	private: System::Windows::Forms::TextBox^ textBox78;
	private: System::Windows::Forms::TextBox^ textBox79;
	private: System::Windows::Forms::TextBox^ textBox80;
	private: System::Windows::Forms::TextBox^ textBox81;
	private: System::Windows::Forms::TextBox^ textBox82;
	private: System::Windows::Forms::TextBox^ textBox83;
	private: System::Windows::Forms::TextBox^ textBox84;
	private: System::Windows::Forms::TextBox^ textBox85;
	private: System::Windows::Forms::TextBox^ textBox86;
	private: System::Windows::Forms::TextBox^ textBox87;
	private: System::Windows::Forms::TextBox^ textBox88;















	private: System::Windows::Forms::ComboBox^ comboBox16;
	private: System::Windows::Forms::ComboBox^ comboBox15;
	private: System::Windows::Forms::ComboBox^ comboBox14;
	private: System::Windows::Forms::ComboBox^ comboBox13;
	private: System::Windows::Forms::ComboBox^ comboBox12;
	private: System::Windows::Forms::ComboBox^ comboBox11;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox96 = (gcnew System::Windows::Forms::TextBox());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->textBox93 = (gcnew System::Windows::Forms::TextBox());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->comboBox16);
			this->groupBox1->Controls->Add(this->comboBox15);
			this->groupBox1->Controls->Add(this->comboBox14);
			this->groupBox1->Controls->Add(this->comboBox13);
			this->groupBox1->Controls->Add(this->comboBox12);
			this->groupBox1->Controls->Add(this->comboBox11);
			this->groupBox1->Controls->Add(this->comboBox10);
			this->groupBox1->Controls->Add(this->comboBox9);
			this->groupBox1->Controls->Add(this->comboBox8);
			this->groupBox1->Controls->Add(this->comboBox7);
			this->groupBox1->Controls->Add(this->comboBox6);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox49);
			this->groupBox1->Controls->Add(this->textBox50);
			this->groupBox1->Controls->Add(this->textBox51);
			this->groupBox1->Controls->Add(this->textBox52);
			this->groupBox1->Controls->Add(this->textBox53);
			this->groupBox1->Controls->Add(this->textBox54);
			this->groupBox1->Controls->Add(this->textBox55);
			this->groupBox1->Controls->Add(this->textBox56);
			this->groupBox1->Controls->Add(this->textBox61);
			this->groupBox1->Controls->Add(this->textBox62);
			this->groupBox1->Controls->Add(this->textBox63);
			this->groupBox1->Controls->Add(this->textBox64);
			this->groupBox1->Controls->Add(this->textBox65);
			this->groupBox1->Controls->Add(this->textBox66);
			this->groupBox1->Controls->Add(this->textBox67);
			this->groupBox1->Controls->Add(this->textBox68);
			this->groupBox1->Controls->Add(this->textBox69);
			this->groupBox1->Controls->Add(this->textBox70);
			this->groupBox1->Controls->Add(this->textBox71);
			this->groupBox1->Controls->Add(this->textBox72);
			this->groupBox1->Controls->Add(this->textBox77);
			this->groupBox1->Controls->Add(this->textBox78);
			this->groupBox1->Controls->Add(this->textBox79);
			this->groupBox1->Controls->Add(this->textBox80);
			this->groupBox1->Controls->Add(this->textBox81);
			this->groupBox1->Controls->Add(this->textBox82);
			this->groupBox1->Controls->Add(this->textBox83);
			this->groupBox1->Controls->Add(this->textBox84);
			this->groupBox1->Controls->Add(this->textBox85);
			this->groupBox1->Controls->Add(this->textBox86);
			this->groupBox1->Controls->Add(this->textBox87);
			this->groupBox1->Controls->Add(this->textBox88);
			this->groupBox1->Controls->Add(this->textBox41);
			this->groupBox1->Controls->Add(this->textBox42);
			this->groupBox1->Controls->Add(this->textBox43);
			this->groupBox1->Controls->Add(this->textBox44);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->textBox45);
			this->groupBox1->Controls->Add(this->textBox46);
			this->groupBox1->Controls->Add(this->textBox47);
			this->groupBox1->Controls->Add(this->textBox48);
			this->groupBox1->Controls->Add(this->textBox21);
			this->groupBox1->Controls->Add(this->textBox22);
			this->groupBox1->Controls->Add(this->textBox23);
			this->groupBox1->Controls->Add(this->textBox24);
			this->groupBox1->Controls->Add(this->textBox25);
			this->groupBox1->Controls->Add(this->textBox26);
			this->groupBox1->Controls->Add(this->textBox27);
			this->groupBox1->Controls->Add(this->textBox28);
			this->groupBox1->Controls->Add(this->textBox29);
			this->groupBox1->Controls->Add(this->textBox30);
			this->groupBox1->Controls->Add(this->textBox31);
			this->groupBox1->Controls->Add(this->textBox32);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(35, 15);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(400, 603);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tabla de verdad";
			// 
			// comboBox16
			// 
			this->comboBox16->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox16->Location = System::Drawing::Point(279, 546);
			this->comboBox16->Margin = System::Windows::Forms::Padding(4);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(55, 29);
			this->comboBox16->TabIndex = 117;
			// 
			// comboBox15
			// 
			this->comboBox15->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox15->Location = System::Drawing::Point(279, 514);
			this->comboBox15->Margin = System::Windows::Forms::Padding(4);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(55, 29);
			this->comboBox15->TabIndex = 116;
			// 
			// comboBox14
			// 
			this->comboBox14->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox14->Location = System::Drawing::Point(279, 482);
			this->comboBox14->Margin = System::Windows::Forms::Padding(4);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(55, 29);
			this->comboBox14->TabIndex = 115;
			// 
			// comboBox13
			// 
			this->comboBox13->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox13->Location = System::Drawing::Point(279, 450);
			this->comboBox13->Margin = System::Windows::Forms::Padding(4);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(55, 29);
			this->comboBox13->TabIndex = 114;
			// 
			// comboBox12
			// 
			this->comboBox12->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox12->Location = System::Drawing::Point(279, 417);
			this->comboBox12->Margin = System::Windows::Forms::Padding(4);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(55, 29);
			this->comboBox12->TabIndex = 113;
			// 
			// comboBox11
			// 
			this->comboBox11->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox11->Location = System::Drawing::Point(279, 385);
			this->comboBox11->Margin = System::Windows::Forms::Padding(4);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(55, 29);
			this->comboBox11->TabIndex = 112;
			// 
			// comboBox10
			// 
			this->comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox10->Location = System::Drawing::Point(279, 353);
			this->comboBox10->Margin = System::Windows::Forms::Padding(4);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(55, 29);
			this->comboBox10->TabIndex = 111;
			// 
			// comboBox9
			// 
			this->comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox9->Location = System::Drawing::Point(279, 321);
			this->comboBox9->Margin = System::Windows::Forms::Padding(4);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(55, 29);
			this->comboBox9->TabIndex = 110;
			// 
			// comboBox8
			// 
			this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox8->Location = System::Drawing::Point(279, 289);
			this->comboBox8->Margin = System::Windows::Forms::Padding(4);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(55, 29);
			this->comboBox8->TabIndex = 109;
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox7->Location = System::Drawing::Point(279, 257);
			this->comboBox7->Margin = System::Windows::Forms::Padding(4);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(55, 29);
			this->comboBox7->TabIndex = 108;
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox6->Location = System::Drawing::Point(279, 225);
			this->comboBox6->Margin = System::Windows::Forms::Padding(4);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(55, 29);
			this->comboBox6->TabIndex = 107;
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox5->Location = System::Drawing::Point(279, 193);
			this->comboBox5->Margin = System::Windows::Forms::Padding(4);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(55, 29);
			this->comboBox5->TabIndex = 106;
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox4->Location = System::Drawing::Point(279, 160);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(55, 29);
			this->comboBox4->TabIndex = 105;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox3->Location = System::Drawing::Point(279, 128);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(55, 29);
			this->comboBox3->TabIndex = 104;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox2->Location = System::Drawing::Point(279, 96);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(55, 29);
			this->comboBox2->TabIndex = 103;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox1->Location = System::Drawing::Point(279, 64);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(55, 29);
			this->comboBox1->TabIndex = 102;
			// 
			// textBox49
			// 
			this->textBox49->Enabled = false;
			this->textBox49->Location = System::Drawing::Point(199, 548);
			this->textBox49->Margin = System::Windows::Forms::Padding(4);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(47, 29);
			this->textBox49->TabIndex = 101;
			this->textBox49->Text = L"1";
			// 
			// textBox50
			// 
			this->textBox50->Enabled = false;
			this->textBox50->Location = System::Drawing::Point(199, 516);
			this->textBox50->Margin = System::Windows::Forms::Padding(4);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(47, 29);
			this->textBox50->TabIndex = 100;
			this->textBox50->Text = L"0";
			// 
			// textBox51
			// 
			this->textBox51->Enabled = false;
			this->textBox51->Location = System::Drawing::Point(199, 484);
			this->textBox51->Margin = System::Windows::Forms::Padding(4);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(47, 29);
			this->textBox51->TabIndex = 99;
			this->textBox51->Text = L"1";
			// 
			// textBox52
			// 
			this->textBox52->Enabled = false;
			this->textBox52->Location = System::Drawing::Point(199, 452);
			this->textBox52->Margin = System::Windows::Forms::Padding(4);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(47, 29);
			this->textBox52->TabIndex = 98;
			this->textBox52->Text = L"0";
			// 
			// textBox53
			// 
			this->textBox53->Enabled = false;
			this->textBox53->Location = System::Drawing::Point(199, 418);
			this->textBox53->Margin = System::Windows::Forms::Padding(4);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(47, 29);
			this->textBox53->TabIndex = 97;
			this->textBox53->Text = L"1";
			// 
			// textBox54
			// 
			this->textBox54->Enabled = false;
			this->textBox54->Location = System::Drawing::Point(199, 386);
			this->textBox54->Margin = System::Windows::Forms::Padding(4);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(47, 29);
			this->textBox54->TabIndex = 96;
			this->textBox54->Text = L"0";
			// 
			// textBox55
			// 
			this->textBox55->Enabled = false;
			this->textBox55->Location = System::Drawing::Point(199, 354);
			this->textBox55->Margin = System::Windows::Forms::Padding(4);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(47, 29);
			this->textBox55->TabIndex = 95;
			this->textBox55->Text = L"1";
			// 
			// textBox56
			// 
			this->textBox56->Enabled = false;
			this->textBox56->Location = System::Drawing::Point(199, 322);
			this->textBox56->Margin = System::Windows::Forms::Padding(4);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(47, 29);
			this->textBox56->TabIndex = 94;
			this->textBox56->Text = L"0";
			// 
			// textBox61
			// 
			this->textBox61->Enabled = false;
			this->textBox61->Location = System::Drawing::Point(152, 548);
			this->textBox61->Margin = System::Windows::Forms::Padding(4);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(47, 29);
			this->textBox61->TabIndex = 89;
			this->textBox61->Text = L"1";
			// 
			// textBox62
			// 
			this->textBox62->Enabled = false;
			this->textBox62->Location = System::Drawing::Point(152, 516);
			this->textBox62->Margin = System::Windows::Forms::Padding(4);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(47, 29);
			this->textBox62->TabIndex = 88;
			this->textBox62->Text = L"1";
			// 
			// textBox63
			// 
			this->textBox63->Enabled = false;
			this->textBox63->Location = System::Drawing::Point(152, 484);
			this->textBox63->Margin = System::Windows::Forms::Padding(4);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(47, 29);
			this->textBox63->TabIndex = 87;
			this->textBox63->Text = L"0";
			// 
			// textBox64
			// 
			this->textBox64->Enabled = false;
			this->textBox64->Location = System::Drawing::Point(152, 452);
			this->textBox64->Margin = System::Windows::Forms::Padding(4);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(47, 29);
			this->textBox64->TabIndex = 86;
			this->textBox64->Text = L"0";
			// 
			// textBox65
			// 
			this->textBox65->Enabled = false;
			this->textBox65->Location = System::Drawing::Point(100, 548);
			this->textBox65->Margin = System::Windows::Forms::Padding(4);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(57, 29);
			this->textBox65->TabIndex = 85;
			this->textBox65->Text = L"1";
			// 
			// textBox66
			// 
			this->textBox66->Enabled = false;
			this->textBox66->Location = System::Drawing::Point(100, 516);
			this->textBox66->Margin = System::Windows::Forms::Padding(4);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(57, 29);
			this->textBox66->TabIndex = 84;
			this->textBox66->Text = L"1";
			// 
			// textBox67
			// 
			this->textBox67->Enabled = false;
			this->textBox67->Location = System::Drawing::Point(100, 484);
			this->textBox67->Margin = System::Windows::Forms::Padding(4);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(57, 29);
			this->textBox67->TabIndex = 83;
			this->textBox67->Text = L"1";
			// 
			// textBox68
			// 
			this->textBox68->Enabled = false;
			this->textBox68->Location = System::Drawing::Point(100, 452);
			this->textBox68->Margin = System::Windows::Forms::Padding(4);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(57, 29);
			this->textBox68->TabIndex = 82;
			this->textBox68->Text = L"1";
			// 
			// textBox69
			// 
			this->textBox69->Enabled = false;
			this->textBox69->Location = System::Drawing::Point(49, 548);
			this->textBox69->Margin = System::Windows::Forms::Padding(4);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(52, 29);
			this->textBox69->TabIndex = 81;
			this->textBox69->Text = L"1";
			// 
			// textBox70
			// 
			this->textBox70->Enabled = false;
			this->textBox70->Location = System::Drawing::Point(49, 516);
			this->textBox70->Margin = System::Windows::Forms::Padding(4);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(52, 29);
			this->textBox70->TabIndex = 80;
			this->textBox70->Text = L"1";
			// 
			// textBox71
			// 
			this->textBox71->Enabled = false;
			this->textBox71->Location = System::Drawing::Point(49, 484);
			this->textBox71->Margin = System::Windows::Forms::Padding(4);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(52, 29);
			this->textBox71->TabIndex = 79;
			this->textBox71->Text = L"1";
			// 
			// textBox72
			// 
			this->textBox72->Enabled = false;
			this->textBox72->Location = System::Drawing::Point(49, 452);
			this->textBox72->Margin = System::Windows::Forms::Padding(4);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(52, 29);
			this->textBox72->TabIndex = 78;
			this->textBox72->Text = L"1";
			// 
			// textBox77
			// 
			this->textBox77->Enabled = false;
			this->textBox77->Location = System::Drawing::Point(152, 418);
			this->textBox77->Margin = System::Windows::Forms::Padding(4);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(47, 29);
			this->textBox77->TabIndex = 73;
			this->textBox77->Text = L"1";
			// 
			// textBox78
			// 
			this->textBox78->Enabled = false;
			this->textBox78->Location = System::Drawing::Point(152, 386);
			this->textBox78->Margin = System::Windows::Forms::Padding(4);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(47, 29);
			this->textBox78->TabIndex = 72;
			this->textBox78->Text = L"1";
			// 
			// textBox79
			// 
			this->textBox79->Enabled = false;
			this->textBox79->Location = System::Drawing::Point(152, 354);
			this->textBox79->Margin = System::Windows::Forms::Padding(4);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(47, 29);
			this->textBox79->TabIndex = 71;
			this->textBox79->Text = L"0";
			// 
			// textBox80
			// 
			this->textBox80->Enabled = false;
			this->textBox80->Location = System::Drawing::Point(152, 322);
			this->textBox80->Margin = System::Windows::Forms::Padding(4);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(47, 29);
			this->textBox80->TabIndex = 70;
			this->textBox80->Text = L"0";
			// 
			// textBox81
			// 
			this->textBox81->Enabled = false;
			this->textBox81->Location = System::Drawing::Point(100, 418);
			this->textBox81->Margin = System::Windows::Forms::Padding(4);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(57, 29);
			this->textBox81->TabIndex = 69;
			this->textBox81->Text = L"0";
			// 
			// textBox82
			// 
			this->textBox82->Enabled = false;
			this->textBox82->Location = System::Drawing::Point(100, 386);
			this->textBox82->Margin = System::Windows::Forms::Padding(4);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(57, 29);
			this->textBox82->TabIndex = 68;
			this->textBox82->Text = L"0";
			// 
			// textBox83
			// 
			this->textBox83->Enabled = false;
			this->textBox83->Location = System::Drawing::Point(100, 354);
			this->textBox83->Margin = System::Windows::Forms::Padding(4);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(57, 29);
			this->textBox83->TabIndex = 67;
			this->textBox83->Text = L"0";
			// 
			// textBox84
			// 
			this->textBox84->Enabled = false;
			this->textBox84->Location = System::Drawing::Point(100, 322);
			this->textBox84->Margin = System::Windows::Forms::Padding(4);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(57, 29);
			this->textBox84->TabIndex = 66;
			this->textBox84->Text = L"0";
			// 
			// textBox85
			// 
			this->textBox85->Enabled = false;
			this->textBox85->Location = System::Drawing::Point(49, 418);
			this->textBox85->Margin = System::Windows::Forms::Padding(4);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(52, 29);
			this->textBox85->TabIndex = 65;
			this->textBox85->Text = L"1";
			// 
			// textBox86
			// 
			this->textBox86->Enabled = false;
			this->textBox86->Location = System::Drawing::Point(49, 386);
			this->textBox86->Margin = System::Windows::Forms::Padding(4);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(52, 29);
			this->textBox86->TabIndex = 64;
			this->textBox86->Text = L"1";
			// 
			// textBox87
			// 
			this->textBox87->Enabled = false;
			this->textBox87->Location = System::Drawing::Point(49, 354);
			this->textBox87->Margin = System::Windows::Forms::Padding(4);
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(52, 29);
			this->textBox87->TabIndex = 63;
			this->textBox87->Text = L"1";
			// 
			// textBox88
			// 
			this->textBox88->Enabled = false;
			this->textBox88->Location = System::Drawing::Point(49, 322);
			this->textBox88->Margin = System::Windows::Forms::Padding(4);
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(52, 29);
			this->textBox88->TabIndex = 62;
			this->textBox88->Text = L"1";
			// 
			// textBox41
			// 
			this->textBox41->Enabled = false;
			this->textBox41->Location = System::Drawing::Point(199, 290);
			this->textBox41->Margin = System::Windows::Forms::Padding(4);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(47, 29);
			this->textBox41->TabIndex = 61;
			this->textBox41->Text = L"1";
			// 
			// textBox42
			// 
			this->textBox42->Enabled = false;
			this->textBox42->Location = System::Drawing::Point(199, 258);
			this->textBox42->Margin = System::Windows::Forms::Padding(4);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(47, 29);
			this->textBox42->TabIndex = 60;
			this->textBox42->Text = L"0";
			// 
			// textBox43
			// 
			this->textBox43->Enabled = false;
			this->textBox43->Location = System::Drawing::Point(199, 226);
			this->textBox43->Margin = System::Windows::Forms::Padding(4);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(47, 29);
			this->textBox43->TabIndex = 59;
			this->textBox43->Text = L"1";
			// 
			// textBox44
			// 
			this->textBox44->Enabled = false;
			this->textBox44->Location = System::Drawing::Point(199, 194);
			this->textBox44->Margin = System::Windows::Forms::Padding(4);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(47, 29);
			this->textBox44->TabIndex = 58;
			this->textBox44->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(208, 34);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(26, 25);
			this->label16->TabIndex = 57;
			this->label16->Text = L"w";
			// 
			// textBox45
			// 
			this->textBox45->Enabled = false;
			this->textBox45->Location = System::Drawing::Point(199, 161);
			this->textBox45->Margin = System::Windows::Forms::Padding(4);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(47, 29);
			this->textBox45->TabIndex = 56;
			this->textBox45->Text = L"1";
			// 
			// textBox46
			// 
			this->textBox46->Enabled = false;
			this->textBox46->Location = System::Drawing::Point(199, 129);
			this->textBox46->Margin = System::Windows::Forms::Padding(4);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(47, 29);
			this->textBox46->TabIndex = 55;
			this->textBox46->Text = L"0";
			// 
			// textBox47
			// 
			this->textBox47->Enabled = false;
			this->textBox47->Location = System::Drawing::Point(199, 97);
			this->textBox47->Margin = System::Windows::Forms::Padding(4);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(47, 29);
			this->textBox47->TabIndex = 54;
			this->textBox47->Text = L"1";
			// 
			// textBox48
			// 
			this->textBox48->Enabled = false;
			this->textBox48->Location = System::Drawing::Point(199, 65);
			this->textBox48->Margin = System::Windows::Forms::Padding(4);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(47, 29);
			this->textBox48->TabIndex = 53;
			this->textBox48->Text = L"0";
			// 
			// textBox21
			// 
			this->textBox21->Enabled = false;
			this->textBox21->Location = System::Drawing::Point(152, 290);
			this->textBox21->Margin = System::Windows::Forms::Padding(4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(47, 29);
			this->textBox21->TabIndex = 48;
			this->textBox21->Text = L"1";
			// 
			// textBox22
			// 
			this->textBox22->Enabled = false;
			this->textBox22->Location = System::Drawing::Point(152, 258);
			this->textBox22->Margin = System::Windows::Forms::Padding(4);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(47, 29);
			this->textBox22->TabIndex = 47;
			this->textBox22->Text = L"1";
			// 
			// textBox23
			// 
			this->textBox23->Enabled = false;
			this->textBox23->Location = System::Drawing::Point(152, 226);
			this->textBox23->Margin = System::Windows::Forms::Padding(4);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(47, 29);
			this->textBox23->TabIndex = 46;
			this->textBox23->Text = L"0";
			// 
			// textBox24
			// 
			this->textBox24->Enabled = false;
			this->textBox24->Location = System::Drawing::Point(152, 194);
			this->textBox24->Margin = System::Windows::Forms::Padding(4);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(47, 29);
			this->textBox24->TabIndex = 45;
			this->textBox24->Text = L"0";
			// 
			// textBox25
			// 
			this->textBox25->Enabled = false;
			this->textBox25->Location = System::Drawing::Point(100, 290);
			this->textBox25->Margin = System::Windows::Forms::Padding(4);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(57, 29);
			this->textBox25->TabIndex = 44;
			this->textBox25->Text = L"1";
			// 
			// textBox26
			// 
			this->textBox26->Enabled = false;
			this->textBox26->Location = System::Drawing::Point(100, 258);
			this->textBox26->Margin = System::Windows::Forms::Padding(4);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(57, 29);
			this->textBox26->TabIndex = 43;
			this->textBox26->Text = L"1";
			// 
			// textBox27
			// 
			this->textBox27->Enabled = false;
			this->textBox27->Location = System::Drawing::Point(100, 226);
			this->textBox27->Margin = System::Windows::Forms::Padding(4);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(57, 29);
			this->textBox27->TabIndex = 42;
			this->textBox27->Text = L"1";
			// 
			// textBox28
			// 
			this->textBox28->Enabled = false;
			this->textBox28->Location = System::Drawing::Point(100, 194);
			this->textBox28->Margin = System::Windows::Forms::Padding(4);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(57, 29);
			this->textBox28->TabIndex = 41;
			this->textBox28->Text = L"1";
			// 
			// textBox29
			// 
			this->textBox29->Enabled = false;
			this->textBox29->Location = System::Drawing::Point(49, 290);
			this->textBox29->Margin = System::Windows::Forms::Padding(4);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(52, 29);
			this->textBox29->TabIndex = 40;
			this->textBox29->Text = L"0";
			// 
			// textBox30
			// 
			this->textBox30->Enabled = false;
			this->textBox30->Location = System::Drawing::Point(49, 258);
			this->textBox30->Margin = System::Windows::Forms::Padding(4);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(52, 29);
			this->textBox30->TabIndex = 39;
			this->textBox30->Text = L"0";
			// 
			// textBox31
			// 
			this->textBox31->Enabled = false;
			this->textBox31->Location = System::Drawing::Point(49, 226);
			this->textBox31->Margin = System::Windows::Forms::Padding(4);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(52, 29);
			this->textBox31->TabIndex = 38;
			this->textBox31->Text = L"0";
			// 
			// textBox32
			// 
			this->textBox32->Enabled = false;
			this->textBox32->Location = System::Drawing::Point(49, 194);
			this->textBox32->Margin = System::Windows::Forms::Padding(4);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(52, 29);
			this->textBox32->TabIndex = 37;
			this->textBox32->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(287, 34);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 25);
			this->label5->TabIndex = 32;
			this->label5->Text = L"f";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(159, 34);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 25);
			this->label1->TabIndex = 31;
			this->label1->Text = L"z";
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(152, 161);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(47, 29);
			this->textBox9->TabIndex = 30;
			this->textBox9->Text = L"1";
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(152, 129);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(47, 29);
			this->textBox10->TabIndex = 29;
			this->textBox10->Text = L"1";
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(152, 97);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(47, 29);
			this->textBox11->TabIndex = 28;
			this->textBox11->Text = L"0";
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(152, 65);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(47, 29);
			this->textBox12->TabIndex = 27;
			this->textBox12->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(100, 161);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(57, 29);
			this->textBox5->TabIndex = 26;
			this->textBox5->Text = L"0";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(100, 129);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(57, 29);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(100, 97);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(57, 29);
			this->textBox7->TabIndex = 24;
			this->textBox7->Text = L"0";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(100, 65);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(57, 29);
			this->textBox8->TabIndex = 23;
			this->textBox8->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(49, 161);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(52, 29);
			this->textBox4->TabIndex = 22;
			this->textBox4->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(49, 129);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(52, 29);
			this->textBox3->TabIndex = 21;
			this->textBox3->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(49, 97);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(52, 29);
			this->textBox2->TabIndex = 20;
			this->textBox2->Text = L"0";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(49, 65);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(52, 29);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(159, 34);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 25);
			this->label4->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(104, 34);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 25);
			this->label3->TabIndex = 17;
			this->label3->Text = L"y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(60, 34);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 25);
			this->label2->TabIndex = 16;
			this->label2->Text = L"x";
			// 
			// textBox36
			// 
			this->textBox36->Enabled = false;
			this->textBox36->Location = System::Drawing::Point(133, 112);
			this->textBox36->Margin = System::Windows::Forms::Padding(4);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(53, 29);
			this->textBox36->TabIndex = 9;
			// 
			// textBox35
			// 
			this->textBox35->Enabled = false;
			this->textBox35->Location = System::Drawing::Point(212, 112);
			this->textBox35->Margin = System::Windows::Forms::Padding(4);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(54, 29);
			this->textBox35->TabIndex = 10;
			// 
			// textBox34
			// 
			this->textBox34->Enabled = false;
			this->textBox34->Location = System::Drawing::Point(133, 158);
			this->textBox34->Margin = System::Windows::Forms::Padding(4);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(53, 29);
			this->textBox34->TabIndex = 11;
			// 
			// textBox33
			// 
			this->textBox33->Enabled = false;
			this->textBox33->Location = System::Drawing::Point(212, 158);
			this->textBox33->Margin = System::Windows::Forms::Padding(4);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(53, 29);
			this->textBox33->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(85, 115);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 24);
			this->label9->TabIndex = 13;
			this->label9->Text = L"x\'";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(146, 65);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 24);
			this->label8->TabIndex = 14;
			this->label8->Text = L"z\'";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(230, 65);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 24);
			this->label6->TabIndex = 15;
			this->label6->Text = L"z\'";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(85, 161);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 24);
			this->label7->TabIndex = 16;
			this->label7->Text = L"x\'";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orchid;
			this->button1->Location = System::Drawing::Point(510, 161);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 45);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Operacion4::button1_Click);
			// 
			// textBox40
			// 
			this->textBox40->Enabled = false;
			this->textBox40->Location = System::Drawing::Point(291, 112);
			this->textBox40->Margin = System::Windows::Forms::Padding(4);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(53, 29);
			this->textBox40->TabIndex = 18;
			// 
			// textBox39
			// 
			this->textBox39->Enabled = false;
			this->textBox39->Location = System::Drawing::Point(369, 112);
			this->textBox39->Margin = System::Windows::Forms::Padding(4);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(53, 29);
			this->textBox39->TabIndex = 19;
			// 
			// textBox38
			// 
			this->textBox38->Enabled = false;
			this->textBox38->Location = System::Drawing::Point(291, 158);
			this->textBox38->Margin = System::Windows::Forms::Padding(4);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(53, 29);
			this->textBox38->TabIndex = 20;
			// 
			// textBox37
			// 
			this->textBox37->Enabled = false;
			this->textBox37->Location = System::Drawing::Point(369, 158);
			this->textBox37->Margin = System::Windows::Forms::Padding(4);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(53, 29);
			this->textBox37->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(310, 65);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 24);
			this->label11->TabIndex = 22;
			this->label11->Text = L"z";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(390, 65);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 24);
			this->label10->TabIndex = 23;
			this->label10->Text = L"z";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(146, 293);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(28, 24);
			this->label15->TabIndex = 24;
			this->label15->Text = L"w\'";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(229, 293);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(24, 24);
			this->label14->TabIndex = 25;
			this->label14->Text = L"w";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(305, 293);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(24, 24);
			this->label13->TabIndex = 26;
			this->label13->Text = L"w";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(381, 293);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 24);
			this->label12->TabIndex = 27;
			this->label12->Text = L"w\'";
			// 
			// textBox96
			// 
			this->textBox96->Enabled = false;
			this->textBox96->Location = System::Drawing::Point(133, 200);
			this->textBox96->Margin = System::Windows::Forms::Padding(4);
			this->textBox96->Name = L"textBox96";
			this->textBox96->Size = System::Drawing::Size(53, 29);
			this->textBox96->TabIndex = 28;
			// 
			// textBox95
			// 
			this->textBox95->Enabled = false;
			this->textBox95->Location = System::Drawing::Point(212, 200);
			this->textBox95->Margin = System::Windows::Forms::Padding(4);
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(53, 29);
			this->textBox95->TabIndex = 29;
			// 
			// textBox94
			// 
			this->textBox94->Enabled = false;
			this->textBox94->Location = System::Drawing::Point(133, 245);
			this->textBox94->Margin = System::Windows::Forms::Padding(4);
			this->textBox94->Name = L"textBox94";
			this->textBox94->Size = System::Drawing::Size(53, 29);
			this->textBox94->TabIndex = 30;
			// 
			// textBox93
			// 
			this->textBox93->Enabled = false;
			this->textBox93->Location = System::Drawing::Point(212, 245);
			this->textBox93->Margin = System::Windows::Forms::Padding(4);
			this->textBox93->Name = L"textBox93";
			this->textBox93->Size = System::Drawing::Size(53, 29);
			this->textBox93->TabIndex = 31;
			// 
			// textBox92
			// 
			this->textBox92->Enabled = false;
			this->textBox92->Location = System::Drawing::Point(291, 200);
			this->textBox92->Margin = System::Windows::Forms::Padding(4);
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(53, 29);
			this->textBox92->TabIndex = 32;
			// 
			// textBox91
			// 
			this->textBox91->Enabled = false;
			this->textBox91->Location = System::Drawing::Point(369, 200);
			this->textBox91->Margin = System::Windows::Forms::Padding(4);
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(53, 29);
			this->textBox91->TabIndex = 33;
			// 
			// textBox90
			// 
			this->textBox90->Enabled = false;
			this->textBox90->Location = System::Drawing::Point(291, 245);
			this->textBox90->Margin = System::Windows::Forms::Padding(4);
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(53, 29);
			this->textBox90->TabIndex = 34;
			// 
			// textBox89
			// 
			this->textBox89->Enabled = false;
			this->textBox89->Location = System::Drawing::Point(369, 245);
			this->textBox89->Margin = System::Windows::Forms::Padding(4);
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(53, 29);
			this->textBox89->TabIndex = 35;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(85, 199);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(20, 24);
			this->label18->TabIndex = 36;
			this->label18->Text = L"x";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(85, 246);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 24);
			this->label17->TabIndex = 37;
			this->label17->Text = L"x";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(440, 115);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(23, 24);
			this->label22->TabIndex = 38;
			this->label22->Text = L"y\'";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(440, 161);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(19, 24);
			this->label21->TabIndex = 39;
			this->label21->Text = L"y";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(440, 199);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 24);
			this->label20->TabIndex = 40;
			this->label20->Text = L"y";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(440, 244);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 24);
			this->label19->TabIndex = 41;
			this->label19->Text = L"y\'";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::LightPink;
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->textBox89);
			this->groupBox2->Controls->Add(this->textBox90);
			this->groupBox2->Controls->Add(this->textBox91);
			this->groupBox2->Controls->Add(this->textBox92);
			this->groupBox2->Controls->Add(this->textBox93);
			this->groupBox2->Controls->Add(this->textBox94);
			this->groupBox2->Controls->Add(this->textBox95);
			this->groupBox2->Controls->Add(this->textBox96);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox37);
			this->groupBox2->Controls->Add(this->textBox38);
			this->groupBox2->Controls->Add(this->textBox39);
			this->groupBox2->Controls->Add(this->textBox40);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox33);
			this->groupBox2->Controls->Add(this->textBox34);
			this->groupBox2->Controls->Add(this->textBox35);
			this->groupBox2->Controls->Add(this->textBox36);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(489, 18);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(737, 379);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Mapa de Karnaugh ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(485, 432);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(190, 22);
			this->label23->TabIndex = 5;
			this->label23->Text = L"Funcion booleana: \r\n";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(490, 500);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 20);
			this->label24->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1153, 585);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 43);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Operacion4::button2_Click_1);
			// 
			// Operacion4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(1282, 653);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Operacion4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mapa de Karnaugh con 4 variables";
			this->TopMost = true;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		g->Clear(Color::Pink);
		this->textBox36->Text = this->comboBox1->Text;
		this->textBox35->Text = this->comboBox2->Text;
		this->textBox39->Text = this->comboBox3->Text;
		this->textBox40->Text = this->comboBox4->Text;
		this->textBox34->Text = this->comboBox5->Text;
		this->textBox33->Text = this->comboBox6->Text;
		this->textBox37->Text = this->comboBox7->Text;
		this->textBox38->Text = this->comboBox8->Text;
		this->textBox94->Text = this->comboBox9->Text;
		this->textBox93->Text = this->comboBox10->Text;
		this->textBox89->Text = this->comboBox11->Text;
		this->textBox90->Text = this->comboBox12->Text;
		this->textBox96->Text = this->comboBox13->Text;
		this->textBox95->Text = this->comboBox14->Text;
		this->textBox91->Text = this->comboBox15->Text;
		this->textBox92->Text = this->comboBox16->Text;
		agrupamiento = new Agrupamiento(Convert::ToInt32(this->textBox36->Text), Convert::ToInt32(this->textBox36->Location.X), Convert::ToInt32(this->textBox36->Location.Y), Convert::ToInt32(this->textBox35->Text), Convert::ToInt32(this->textBox35->Location.X), Convert::ToInt32(this->textBox35->Location.Y), Convert::ToInt32(this->textBox40->Text), Convert::ToInt32(this->textBox40->Location.X), Convert::ToInt32(this->textBox40->Location.Y), Convert::ToInt32(this->textBox39->Text), Convert::ToInt32(this->textBox39->Location.X), Convert::ToInt32(this->textBox39->Location.Y), Convert::ToInt32(this->textBox34->Text), Convert::ToInt32(this->textBox34->Location.X), Convert::ToInt32(this->textBox34->Location.Y), Convert::ToInt32(this->textBox33->Text), Convert::ToInt32(this->textBox33->Location.X), Convert::ToInt32(this->textBox33->Location.Y), Convert::ToInt32(this->textBox38->Text), Convert::ToInt32(this->textBox38->Location.X), Convert::ToInt32(this->textBox38->Location.Y), Convert::ToInt32(this->textBox37->Text), Convert::ToInt32(this->textBox37->Location.X), Convert::ToInt32(this->textBox37->Location.Y), Convert::ToInt32(this->textBox96->Text), Convert::ToInt32(this->textBox96->Location.X), Convert::ToInt32(this->textBox96->Location.Y), Convert::ToInt32(this->textBox95->Text), Convert::ToInt32(this->textBox95->Location.X), Convert::ToInt32(this->textBox95->Location.Y), Convert::ToInt32(this->textBox92->Text), Convert::ToInt32(this->textBox92->Location.X), Convert::ToInt32(this->textBox92->Location.Y), Convert::ToInt32(this->textBox91->Text), Convert::ToInt32(this->textBox91->Location.X), Convert::ToInt32(this->textBox91->Location.Y), Convert::ToInt32(this->textBox94->Text), Convert::ToInt32(this->textBox94->Location.X), Convert::ToInt32(this->textBox94->Location.Y), Convert::ToInt32(this->textBox93->Text), Convert::ToInt32(this->textBox93->Location.X), Convert::ToInt32(this->textBox93->Location.Y), Convert::ToInt32(this->textBox90->Text), Convert::ToInt32(this->textBox90->Location.X), Convert::ToInt32(this->textBox90->Location.Y), Convert::ToInt32(this->textBox89->Text), Convert::ToInt32(this->textBox89->Location.X), Convert::ToInt32(this->textBox89->Location.Y));

		agrupamiento->buscar4(g);
		agrupamiento->buscar3(g);
		agrupamiento->buscar2(g);
		agrupamiento->buscarEx(g);
		agrupamiento->buscarNo();
		
		
		String^ aux = gcnew String(agrupamiento->getFuncion().c_str());
		this->label24->Text = aux;
	}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
