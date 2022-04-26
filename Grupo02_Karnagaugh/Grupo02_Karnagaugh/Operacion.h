#pragma once
#include "Dibujarmapa.h"
#include "MapaDeKarnaugh.h"
#include "iostream"
#include "string"
namespace Grupo02Karnagaugh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Operacion
	/// </summary>
	public ref class Operacion : public System::Windows::Forms::Form
	{
	private:
		MapaDeKarnaugh* m;

	public:
		Operacion(void)
		{
			InitializeComponent();
			g = panel1->CreateGraphics();
			m = new MapaDeKarnaugh();
		}
	private:
		Graphics^ g;
	private: System::Windows::Forms::Panel^ panel1;
		   Karnaugh* k;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Operacion()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ labelmapa;
	private: System::Windows::Forms::Label^ lblgrupo;
	private: System::Windows::Forms::Label^ lblfuncion;
	private: System::Windows::Forms::Label^ lblfsimplificada;
	private: System::Windows::Forms::Label^ lblf3;
	private: System::Windows::Forms::Label^ lblf2;
	private: System::Windows::Forms::Label^ lblf1;
	private: System::Windows::Forms::Label^ lblf0;

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
			this->lblf3 = (gcnew System::Windows::Forms::Label());
			this->lblf2 = (gcnew System::Windows::Forms::Label());
			this->lblf1 = (gcnew System::Windows::Forms::Label());
			this->lblf0 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelmapa = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblgrupo = (gcnew System::Windows::Forms::Label());
			this->lblfuncion = (gcnew System::Windows::Forms::Label());
			this->lblfsimplificada = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblf3
			// 
			this->lblf3->AutoSize = true;
			this->lblf3->BackColor = System::Drawing::Color::LightGreen;
			this->lblf3->ForeColor = System::Drawing::Color::Red;
			this->lblf3->Location = System::Drawing::Point(307, 117);
			this->lblf3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblf3->Name = L"lblf3";
			this->lblf3->Size = System::Drawing::Size(23, 22);
			this->lblf3->TabIndex = 12;
			this->lblf3->Text = L"3";
			// 
			// lblf2
			// 
			this->lblf2->AutoSize = true;
			this->lblf2->BackColor = System::Drawing::Color::LightGreen;
			this->lblf2->ForeColor = System::Drawing::Color::Red;
			this->lblf2->Location = System::Drawing::Point(187, 116);
			this->lblf2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblf2->Name = L"lblf2";
			this->lblf2->Size = System::Drawing::Size(23, 22);
			this->lblf2->TabIndex = 11;
			this->lblf2->Text = L"2";
			// 
			// lblf1
			// 
			this->lblf1->AutoSize = true;
			this->lblf1->BackColor = System::Drawing::Color::LightGreen;
			this->lblf1->ForeColor = System::Drawing::Color::Red;
			this->lblf1->Location = System::Drawing::Point(308, 77);
			this->lblf1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblf1->Name = L"lblf1";
			this->lblf1->Size = System::Drawing::Size(22, 22);
			this->lblf1->TabIndex = 10;
			this->lblf1->Text = L"1";
			// 
			// lblf0
			// 
			this->lblf0->AutoSize = true;
			this->lblf0->BackColor = System::Drawing::Color::LightGreen;
			this->lblf0->ForeColor = System::Drawing::Color::Red;
			this->lblf0->Location = System::Drawing::Point(187, 76);
			this->lblf0->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblf0->Name = L"lblf0";
			this->lblf0->Size = System::Drawing::Size(23, 22);
			this->lblf0->TabIndex = 9;
			this->lblf0->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 60);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(187, 60);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(297, 60);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"f";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(51, 101);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 29);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(51, 140);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 29);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(51, 182);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 29);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"1";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(51, 224);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(86, 29);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"1";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(155, 224);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(86, 29);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"1";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(155, 182);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(86, 29);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(155, 140);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(86, 29);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"1";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(155, 101);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(86, 29);
			this->textBox8->TabIndex = 8;
			this->textBox8->Text = L"0";
			// 
			// groupBox1
			// 
			this->groupBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->groupBox1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
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
			this->groupBox1->Location = System::Drawing::Point(57, 43);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(427, 343);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tabla de verdad";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox4->Location = System::Drawing::Point(262, 224);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(86, 29);
			this->comboBox4->TabIndex = 15;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox3->Location = System::Drawing::Point(262, 182);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(86, 29);
			this->comboBox3->TabIndex = 14;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox2->Location = System::Drawing::Point(262, 140);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(86, 29);
			this->comboBox2->TabIndex = 13;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox1->Location = System::Drawing::Point(262, 101);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(86, 29);
			this->comboBox1->TabIndex = 12;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::LightGreen;
			this->groupBox2->Controls->Add(this->lblf3);
			this->groupBox2->Controls->Add(this->lblf2);
			this->groupBox2->Controls->Add(this->lblf1);
			this->groupBox2->Controls->Add(this->lblf0);
			this->groupBox2->Controls->Add(this->panel1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(547, 43);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(658, 343);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Mapa de Karnaugh ";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->labelmapa);
			this->panel1->Location = System::Drawing::Point(132, 167);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(115, 128);
			this->panel1->TabIndex = 10;
			// 
			// labelmapa
			// 
			this->labelmapa->AutoSize = true;
			this->labelmapa->Location = System::Drawing::Point(16, 9);
			this->labelmapa->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelmapa->Name = L"labelmapa";
			this->labelmapa->Size = System::Drawing::Size(0, 22);
			this->labelmapa->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button1->Location = System::Drawing::Point(400, 85);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 45);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Operacion::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(59, 115);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 24);
			this->label7->TabIndex = 7;
			this->label7->Text = L"x";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(250, 40);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(131, 39);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"y\'";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(59, 75);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"x\'";
			// 
			// textBox16
			// 
			this->textBox16->Enabled = false;
			this->textBox16->Location = System::Drawing::Point(214, 113);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(86, 29);
			this->textBox16->TabIndex = 3;
			// 
			// textBox15
			// 
			this->textBox15->Enabled = false;
			this->textBox15->Location = System::Drawing::Point(96, 113);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(86, 29);
			this->textBox15->TabIndex = 2;
			// 
			// textBox14
			// 
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(214, 73);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(86, 29);
			this->textBox14->TabIndex = 1;
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(96, 73);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(86, 29);
			this->textBox13->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1152, 597);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 43);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Operacion::button2_Click);
			// 
			// lblgrupo
			// 
			this->lblgrupo->AutoSize = true;
			this->lblgrupo->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblgrupo->Location = System::Drawing::Point(193, 416);
			this->lblgrupo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblgrupo->Name = L"lblgrupo";
			this->lblgrupo->Size = System::Drawing::Size(89, 28);
			this->lblgrupo->TabIndex = 18;
			this->lblgrupo->Text = L"Grupo";
			this->lblgrupo->Visible = false;
			// 
			// lblfuncion
			// 
			this->lblfuncion->AutoSize = true;
			this->lblfuncion->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblfuncion->Location = System::Drawing::Point(493, 556);
			this->lblfuncion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblfuncion->Name = L"lblfuncion";
			this->lblfuncion->Size = System::Drawing::Size(114, 28);
			this->lblfuncion->TabIndex = 19;
			this->lblfuncion->Text = L"Funcion";
			this->lblfuncion->Visible = false;
			// 
			// lblfsimplificada
			// 
			this->lblfsimplificada->AutoSize = true;
			this->lblfsimplificada->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblfsimplificada->Location = System::Drawing::Point(193, 556);
			this->lblfsimplificada->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblfsimplificada->Name = L"lblfsimplificada";
			this->lblfsimplificada->Size = System::Drawing::Size(283, 28);
			this->lblfsimplificada->TabIndex = 20;
			this->lblfsimplificada->Text = L"Funcion simplificada:";
			this->lblfsimplificada->Visible = false;
			// 
			// Operacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(1282, 653);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lblfsimplificada);
			this->Controls->Add(this->lblfuncion);
			this->Controls->Add(this->lblgrupo);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Operacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mapa de Karnaugh con 2 variables";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Labels
		this->lblgrupo->Text = "";
		this->lblfuncion->Text = "";
		this->lblgrupo->Visible = false;
		this->lblfsimplificada->Visible = false;
		this->lblfuncion->Visible = false;

		//A partir de la tabla de verdad
		this->textBox13->Text = this->comboBox1->Text;
		this->textBox14->Text = this->comboBox2->Text;
		this->textBox15->Text = this->comboBox3->Text;
		this->textBox16->Text = this->comboBox4->Text;
		g->Clear(Color::LightGreen);
		k = new Karnaugh(Convert::ToInt32(comboBox1->Text), Convert::ToInt32(comboBox2->Text), Convert::ToInt32(comboBox3->Text), Convert::ToInt32(comboBox4->Text));
		k->dibujarcuadrado(g);
		labelmapa->Text = this->comboBox1->Text + "   " + this->comboBox2->Text +"\n\n"+ this->comboBox3->Text + "   " + this->comboBox4->Text;
		
		//crear matriz
		int** matriz;
		matriz = new int* [2];
		for (int i = 0; i < 2; i++) {
			matriz[i] = new int[2];
		};
		m->setcantidad1(0);
		//guardar datos en la matriz
		if (this->textBox13->Text == "" || this->textBox14->Text == "" || this->textBox15->Text == "" || this->textBox16->Text == "") {
			this->lblgrupo->Text = "Error, coloca todos los datos";
			this->lblgrupo->Visible = true;
		}
		else {
			matriz[0][0] = Convert::ToInt32(this->comboBox1->Text);
			matriz[0][1] = Convert::ToInt32(this->comboBox2->Text);
			matriz[1][0] = Convert::ToInt32(this->comboBox3->Text);
			matriz[1][1] = Convert::ToInt32(this->comboBox4->Text);
			m->setmatriz(matriz);
			m->generarMatrizPF();
			agrupar();
			this->lblgrupo->Visible = true;
			this->lblfsimplificada->Visible = true;
			this->lblfuncion->Visible = true;
		}
	}
	private: void agrupar() {
		m->calcularCantidad1();
		bool band = false;
		switch (m->getcantidad1()) {
		case 4:
			this->lblgrupo->Text = "Grupo de 4: ";
			this->lblgrupo->Text += m->getmposicion()[0][0] + ", " + m->getmposicion()[0][1] + ", " + m->getmposicion()[1][0] + ", " + m->getmposicion()[1][1];
			this->lblfuncion->Text = "1";
			break;
		case 3:
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					//horizontal
					if ((j < 1) && (m->getmatriz()[i][j] == 1) && (m->getmatriz()[i][j+1] == 1)) {
						this->lblgrupo->Text += "\nGrupo de 2: " + m->getmposicion()[i][j] + ", " + m->getmposicion()[i][j+1];
						if (i == 0)this->lblfuncion->Text += "X'";
						if (i == 1)this->lblfuncion->Text += "X";
						if (!band) { this->lblfuncion->Text += " v "; band = true; }
					}
					//vertical
					if ((i < 1) && (m->getmatriz()[i][j] == 1) && (m->getmatriz()[i+1][j] == 1)) {
						this->lblgrupo->Text += "\nGrupo de 2: " + m->getmposicion()[i][j] + ", " + m->getmposicion()[i+1][j];
						if (j == 0)this->lblfuncion->Text += "Y'";
						if (j == 1)this->lblfuncion->Text += "Y";
						if (!band) { this->lblfuncion->Text += " v "; band = true; }
					}
				}
			}
			break;
		case 2:
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					//horizontal
					if ((j < 1) && (m->getmatriz()[i][j] == 1) && (m->getmatriz()[i][j + 1] == 1)) {
						this->lblgrupo->Text += "\nGrupo de 2: " + m->getmposicion()[i][j] + ", " + m->getmposicion()[i][j + 1];
						if (i == 0)this->lblfuncion->Text += "X'";
						if (i == 1)this->lblfuncion->Text += "X";
					}
					//vertical
					if ((i < 1) && (m->getmatriz()[i][j] == 1) && (m->getmatriz()[i + 1][j] == 1)) {
						this->lblgrupo->Text += "\nGrupo de 2: " + m->getmposicion()[i][j] + ", " + m->getmposicion()[i + 1][j];
						if (j == 0)this->lblfuncion->Text += "Y'";
						if (j == 1)this->lblfuncion->Text += "Y";
					}
					//diagonales
					if ((i < 1) && (j > 0) && (m->getmatriz()[i + 1][j] == 1) && (m->getmatriz()[i][j - 1] == 1)) {
						this->lblgrupo->Text += "\nGrupo de 2: " + m->getmposicion()[i + 1][j] + ", " + m->getmposicion()[i][j - 1];
						this->lblfuncion->Text = "(X' ^ Y') v (X ^ Y)";
					}
					if ((i < 1) && (j < 1) && (m->getmatriz()[i + 1][j] == 1) && (m->getmatriz()[i][j + 1] == 1)) {
						this->lblgrupo->Text += "\nGrupo de 2: " + m->getmposicion()[i + 1][j] + ", " + m->getmposicion()[i][j + 1];
						this->lblfuncion->Text = "(X' ^ Y) v (X ^ Y')";
					}
				}
			}
			break;
		case 1:
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					if (m->getmatriz()[i][j]==1) {
						this->lblgrupo->Text += "\nGrupo de 1: " + m->getmposicion()[i][j];
						if(m->getmposicion()[i][j]==0)this->lblfuncion->Text += "X' ^ Y'";
						if(m->getmposicion()[i][j]==1)this->lblfuncion->Text += "X' ^ Y";
						if(m->getmposicion()[i][j]==2)this->lblfuncion->Text += "X ^ Y'";
						if(m->getmposicion()[i][j]==3)this->lblfuncion->Text += "X ^ Y";
					}
				}
			}
			break;
		case 0:
			this->lblgrupo->Text = "No hay grupos";
			this->lblfuncion->Text = "0";
			break;
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
