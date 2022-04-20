#pragma once
#include "Dibujarmapa.h"
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
	public:
		Operacion(void)
		{
			InitializeComponent();
			g = panel1->CreateGraphics();
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
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(50, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(83, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(137, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"f";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(42, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(40, 24);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(42, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 24);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(42, 111);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 24);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"1";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(42, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 24);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"1";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(80, 137);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 24);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"1";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(80, 111);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 24);
			this->textBox6->TabIndex = 10;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(80, 85);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 24);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"1";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(80, 59);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(44, 24);
			this->textBox8->TabIndex = 8;
			this->textBox8->Text = L"0";
			// 
			// groupBox1
			// 
			this->groupBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->groupBox1->BackColor = System::Drawing::Color::SteelBlue;
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
			this->groupBox1->Location = System::Drawing::Point(32, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(206, 208);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tabla de verdad";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox4->Location = System::Drawing::Point(130, 136);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(31, 25);
			this->comboBox4->TabIndex = 15;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox3->Location = System::Drawing::Point(130, 110);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(31, 25);
			this->comboBox3->TabIndex = 14;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox2->Location = System::Drawing::Point(130, 84);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(31, 25);
			this->comboBox2->TabIndex = 13;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox1->Location = System::Drawing::Point(130, 58);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(31, 25);
			this->comboBox1->TabIndex = 12;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::LightGreen;
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
			this->groupBox2->Location = System::Drawing::Point(280, 35);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(337, 288);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Mapa de Karnaugh ";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Operacion::groupBox2_Enter);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->labelmapa);
			this->panel1->Location = System::Drawing::Point(99, 136);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(86, 104);
			this->panel1->TabIndex = 10;
			// 
			// labelmapa
			// 
			this->labelmapa->AutoSize = true;
			this->labelmapa->Location = System::Drawing::Point(12, 7);
			this->labelmapa->Name = L"labelmapa";
			this->labelmapa->Size = System::Drawing::Size(0, 18);
			this->labelmapa->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button1->Location = System::Drawing::Point(236, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
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
			this->label7->Location = System::Drawing::Point(51, 87);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 18);
			this->label7->TabIndex = 7;
			this->label7->Text = L"x";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(160, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 18);
			this->label6->TabIndex = 6;
			this->label6->Text = L"y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(86, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 18);
			this->label5->TabIndex = 5;
			this->label5->Text = L"y\'";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"x\'";
			// 
			// textBox16
			// 
			this->textBox16->Enabled = false;
			this->textBox16->Location = System::Drawing::Point(142, 85);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(54, 24);
			this->textBox16->TabIndex = 3;
			// 
			// textBox15
			// 
			this->textBox15->Enabled = false;
			this->textBox15->Location = System::Drawing::Point(72, 85);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(54, 24);
			this->textBox15->TabIndex = 2;
			// 
			// textBox14
			// 
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(142, 59);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(54, 24);
			this->textBox14->TabIndex = 1;
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(72, 59);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(54, 24);
			this->textBox13->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(636, 624);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 35);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Operacion::button2_Click);
			// 
			// Operacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(662, 531);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Operacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Operacion";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox13->Text = this->comboBox1->Text;
		this->textBox14->Text = this->comboBox2->Text;
		this->textBox15->Text = this->comboBox3->Text;
		this->textBox16->Text = this->comboBox4->Text;


		k = new Karnaugh(Convert::ToInt32(comboBox1->Text), Convert::ToInt32(comboBox2->Text), Convert::ToInt32(comboBox3->Text), Convert::ToInt32(comboBox4->Text));
		k->dibujarcuadrado(g);
		labelmapa->Text = this->comboBox1->Text + "   " + this->comboBox2->Text +"\n\n"+ this->comboBox3->Text + "   " + this->comboBox4->Text;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
