#pragma once

namespace TP1V1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  nomeLanche;

	private: System::Windows::Forms::Button^  BotaoLanche;





	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  nomeBebida;










	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  BotaoBebida;










	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label26;

	private: System::Windows::Forms::Label^  label27;

	private: System::Windows::Forms::Label^  label28;

	private: System::Windows::Forms::Label^  label29;








	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::RadioButton^  LancheNVeg;


	private: System::Windows::Forms::RadioButton^  LancheVeg;



	private: System::Windows::Forms::RadioButton^  BebidaNDiet;


	private: System::Windows::Forms::RadioButton^  BebidaNGelada;
	private: System::Windows::Forms::RadioButton^  BebidaDiet;


	private: System::Windows::Forms::RadioButton^  BebidaGelada;

	private: System::Windows::Forms::Button^  BotaoSobremesa;
	private: System::Windows::Forms::RadioButton^  SobremesaNLac;


	private: System::Windows::Forms::RadioButton^  SobremesaLac;

	private: System::Windows::Forms::RadioButton^  SobremesaNDiet;

	private: System::Windows::Forms::RadioButton^  SobremesaDiet;

private: System::Windows::Forms::RadioButton^  SobremesaNGelada;

private: System::Windows::Forms::RadioButton^  SobremesaGelada;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  nomeSobremesa;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  tempo1Lanche;
private: System::Windows::Forms::TextBox^  tempo2Lanche;
private: System::Windows::Forms::TextBox^  tempo4Lanche;



	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  tempo3Lanche;

	private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::TextBox^  tempo1Bebida;
private: System::Windows::Forms::TextBox^  tempo2Bebida;
private: System::Windows::Forms::TextBox^  tempo4Bebida;



private: System::Windows::Forms::TextBox^  tempo3Bebida;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  tempo1Sobremesa;
private: System::Windows::Forms::TextBox^  tempo2Sobremesa;
private: System::Windows::Forms::TextBox^  tempo4Sobremesa;



	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  tempo3Sobremesa;




















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nomeLanche = (gcnew System::Windows::Forms::TextBox());
			this->BotaoBebida = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nomeBebida = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->BotaoLanche = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tempo1Lanche = (gcnew System::Windows::Forms::TextBox());
			this->tempo2Lanche = (gcnew System::Windows::Forms::TextBox());
			this->tempo4Lanche = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tempo3Lanche = (gcnew System::Windows::Forms::TextBox());
			this->LancheNVeg = (gcnew System::Windows::Forms::RadioButton());
			this->LancheVeg = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tempo1Bebida = (gcnew System::Windows::Forms::TextBox());
			this->tempo2Bebida = (gcnew System::Windows::Forms::TextBox());
			this->tempo4Bebida = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tempo3Bebida = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->BebidaNDiet = (gcnew System::Windows::Forms::RadioButton());
			this->BebidaNGelada = (gcnew System::Windows::Forms::RadioButton());
			this->BebidaDiet = (gcnew System::Windows::Forms::RadioButton());
			this->BebidaGelada = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tempo1Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->tempo2Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->tempo4Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tempo3Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->BotaoSobremesa = (gcnew System::Windows::Forms::Button());
			this->SobremesaNLac = (gcnew System::Windows::Forms::RadioButton());
			this->SobremesaLac = (gcnew System::Windows::Forms::RadioButton());
			this->SobremesaNDiet = (gcnew System::Windows::Forms::RadioButton());
			this->SobremesaDiet = (gcnew System::Windows::Forms::RadioButton());
			this->SobremesaNGelada = (gcnew System::Windows::Forms::RadioButton());
			this->SobremesaGelada = (gcnew System::Windows::Forms::RadioButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->nomeSobremesa = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(263, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Vegetariano\?";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(260, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nome";
			// 
			// nomeLanche
			// 
			this->nomeLanche->Location = System::Drawing::Point(322, 19);
			this->nomeLanche->Name = L"nomeLanche";
			this->nomeLanche->Size = System::Drawing::Size(132, 20);
			this->nomeLanche->TabIndex = 2;
			// 
			// BotaoBebida
			// 
			this->BotaoBebida->Location = System::Drawing::Point(279, 109);
			this->BotaoBebida->Name = L"BotaoBebida";
			this->BotaoBebida->Size = System::Drawing::Size(157, 23);
			this->BotaoBebida->TabIndex = 32;
			this->BotaoBebida->Text = L"Fazer Pedido";
			this->BotaoBebida->UseVisualStyleBackColor = true;
			this->BotaoBebida->Click += gcnew System::EventHandler(this, &MyForm::BotaoBebida_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(263, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Diet\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(263, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Gelada\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(263, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Nome";
			// 
			// nomeBebida
			// 
			this->nomeBebida->Location = System::Drawing::Point(322, 21);
			this->nomeBebida->Name = L"nomeBebida";
			this->nomeBebida->Size = System::Drawing::Size(132, 20);
			this->nomeBebida->TabIndex = 6;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(383, 480);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// BotaoLanche
			// 
			this->BotaoLanche->Location = System::Drawing::Point(279, 105);
			this->BotaoLanche->Name = L"BotaoLanche";
			this->BotaoLanche->Size = System::Drawing::Size(157, 23);
			this->BotaoLanche->TabIndex = 0;
			this->BotaoLanche->Text = L"Fazer Pedido";
			this->BotaoLanche->UseVisualStyleBackColor = true;
			this->BotaoLanche->Click += gcnew System::EventHandler(this, &MyForm::BotaoLanche_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Controls->Add(this->LancheNVeg);
			this->groupBox4->Controls->Add(this->LancheVeg);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->nomeLanche);
			this->groupBox4->Controls->Add(this->BotaoLanche);
			this->groupBox4->Location = System::Drawing::Point(401, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(505, 157);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Lanche";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->tempo1Lanche);
			this->groupBox1->Controls->Add(this->tempo2Lanche);
			this->groupBox1->Controls->Add(this->tempo4Lanche);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->tempo3Lanche);
			this->groupBox1->Location = System::Drawing::Point(10, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(238, 135);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tempos";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Preparar Lanche";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Conferir Estoque Lanche";
			// 
			// tempo1Lanche
			// 
			this->tempo1Lanche->Location = System::Drawing::Point(182, 23);
			this->tempo1Lanche->Name = L"tempo1Lanche";
			this->tempo1Lanche->Size = System::Drawing::Size(46, 20);
			this->tempo1Lanche->TabIndex = 15;
			// 
			// tempo2Lanche
			// 
			this->tempo2Lanche->Location = System::Drawing::Point(182, 53);
			this->tempo2Lanche->Name = L"tempo2Lanche";
			this->tempo2Lanche->Size = System::Drawing::Size(46, 20);
			this->tempo2Lanche->TabIndex = 21;
			// 
			// tempo4Lanche
			// 
			this->tempo4Lanche->Location = System::Drawing::Point(182, 105);
			this->tempo4Lanche->Name = L"tempo4Lanche";
			this->tempo4Lanche->Size = System::Drawing::Size(46, 20);
			this->tempo4Lanche->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 114);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Embalar Lanche";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Separar Ingredientes Lanche";
			// 
			// tempo3Lanche
			// 
			this->tempo3Lanche->Location = System::Drawing::Point(182, 79);
			this->tempo3Lanche->Name = L"tempo3Lanche";
			this->tempo3Lanche->Size = System::Drawing::Size(46, 20);
			this->tempo3Lanche->TabIndex = 19;
			// 
			// LancheNVeg
			// 
			this->LancheNVeg->AutoSize = true;
			this->LancheNVeg->Location = System::Drawing::Point(409, 50);
			this->LancheNVeg->Name = L"LancheNVeg";
			this->LancheNVeg->Size = System::Drawing::Size(45, 17);
			this->LancheNVeg->TabIndex = 14;
			this->LancheNVeg->TabStop = true;
			this->LancheNVeg->Text = L"Não";
			this->LancheNVeg->UseVisualStyleBackColor = true;
			// 
			// LancheVeg
			// 
			this->LancheVeg->AutoSize = true;
			this->LancheVeg->Location = System::Drawing::Point(348, 50);
			this->LancheVeg->Name = L"LancheVeg";
			this->LancheVeg->Size = System::Drawing::Size(42, 17);
			this->LancheVeg->TabIndex = 13;
			this->LancheVeg->TabStop = true;
			this->LancheVeg->Text = L"Sim";
			this->LancheVeg->UseVisualStyleBackColor = true;
			this->LancheVeg->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox2);
			this->groupBox5->Controls->Add(this->BebidaNDiet);
			this->groupBox5->Controls->Add(this->BebidaNGelada);
			this->groupBox5->Controls->Add(this->BebidaDiet);
			this->groupBox5->Controls->Add(this->BebidaGelada);
			this->groupBox5->Controls->Add(this->BotaoBebida);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->nomeBebida);
			this->groupBox5->Location = System::Drawing::Point(401, 165);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(505, 157);
			this->groupBox5->TabIndex = 31;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Bebida";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tempo1Bebida);
			this->groupBox2->Controls->Add(this->tempo2Bebida);
			this->groupBox2->Controls->Add(this->tempo4Bebida);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->tempo3Bebida);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Location = System::Drawing::Point(14, 17);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(238, 135);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tempos";
			// 
			// tempo1Bebida
			// 
			this->tempo1Bebida->Location = System::Drawing::Point(182, 23);
			this->tempo1Bebida->Name = L"tempo1Bebida";
			this->tempo1Bebida->Size = System::Drawing::Size(46, 20);
			this->tempo1Bebida->TabIndex = 15;
			// 
			// tempo2Bebida
			// 
			this->tempo2Bebida->Location = System::Drawing::Point(182, 53);
			this->tempo2Bebida->Name = L"tempo2Bebida";
			this->tempo2Bebida->Size = System::Drawing::Size(46, 20);
			this->tempo2Bebida->TabIndex = 21;
			// 
			// tempo4Bebida
			// 
			this->tempo4Bebida->Location = System::Drawing::Point(182, 105);
			this->tempo4Bebida->Name = L"tempo4Bebida";
			this->tempo4Bebida->Size = System::Drawing::Size(46, 20);
			this->tempo4Bebida->TabIndex = 17;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(21, 107);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(81, 13);
			this->label26->TabIndex = 22;
			this->label26->Text = L"Embalar Bebida";
			// 
			// tempo3Bebida
			// 
			this->tempo3Bebida->Location = System::Drawing::Point(182, 79);
			this->tempo3Bebida->Name = L"tempo3Bebida";
			this->tempo3Bebida->Size = System::Drawing::Size(46, 20);
			this->tempo3Bebida->TabIndex = 19;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(21, 26);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(121, 13);
			this->label29->TabIndex = 14;
			this->label29->Text = L"Conferir Estoque Bebida";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(21, 82);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(79, 13);
			this->label27->TabIndex = 20;
			this->label27->Text = L"Tampar Bebida";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(21, 56);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(92, 13);
			this->label28->TabIndex = 18;
			this->label28->Text = L"Engarrafar Bebida";
			// 
			// BebidaNDiet
			// 
			this->BebidaNDiet->AutoSize = true;
			this->BebidaNDiet->Location = System::Drawing::Point(409, 80);
			this->BebidaNDiet->Name = L"BebidaNDiet";
			this->BebidaNDiet->Size = System::Drawing::Size(45, 17);
			this->BebidaNDiet->TabIndex = 16;
			this->BebidaNDiet->TabStop = true;
			this->BebidaNDiet->Text = L"Não";
			this->BebidaNDiet->UseVisualStyleBackColor = true;
			// 
			// BebidaNGelada
			// 
			this->BebidaNGelada->AutoSize = true;
			this->BebidaNGelada->Location = System::Drawing::Point(409, 49);
			this->BebidaNGelada->Name = L"BebidaNGelada";
			this->BebidaNGelada->Size = System::Drawing::Size(45, 17);
			this->BebidaNGelada->TabIndex = 16;
			this->BebidaNGelada->TabStop = true;
			this->BebidaNGelada->Text = L"Não";
			this->BebidaNGelada->UseVisualStyleBackColor = true;
			// 
			// BebidaDiet
			// 
			this->BebidaDiet->AutoSize = true;
			this->BebidaDiet->Location = System::Drawing::Point(348, 80);
			this->BebidaDiet->Name = L"BebidaDiet";
			this->BebidaDiet->Size = System::Drawing::Size(42, 17);
			this->BebidaDiet->TabIndex = 15;
			this->BebidaDiet->TabStop = true;
			this->BebidaDiet->Text = L"Sim";
			this->BebidaDiet->UseVisualStyleBackColor = true;
			// 
			// BebidaGelada
			// 
			this->BebidaGelada->AutoSize = true;
			this->BebidaGelada->Location = System::Drawing::Point(348, 51);
			this->BebidaGelada->Name = L"BebidaGelada";
			this->BebidaGelada->Size = System::Drawing::Size(42, 17);
			this->BebidaGelada->TabIndex = 15;
			this->BebidaGelada->TabStop = true;
			this->BebidaGelada->Text = L"Sim";
			this->BebidaGelada->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->groupBox3);
			this->groupBox6->Controls->Add(this->BotaoSobremesa);
			this->groupBox6->Controls->Add(this->SobremesaNLac);
			this->groupBox6->Controls->Add(this->SobremesaLac);
			this->groupBox6->Controls->Add(this->SobremesaNDiet);
			this->groupBox6->Controls->Add(this->SobremesaDiet);
			this->groupBox6->Controls->Add(this->SobremesaNGelada);
			this->groupBox6->Controls->Add(this->SobremesaGelada);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Controls->Add(this->label17);
			this->groupBox6->Controls->Add(this->nomeSobremesa);
			this->groupBox6->Location = System::Drawing::Point(401, 328);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(505, 164);
			this->groupBox6->TabIndex = 31;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Sobremesa";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->tempo1Sobremesa);
			this->groupBox3->Controls->Add(this->tempo2Sobremesa);
			this->groupBox3->Controls->Add(this->tempo4Sobremesa);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->tempo3Sobremesa);
			this->groupBox3->Location = System::Drawing::Point(6, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(238, 136);
			this->groupBox3->TabIndex = 43;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tempos";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 86);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 13);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Preparar Lanche";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 30);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(124, 13);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Conferir Estoque Lanche";
			// 
			// tempo1Sobremesa
			// 
			this->tempo1Sobremesa->Location = System::Drawing::Point(182, 23);
			this->tempo1Sobremesa->Name = L"tempo1Sobremesa";
			this->tempo1Sobremesa->Size = System::Drawing::Size(46, 20);
			this->tempo1Sobremesa->TabIndex = 15;
			// 
			// tempo2Sobremesa
			// 
			this->tempo2Sobremesa->Location = System::Drawing::Point(182, 53);
			this->tempo2Sobremesa->Name = L"tempo2Sobremesa";
			this->tempo2Sobremesa->Size = System::Drawing::Size(46, 20);
			this->tempo2Sobremesa->TabIndex = 21;
			// 
			// tempo4Sobremesa
			// 
			this->tempo4Sobremesa->Location = System::Drawing::Point(182, 105);
			this->tempo4Sobremesa->Name = L"tempo4Sobremesa";
			this->tempo4Sobremesa->Size = System::Drawing::Size(46, 20);
			this->tempo4Sobremesa->TabIndex = 17;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 114);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(84, 13);
			this->label20->TabIndex = 18;
			this->label20->Text = L"Embalar Lanche";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 60);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(144, 13);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Separar Ingredientes Lanche";
			// 
			// tempo3Sobremesa
			// 
			this->tempo3Sobremesa->Location = System::Drawing::Point(182, 79);
			this->tempo3Sobremesa->Name = L"tempo3Sobremesa";
			this->tempo3Sobremesa->Size = System::Drawing::Size(46, 20);
			this->tempo3Sobremesa->TabIndex = 19;
			// 
			// BotaoSobremesa
			// 
			this->BotaoSobremesa->Location = System::Drawing::Point(279, 124);
			this->BotaoSobremesa->Name = L"BotaoSobremesa";
			this->BotaoSobremesa->Size = System::Drawing::Size(157, 23);
			this->BotaoSobremesa->TabIndex = 33;
			this->BotaoSobremesa->Text = L"Fazer Pedido";
			this->BotaoSobremesa->UseVisualStyleBackColor = true;
			this->BotaoSobremesa->Click += gcnew System::EventHandler(this, &MyForm::BotaoSobremesa_Click);
			// 
			// SobremesaNLac
			// 
			this->SobremesaNLac->AutoSize = true;
			this->SobremesaNLac->Location = System::Drawing::Point(409, 100);
			this->SobremesaNLac->Name = L"SobremesaNLac";
			this->SobremesaNLac->Size = System::Drawing::Size(45, 17);
			this->SobremesaNLac->TabIndex = 42;
			this->SobremesaNLac->TabStop = true;
			this->SobremesaNLac->Text = L"Não";
			this->SobremesaNLac->UseVisualStyleBackColor = true;
			// 
			// SobremesaLac
			// 
			this->SobremesaLac->AutoSize = true;
			this->SobremesaLac->Location = System::Drawing::Point(348, 101);
			this->SobremesaLac->Name = L"SobremesaLac";
			this->SobremesaLac->Size = System::Drawing::Size(42, 17);
			this->SobremesaLac->TabIndex = 41;
			this->SobremesaLac->TabStop = true;
			this->SobremesaLac->Text = L"Sim";
			this->SobremesaLac->UseVisualStyleBackColor = true;
			// 
			// SobremesaNDiet
			// 
			this->SobremesaNDiet->AutoSize = true;
			this->SobremesaNDiet->Location = System::Drawing::Point(409, 77);
			this->SobremesaNDiet->Name = L"SobremesaNDiet";
			this->SobremesaNDiet->Size = System::Drawing::Size(45, 17);
			this->SobremesaNDiet->TabIndex = 40;
			this->SobremesaNDiet->TabStop = true;
			this->SobremesaNDiet->Text = L"Não";
			this->SobremesaNDiet->UseVisualStyleBackColor = true;
			// 
			// SobremesaDiet
			// 
			this->SobremesaDiet->AutoSize = true;
			this->SobremesaDiet->Location = System::Drawing::Point(348, 77);
			this->SobremesaDiet->Name = L"SobremesaDiet";
			this->SobremesaDiet->Size = System::Drawing::Size(42, 17);
			this->SobremesaDiet->TabIndex = 39;
			this->SobremesaDiet->TabStop = true;
			this->SobremesaDiet->Text = L"Sim";
			this->SobremesaDiet->UseVisualStyleBackColor = true;
			// 
			// SobremesaNGelada
			// 
			this->SobremesaNGelada->AutoSize = true;
			this->SobremesaNGelada->Location = System::Drawing::Point(409, 56);
			this->SobremesaNGelada->Name = L"SobremesaNGelada";
			this->SobremesaNGelada->Size = System::Drawing::Size(45, 17);
			this->SobremesaNGelada->TabIndex = 34;
			this->SobremesaNGelada->TabStop = true;
			this->SobremesaNGelada->Text = L"Não";
			this->SobremesaNGelada->UseVisualStyleBackColor = true;
			// 
			// SobremesaGelada
			// 
			this->SobremesaGelada->AutoSize = true;
			this->SobremesaGelada->Location = System::Drawing::Point(348, 54);
			this->SobremesaGelada->Name = L"SobremesaGelada";
			this->SobremesaGelada->Size = System::Drawing::Size(42, 17);
			this->SobremesaGelada->TabIndex = 33;
			this->SobremesaGelada->TabStop = true;
			this->SobremesaGelada->Text = L"Sim";
			this->SobremesaGelada->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(263, 103);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 13);
			this->label14->TabIndex = 38;
			this->label14->Text = L"Lactose\?";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(263, 79);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 13);
			this->label15->TabIndex = 37;
			this->label15->Text = L"Diet\?";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(263, 31);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(35, 13);
			this->label16->TabIndex = 35;
			this->label16->Text = L"Nome";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(263, 56);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(47, 13);
			this->label17->TabIndex = 36;
			this->label17->Text = L"Gelada\?";
			// 
			// nomeSobremesa
			// 
			this->nomeSobremesa->Location = System::Drawing::Point(322, 28);
			this->nomeSobremesa->Name = L"nomeSobremesa";
			this->nomeSobremesa->Size = System::Drawing::Size(132, 20);
			this->nomeSobremesa->TabIndex = 34;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 504);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"Lanchonete Corujão";
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	

private: System::Void BotaoLanche_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void BotaoBebida_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void BotaoSobresa_Click(System::Object^  sender, System::EventArgs^  e);

};
}
