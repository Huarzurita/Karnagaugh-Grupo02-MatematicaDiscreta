#pragma once

namespace Grupo02Karnagaugh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Operacion3
	/// </summary>
	public ref class Operacion3 : public System::Windows::Forms::Form
	{
	public:
		Operacion3(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Operacion3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
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
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
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
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::TextBox^ textBox39;
	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::Button^ button2;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->textBox18);
			this->groupBox1->Controls->Add(this->textBox19);
			this->groupBox1->Controls->Add(this->textBox20);
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
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->textBox16);
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
			this->groupBox1->Location = System::Drawing::Point(33, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(228, 297);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tabla de verdad";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(149, 248);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(36, 20);
			this->textBox17->TabIndex = 52;
			this->textBox17->Text = L"1";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(149, 222);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(36, 20);
			this->textBox18->TabIndex = 51;
			this->textBox18->Text = L"0";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(149, 196);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(36, 20);
			this->textBox19->TabIndex = 50;
			this->textBox19->Text = L"1";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(149, 170);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(36, 20);
			this->textBox20->TabIndex = 49;
			this->textBox20->Text = L"1";
			// 
			// textBox21
			// 
			this->textBox21->Enabled = false;
			this->textBox21->Location = System::Drawing::Point(114, 248);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(36, 20);
			this->textBox21->TabIndex = 48;
			this->textBox21->Text = L"1";
			// 
			// textBox22
			// 
			this->textBox22->Enabled = false;
			this->textBox22->Location = System::Drawing::Point(114, 222);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(36, 20);
			this->textBox22->TabIndex = 47;
			this->textBox22->Text = L"0";
			// 
			// textBox23
			// 
			this->textBox23->Enabled = false;
			this->textBox23->Location = System::Drawing::Point(114, 196);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(36, 20);
			this->textBox23->TabIndex = 46;
			this->textBox23->Text = L"1";
			// 
			// textBox24
			// 
			this->textBox24->Enabled = false;
			this->textBox24->Location = System::Drawing::Point(114, 170);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(36, 20);
			this->textBox24->TabIndex = 45;
			this->textBox24->Text = L"0";
			// 
			// textBox25
			// 
			this->textBox25->Enabled = false;
			this->textBox25->Location = System::Drawing::Point(75, 248);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(44, 20);
			this->textBox25->TabIndex = 44;
			this->textBox25->Text = L"1";
			// 
			// textBox26
			// 
			this->textBox26->Enabled = false;
			this->textBox26->Location = System::Drawing::Point(75, 222);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(44, 20);
			this->textBox26->TabIndex = 43;
			this->textBox26->Text = L"1";
			// 
			// textBox27
			// 
			this->textBox27->Enabled = false;
			this->textBox27->Location = System::Drawing::Point(75, 196);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(44, 20);
			this->textBox27->TabIndex = 42;
			this->textBox27->Text = L"0";
			// 
			// textBox28
			// 
			this->textBox28->Enabled = false;
			this->textBox28->Location = System::Drawing::Point(75, 170);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(44, 20);
			this->textBox28->TabIndex = 41;
			this->textBox28->Text = L"0";
			// 
			// textBox29
			// 
			this->textBox29->Enabled = false;
			this->textBox29->Location = System::Drawing::Point(37, 248);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(40, 20);
			this->textBox29->TabIndex = 40;
			this->textBox29->Text = L"1";
			// 
			// textBox30
			// 
			this->textBox30->Enabled = false;
			this->textBox30->Location = System::Drawing::Point(37, 222);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(40, 20);
			this->textBox30->TabIndex = 39;
			this->textBox30->Text = L"1";
			// 
			// textBox31
			// 
			this->textBox31->Enabled = false;
			this->textBox31->Location = System::Drawing::Point(37, 196);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(40, 20);
			this->textBox31->TabIndex = 38;
			this->textBox31->Text = L"1";
			// 
			// textBox32
			// 
			this->textBox32->Enabled = false;
			this->textBox32->Location = System::Drawing::Point(37, 170);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(40, 20);
			this->textBox32->TabIndex = 37;
			this->textBox32->Text = L"1";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(149, 143);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(36, 20);
			this->textBox13->TabIndex = 36;
			this->textBox13->Text = L"1";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(149, 117);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(36, 20);
			this->textBox14->TabIndex = 35;
			this->textBox14->Text = L"0";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(149, 91);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(36, 20);
			this->textBox15->TabIndex = 34;
			this->textBox15->Text = L"1";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(149, 65);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(36, 20);
			this->textBox16->TabIndex = 33;
			this->textBox16->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(156, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 20);
			this->label5->TabIndex = 32;
			this->label5->Text = L"f";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(119, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 20);
			this->label1->TabIndex = 31;
			this->label1->Text = L"z";
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(114, 143);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(36, 20);
			this->textBox9->TabIndex = 30;
			this->textBox9->Text = L"1";
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(114, 117);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(36, 20);
			this->textBox10->TabIndex = 29;
			this->textBox10->Text = L"0";
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(114, 91);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(36, 20);
			this->textBox11->TabIndex = 28;
			this->textBox11->Text = L"1";
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(114, 65);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(36, 20);
			this->textBox12->TabIndex = 27;
			this->textBox12->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(75, 143);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 20);
			this->textBox5->TabIndex = 26;
			this->textBox5->Text = L"1";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(75, 117);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 20);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"1";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(75, 91);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 20);
			this->textBox7->TabIndex = 24;
			this->textBox7->Text = L"0";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(75, 65);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(44, 20);
			this->textBox8->TabIndex = 23;
			this->textBox8->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(37, 143);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 20);
			this->textBox4->TabIndex = 22;
			this->textBox4->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(37, 117);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 20);
			this->textBox3->TabIndex = 21;
			this->textBox3->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(37, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 20);
			this->textBox2->TabIndex = 20;
			this->textBox2->Text = L"0";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(37, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(40, 20);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(119, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(78, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"x";
			// 
			// groupBox2
			// 
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
			this->groupBox2->Location = System::Drawing::Point(280, 48);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(375, 180);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Mapa de Karnaugh ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(185, 115);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 18);
			this->label12->TabIndex = 27;
			this->label12->Text = L"z\'";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(142, 115);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(16, 18);
			this->label13->TabIndex = 26;
			this->label13->Text = L"z";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(91, 115);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(16, 18);
			this->label14->TabIndex = 25;
			this->label14->Text = L"z";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(48, 115);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 18);
			this->label15->TabIndex = 24;
			this->label15->Text = L"z\'";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(185, 45);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 18);
			this->label10->TabIndex = 23;
			this->label10->Text = L"y";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(142, 45);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 18);
			this->label11->TabIndex = 22;
			this->label11->Text = L"y";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(175, 92);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(41, 20);
			this->textBox37->TabIndex = 21;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(128, 92);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(41, 20);
			this->textBox38->TabIndex = 20;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(175, 66);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(41, 20);
			this->textBox39->TabIndex = 19;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(128, 66);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(41, 20);
			this->textBox40->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(276, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Operacion3::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 18);
			this->label7->TabIndex = 16;
			this->label7->Text = L"x";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(91, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 18);
			this->label6->TabIndex = 15;
			this->label6->Text = L"y\'";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(48, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 18);
			this->label8->TabIndex = 14;
			this->label8->Text = L"y\'";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(13, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 18);
			this->label9->TabIndex = 13;
			this->label9->Text = L"x\'";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(81, 92);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(41, 20);
			this->textBox33->TabIndex = 12;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(34, 92);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(41, 20);
			this->textBox34->TabIndex = 11;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(81, 66);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(41, 20);
			this->textBox35->TabIndex = 10;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(34, 66);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(41, 20);
			this->textBox36->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(586, 553);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Operacion3::button2_Click);
			// 
			// Operacion3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 600);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Operacion3";
			this->Text = L"Operacion 3";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox36->Text = this->textBox16->Text;
		this->textBox35->Text = this->textBox15->Text;
		this->textBox40->Text = this->textBox13->Text;
		this->textBox39->Text = this->textBox14->Text;
		this->textBox34->Text = this->textBox20->Text;
		this->textBox33->Text = this->textBox19->Text;
		this->textBox38->Text = this->textBox17->Text;
		this->textBox37->Text = this->textBox18->Text;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
