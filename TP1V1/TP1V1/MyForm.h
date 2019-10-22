#include<string>
#pragma once


namespace TP1V1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


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







	private: System::Windows::Forms::GroupBox^  groupBox4;

	private: System::Windows::Forms::GroupBox^  groupBox5;








	private: System::Windows::Forms::GroupBox^  groupBox6;



	private: System::Windows::Forms::GroupBox^  groupBox1;




























private: System::Windows::Forms::Button^  botaoLanche;
private: System::Windows::Forms::Button^  botaoBebida;
private: System::Windows::Forms::Button^  botaoSobremesa;




















	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa4L1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa3L1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa2L1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa1L1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label10;

private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa4L2;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa3L2;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa2L2;

private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa1L2;




private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;




private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  numLanche;
private: System::Windows::Forms::Label^  numBebida;
private: System::Windows::Forms::Label^  numSobremesa;
private: System::Windows::Forms::RadioButton^  xBacon;
private: System::Windows::Forms::RadioButton^  xVeg;


private: System::Windows::Forms::RadioButton^  xTudo;

private: System::Windows::Forms::RadioButton^  xBurger;





private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::RadioButton^  queijo;
private: System::Windows::Forms::RadioButton^  soja;


private: System::Windows::Forms::RadioButton^  carne;

private: System::Windows::Forms::RadioButton^  bacon;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::RadioButton^  bebidaRef;
private: System::Windows::Forms::RadioButton^  bebidaAgua;


private: System::Windows::Forms::RadioButton^  bebidaCer;
private: System::Windows::Forms::RadioButton^  bebidaSuc;




private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::RadioButton^  bebidaCarQuen;
private: System::Windows::Forms::RadioButton^  bebidaCarSAlc;


private: System::Windows::Forms::RadioButton^  bebidaCarCAlc;

private: System::Windows::Forms::RadioButton^  bebidaCarGel;

private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::RadioButton^  SobPud;
private: System::Windows::Forms::RadioButton^  SobPav;


private: System::Windows::Forms::RadioButton^  SobSorv;

private: System::Windows::Forms::RadioButton^  SobBolo;

private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::RadioButton^  SobCarLight;

private: System::Windows::Forms::RadioButton^  SobCarDiet;













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
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->queijo = (gcnew System::Windows::Forms::RadioButton());
			this->soja = (gcnew System::Windows::Forms::RadioButton());
			this->carne = (gcnew System::Windows::Forms::RadioButton());
			this->bacon = (gcnew System::Windows::Forms::RadioButton());
			this->numLanche = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->botaoLanche = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->xBacon = (gcnew System::Windows::Forms::RadioButton());
			this->xVeg = (gcnew System::Windows::Forms::RadioButton());
			this->xTudo = (gcnew System::Windows::Forms::RadioButton());
			this->xBurger = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->bebidaRef = (gcnew System::Windows::Forms::RadioButton());
			this->bebidaAgua = (gcnew System::Windows::Forms::RadioButton());
			this->bebidaCer = (gcnew System::Windows::Forms::RadioButton());
			this->bebidaSuc = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->bebidaCarQuen = (gcnew System::Windows::Forms::RadioButton());
			this->bebidaCarSAlc = (gcnew System::Windows::Forms::RadioButton());
			this->bebidaCarCAlc = (gcnew System::Windows::Forms::RadioButton());
			this->bebidaCarGel = (gcnew System::Windows::Forms::RadioButton());
			this->numBebida = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->botaoBebida = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->SobPud = (gcnew System::Windows::Forms::RadioButton());
			this->SobPav = (gcnew System::Windows::Forms::RadioButton());
			this->SobSorv = (gcnew System::Windows::Forms::RadioButton());
			this->SobBolo = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->SobCarLight = (gcnew System::Windows::Forms::RadioButton());
			this->SobCarDiet = (gcnew System::Windows::Forms::RadioButton());
			this->numSobremesa = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->botaoSobremesa = (gcnew System::Windows::Forms::Button());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->Etapa4L2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa3L2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa2L2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa1L2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa4L1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa3L1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa2L1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa1L1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->groupBox4->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox9);
			this->groupBox4->Controls->Add(this->numLanche);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->botaoLanche);
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Location = System::Drawing::Point(811, 287);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(375, 228);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Lanche";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->queijo);
			this->groupBox9->Controls->Add(this->soja);
			this->groupBox9->Controls->Add(this->carne);
			this->groupBox9->Controls->Add(this->bacon);
			this->groupBox9->Location = System::Drawing::Point(187, 23);
			this->groupBox9->Margin = System::Windows::Forms::Padding(4);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(4);
			this->groupBox9->Size = System::Drawing::Size(173, 148);
			this->groupBox9->TabIndex = 33;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Adicional:";
			// 
			// queijo
			// 
			this->queijo->AutoSize = true;
			this->queijo->Location = System::Drawing::Point(11, 55);
			this->queijo->Margin = System::Windows::Forms::Padding(4);
			this->queijo->Name = L"queijo";
			this->queijo->Size = System::Drawing::Size(70, 21);
			this->queijo->TabIndex = 3;
			this->queijo->TabStop = true;
			this->queijo->Text = L"Queijo";
			this->queijo->UseVisualStyleBackColor = true;
			// 
			// soja
			// 
			this->soja->AutoSize = true;
			this->soja->Location = System::Drawing::Point(11, 110);
			this->soja->Margin = System::Windows::Forms::Padding(4);
			this->soja->Name = L"soja";
			this->soja->Size = System::Drawing::Size(140, 21);
			this->soja->TabIndex = 2;
			this->soja->TabStop = true;
			this->soja->Text = L"Hamburguer Soja";
			this->soja->UseVisualStyleBackColor = true;
			// 
			// carne
			// 
			this->carne->AutoSize = true;
			this->carne->Location = System::Drawing::Point(11, 81);
			this->carne->Margin = System::Windows::Forms::Padding(4);
			this->carne->Name = L"carne";
			this->carne->Size = System::Drawing::Size(150, 21);
			this->carne->TabIndex = 1;
			this->carne->TabStop = true;
			this->carne->Text = L"Hamburguer Carne";
			this->carne->UseVisualStyleBackColor = true;
			// 
			// bacon
			// 
			this->bacon->AutoSize = true;
			this->bacon->Location = System::Drawing::Point(9, 25);
			this->bacon->Margin = System::Windows::Forms::Padding(4);
			this->bacon->Name = L"bacon";
			this->bacon->Size = System::Drawing::Size(69, 21);
			this->bacon->TabIndex = 0;
			this->bacon->TabStop = true;
			this->bacon->Text = L"Bacon";
			this->bacon->UseVisualStyleBackColor = true;
			// 
			// numLanche
			// 
			this->numLanche->AutoSize = true;
			this->numLanche->Location = System::Drawing::Point(311, 195);
			this->numLanche->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->numLanche->Name = L"numLanche";
			this->numLanche->Size = System::Drawing::Size(16, 17);
			this->numLanche->TabIndex = 43;
			this->numLanche->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(230, 192);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(87, 17);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Produzidos: ";
			// 
			// botaoLanche
			// 
			this->botaoLanche->Location = System::Drawing::Point(13, 189);
			this->botaoLanche->Margin = System::Windows::Forms::Padding(4);
			this->botaoLanche->Name = L"botaoLanche";
			this->botaoLanche->Size = System::Drawing::Size(209, 28);
			this->botaoLanche->TabIndex = 34;
			this->botaoLanche->Text = L"Fazer Pedido";
			this->botaoLanche->UseVisualStyleBackColor = true;
			this->botaoLanche->Click += gcnew System::EventHandler(this, &MyForm::botaoLanche_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->xBacon);
			this->groupBox1->Controls->Add(this->xVeg);
			this->groupBox1->Controls->Add(this->xTudo);
			this->groupBox1->Controls->Add(this->xBurger);
			this->groupBox1->Location = System::Drawing::Point(13, 23);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(156, 148);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tipo de Lanche:";
			// 
			// xBacon
			// 
			this->xBacon->AutoSize = true;
			this->xBacon->Location = System::Drawing::Point(11, 55);
			this->xBacon->Margin = System::Windows::Forms::Padding(4);
			this->xBacon->Name = L"xBacon";
			this->xBacon->Size = System::Drawing::Size(91, 21);
			this->xBacon->TabIndex = 3;
			this->xBacon->TabStop = true;
			this->xBacon->Text = L"X - Bacon";
			this->xBacon->UseVisualStyleBackColor = true;
			// 
			// xVeg
			// 
			this->xVeg->AutoSize = true;
			this->xVeg->Location = System::Drawing::Point(11, 110);
			this->xVeg->Margin = System::Windows::Forms::Padding(4);
			this->xVeg->Name = L"xVeg";
			this->xVeg->Size = System::Drawing::Size(76, 21);
			this->xVeg->TabIndex = 2;
			this->xVeg->TabStop = true;
			this->xVeg->Text = L"X - Veg";
			this->xVeg->UseVisualStyleBackColor = true;
			// 
			// xTudo
			// 
			this->xTudo->AutoSize = true;
			this->xTudo->Location = System::Drawing::Point(11, 81);
			this->xTudo->Margin = System::Windows::Forms::Padding(4);
			this->xTudo->Name = L"xTudo";
			this->xTudo->Size = System::Drawing::Size(84, 21);
			this->xTudo->TabIndex = 1;
			this->xTudo->TabStop = true;
			this->xTudo->Text = L"X - Tudo";
			this->xTudo->UseVisualStyleBackColor = true;
			// 
			// xBurger
			// 
			this->xBurger->AutoSize = true;
			this->xBurger->Location = System::Drawing::Point(9, 25);
			this->xBurger->Margin = System::Windows::Forms::Padding(4);
			this->xBurger->Name = L"xBurger";
			this->xBurger->Size = System::Drawing::Size(94, 21);
			this->xBurger->TabIndex = 0;
			this->xBurger->TabStop = true;
			this->xBurger->Text = L"X - Burger";
			this->xBurger->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox11);
			this->groupBox5->Controls->Add(this->groupBox10);
			this->groupBox5->Controls->Add(this->numBebida);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->botaoBebida);
			this->groupBox5->Location = System::Drawing::Point(418, 287);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4);
			this->groupBox5->Size = System::Drawing::Size(385, 228);
			this->groupBox5->TabIndex = 31;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Bebida";
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->bebidaRef);
			this->groupBox11->Controls->Add(this->bebidaAgua);
			this->groupBox11->Controls->Add(this->bebidaCer);
			this->groupBox11->Controls->Add(this->bebidaSuc);
			this->groupBox11->Location = System::Drawing::Point(19, 30);
			this->groupBox11->Margin = System::Windows::Forms::Padding(4);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Padding = System::Windows::Forms::Padding(4);
			this->groupBox11->Size = System::Drawing::Size(156, 148);
			this->groupBox11->TabIndex = 33;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Tipos de Bebidas";
			// 
			// bebidaRef
			// 
			this->bebidaRef->AutoSize = true;
			this->bebidaRef->Location = System::Drawing::Point(11, 55);
			this->bebidaRef->Margin = System::Windows::Forms::Padding(4);
			this->bebidaRef->Name = L"bebidaRef";
			this->bebidaRef->Size = System::Drawing::Size(108, 21);
			this->bebidaRef->TabIndex = 3;
			this->bebidaRef->TabStop = true;
			this->bebidaRef->Text = L"Refrigerante";
			this->bebidaRef->UseVisualStyleBackColor = true;
			// 
			// bebidaAgua
			// 
			this->bebidaAgua->AutoSize = true;
			this->bebidaAgua->Location = System::Drawing::Point(11, 110);
			this->bebidaAgua->Margin = System::Windows::Forms::Padding(4);
			this->bebidaAgua->Name = L"bebidaAgua";
			this->bebidaAgua->Size = System::Drawing::Size(62, 21);
			this->bebidaAgua->TabIndex = 2;
			this->bebidaAgua->TabStop = true;
			this->bebidaAgua->Text = L"Água";
			this->bebidaAgua->UseVisualStyleBackColor = true;
			// 
			// bebidaCer
			// 
			this->bebidaCer->AutoSize = true;
			this->bebidaCer->Location = System::Drawing::Point(11, 81);
			this->bebidaCer->Margin = System::Windows::Forms::Padding(4);
			this->bebidaCer->Name = L"bebidaCer";
			this->bebidaCer->Size = System::Drawing::Size(77, 21);
			this->bebidaCer->TabIndex = 1;
			this->bebidaCer->TabStop = true;
			this->bebidaCer->Text = L"Cerveja";
			this->bebidaCer->UseVisualStyleBackColor = true;
			// 
			// bebidaSuc
			// 
			this->bebidaSuc->AutoSize = true;
			this->bebidaSuc->Location = System::Drawing::Point(9, 25);
			this->bebidaSuc->Margin = System::Windows::Forms::Padding(4);
			this->bebidaSuc->Name = L"bebidaSuc";
			this->bebidaSuc->Size = System::Drawing::Size(61, 21);
			this->bebidaSuc->TabIndex = 0;
			this->bebidaSuc->TabStop = true;
			this->bebidaSuc->Text = L"Suco";
			this->bebidaSuc->UseVisualStyleBackColor = true;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->bebidaCarQuen);
			this->groupBox10->Controls->Add(this->bebidaCarSAlc);
			this->groupBox10->Controls->Add(this->bebidaCarCAlc);
			this->groupBox10->Controls->Add(this->bebidaCarGel);
			this->groupBox10->Location = System::Drawing::Point(187, 30);
			this->groupBox10->Margin = System::Windows::Forms::Padding(4);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(4);
			this->groupBox10->Size = System::Drawing::Size(173, 148);
			this->groupBox10->TabIndex = 34;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Característica";
			// 
			// bebidaCarQuen
			// 
			this->bebidaCarQuen->AutoSize = true;
			this->bebidaCarQuen->Location = System::Drawing::Point(11, 55);
			this->bebidaCarQuen->Margin = System::Windows::Forms::Padding(4);
			this->bebidaCarQuen->Name = L"bebidaCarQuen";
			this->bebidaCarQuen->Size = System::Drawing::Size(76, 21);
			this->bebidaCarQuen->TabIndex = 3;
			this->bebidaCarQuen->TabStop = true;
			this->bebidaCarQuen->Text = L"Quente";
			this->bebidaCarQuen->UseVisualStyleBackColor = true;
			// 
			// bebidaCarSAlc
			// 
			this->bebidaCarSAlc->AutoSize = true;
			this->bebidaCarSAlc->Location = System::Drawing::Point(11, 110);
			this->bebidaCarSAlc->Margin = System::Windows::Forms::Padding(4);
			this->bebidaCarSAlc->Name = L"bebidaCarSAlc";
			this->bebidaCarSAlc->Size = System::Drawing::Size(99, 21);
			this->bebidaCarSAlc->TabIndex = 2;
			this->bebidaCarSAlc->TabStop = true;
			this->bebidaCarSAlc->Text = L"Sem Alcool";
			this->bebidaCarSAlc->UseVisualStyleBackColor = true;
			// 
			// bebidaCarCAlc
			// 
			this->bebidaCarCAlc->AutoSize = true;
			this->bebidaCarCAlc->Location = System::Drawing::Point(11, 81);
			this->bebidaCarCAlc->Margin = System::Windows::Forms::Padding(4);
			this->bebidaCarCAlc->Name = L"bebidaCarCAlc";
			this->bebidaCarCAlc->Size = System::Drawing::Size(99, 21);
			this->bebidaCarCAlc->TabIndex = 1;
			this->bebidaCarCAlc->TabStop = true;
			this->bebidaCarCAlc->Text = L"Com Alcool";
			this->bebidaCarCAlc->UseVisualStyleBackColor = true;
			// 
			// bebidaCarGel
			// 
			this->bebidaCarGel->AutoSize = true;
			this->bebidaCarGel->Location = System::Drawing::Point(9, 25);
			this->bebidaCarGel->Margin = System::Windows::Forms::Padding(4);
			this->bebidaCarGel->Name = L"bebidaCarGel";
			this->bebidaCarGel->Size = System::Drawing::Size(75, 21);
			this->bebidaCarGel->TabIndex = 0;
			this->bebidaCarGel->TabStop = true;
			this->bebidaCarGel->Text = L"Gelada";
			this->bebidaCarGel->UseVisualStyleBackColor = true;
			// 
			// numBebida
			// 
			this->numBebida->AutoSize = true;
			this->numBebida->Location = System::Drawing::Point(322, 200);
			this->numBebida->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->numBebida->Name = L"numBebida";
			this->numBebida->Size = System::Drawing::Size(16, 17);
			this->numBebida->TabIndex = 42;
			this->numBebida->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(242, 198);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(87, 17);
			this->label17->TabIndex = 41;
			this->label17->Text = L"Produzidos: ";
			// 
			// botaoBebida
			// 
			this->botaoBebida->Location = System::Drawing::Point(16, 192);
			this->botaoBebida->Margin = System::Windows::Forms::Padding(4);
			this->botaoBebida->Name = L"botaoBebida";
			this->botaoBebida->Size = System::Drawing::Size(209, 28);
			this->botaoBebida->TabIndex = 35;
			this->botaoBebida->Text = L"Fazer Pedido";
			this->botaoBebida->UseVisualStyleBackColor = true;
			this->botaoBebida->Click += gcnew System::EventHandler(this, &MyForm::botaoBebida_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->groupBox2);
			this->groupBox6->Controls->Add(this->groupBox3);
			this->groupBox6->Controls->Add(this->numSobremesa);
			this->groupBox6->Controls->Add(this->label22);
			this->groupBox6->Controls->Add(this->botaoSobremesa);
			this->groupBox6->Location = System::Drawing::Point(13, 287);
			this->groupBox6->Margin = System::Windows::Forms::Padding(4);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(4);
			this->groupBox6->Size = System::Drawing::Size(388, 228);
			this->groupBox6->TabIndex = 31;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Sobremesa";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->SobPud);
			this->groupBox2->Controls->Add(this->SobPav);
			this->groupBox2->Controls->Add(this->SobSorv);
			this->groupBox2->Controls->Add(this->SobBolo);
			this->groupBox2->Location = System::Drawing::Point(19, 30);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(215, 148);
			this->groupBox2->TabIndex = 45;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tipos de Sobremesas";
			// 
			// SobPud
			// 
			this->SobPud->AutoSize = true;
			this->SobPud->Location = System::Drawing::Point(11, 55);
			this->SobPud->Margin = System::Windows::Forms::Padding(4);
			this->SobPud->Name = L"SobPud";
			this->SobPud->Size = System::Drawing::Size(68, 21);
			this->SobPud->TabIndex = 3;
			this->SobPud->TabStop = true;
			this->SobPud->Text = L"Pudim";
			this->SobPud->UseVisualStyleBackColor = true;
			// 
			// SobPav
			// 
			this->SobPav->AutoSize = true;
			this->SobPav->Location = System::Drawing::Point(11, 110);
			this->SobPav->Margin = System::Windows::Forms::Padding(4);
			this->SobPav->Name = L"SobPav";
			this->SobPav->Size = System::Drawing::Size(61, 21);
			this->SobPav->TabIndex = 2;
			this->SobPav->TabStop = true;
			this->SobPav->Text = L"Pavê";
			this->SobPav->UseVisualStyleBackColor = true;
			// 
			// SobSorv
			// 
			this->SobSorv->AutoSize = true;
			this->SobSorv->Location = System::Drawing::Point(11, 81);
			this->SobSorv->Margin = System::Windows::Forms::Padding(4);
			this->SobSorv->Name = L"SobSorv";
			this->SobSorv->Size = System::Drawing::Size(78, 21);
			this->SobSorv->TabIndex = 1;
			this->SobSorv->TabStop = true;
			this->SobSorv->Text = L"Sorvete";
			this->SobSorv->UseVisualStyleBackColor = true;
			// 
			// SobBolo
			// 
			this->SobBolo->AutoSize = true;
			this->SobBolo->Location = System::Drawing::Point(9, 25);
			this->SobBolo->Margin = System::Windows::Forms::Padding(4);
			this->SobBolo->Name = L"SobBolo";
			this->SobBolo->Size = System::Drawing::Size(57, 21);
			this->SobBolo->TabIndex = 0;
			this->SobBolo->TabStop = true;
			this->SobBolo->Text = L"Bolo";
			this->SobBolo->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->SobCarLight);
			this->groupBox3->Controls->Add(this->SobCarDiet);
			this->groupBox3->Location = System::Drawing::Point(242, 30);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(118, 148);
			this->groupBox3->TabIndex = 46;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Característica";
			// 
			// SobCarLight
			// 
			this->SobCarLight->AutoSize = true;
			this->SobCarLight->Location = System::Drawing::Point(11, 55);
			this->SobCarLight->Margin = System::Windows::Forms::Padding(4);
			this->SobCarLight->Name = L"SobCarLight";
			this->SobCarLight->Size = System::Drawing::Size(60, 21);
			this->SobCarLight->TabIndex = 3;
			this->SobCarLight->TabStop = true;
			this->SobCarLight->Text = L"Light";
			this->SobCarLight->UseVisualStyleBackColor = true;
			// 
			// SobCarDiet
			// 
			this->SobCarDiet->AutoSize = true;
			this->SobCarDiet->Location = System::Drawing::Point(9, 25);
			this->SobCarDiet->Margin = System::Windows::Forms::Padding(4);
			this->SobCarDiet->Name = L"SobCarDiet";
			this->SobCarDiet->Size = System::Drawing::Size(54, 21);
			this->SobCarDiet->TabIndex = 0;
			this->SobCarDiet->TabStop = true;
			this->SobCarDiet->Text = L"Diet";
			this->SobCarDiet->UseVisualStyleBackColor = true;
			// 
			// numSobremesa
			// 
			this->numSobremesa->AutoSize = true;
			this->numSobremesa->Location = System::Drawing::Point(320, 198);
			this->numSobremesa->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->numSobremesa->Name = L"numSobremesa";
			this->numSobremesa->Size = System::Drawing::Size(16, 17);
			this->numSobremesa->TabIndex = 44;
			this->numSobremesa->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(239, 198);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(87, 17);
			this->label22->TabIndex = 42;
			this->label22->Text = L"Produzidos: ";
			// 
			// botaoSobremesa
			// 
			this->botaoSobremesa->Location = System::Drawing::Point(19, 192);
			this->botaoSobremesa->Margin = System::Windows::Forms::Padding(4);
			this->botaoSobremesa->Name = L"botaoSobremesa";
			this->botaoSobremesa->Size = System::Drawing::Size(209, 28);
			this->botaoSobremesa->TabIndex = 36;
			this->botaoSobremesa->Text = L"Fazer Pedido";
			this->botaoSobremesa->UseVisualStyleBackColor = true;
			this->botaoSobremesa->Click += gcnew System::EventHandler(this, &MyForm::botaoSobremesa_Click);
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(8) {this->Etapa4L2, 
				this->Etapa3L2, this->Etapa2L2, this->Etapa1L2, this->Etapa4L1, this->Etapa3L1, this->Etapa2L1, this->Etapa1L1});
			this->shapeContainer1->Size = System::Drawing::Size(1199, 519);
			this->shapeContainer1->TabIndex = 32;
			this->shapeContainer1->TabStop = false;
			// 
			// Etapa4L2
			// 
			this->Etapa4L2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa4L2->Location = System::Drawing::Point(262, 191);
			this->Etapa4L2->Name = L"Etapa4L2";
			this->Etapa4L2->Size = System::Drawing::Size(35, 30);
			// 
			// Etapa3L2
			// 
			this->Etapa3L2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa3L2->Location = System::Drawing::Point(262, 138);
			this->Etapa3L2->Name = L"Etapa3L2";
			this->Etapa3L2->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa2L2
			// 
			this->Etapa2L2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa2L2->Location = System::Drawing::Point(261, 86);
			this->Etapa2L2->Name = L"Etapa2L2";
			this->Etapa2L2->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa1L2
			// 
			this->Etapa1L2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa1L2->Location = System::Drawing::Point(262, 47);
			this->Etapa1L2->Name = L"Etapa1L2";
			this->Etapa1L2->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa4L1
			// 
			this->Etapa4L1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa4L1->Location = System::Drawing::Point(20, 193);
			this->Etapa4L1->Name = L"Etapa4L1";
			this->Etapa4L1->Size = System::Drawing::Size(35, 28);
			// 
			// Etapa3L1
			// 
			this->Etapa3L1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa3L1->Location = System::Drawing::Point(18, 137);
			this->Etapa3L1->Name = L"Etapa3L1";
			this->Etapa3L1->Size = System::Drawing::Size(35, 30);
			// 
			// Etapa2L1
			// 
			this->Etapa2L1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa2L1->Location = System::Drawing::Point(18, 89);
			this->Etapa2L1->Name = L"Etapa2L1";
			this->Etapa2L1->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa1L1
			// 
			this->Etapa1L1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa1L1->Location = System::Drawing::Point(18, 47);
			this->Etapa1L1->Name = L"Etapa1L1";
			this->Etapa1L1->Size = System::Drawing::Size(35, 25);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 33);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 17);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Etapa1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 213);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 17);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Etapa4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 86);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 17);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Etapa2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 143);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 17);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Etapa3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(348, 33);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 17);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Etapa1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(348, 86);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 17);
			this->label12->TabIndex = 37;
			this->label12->Text = L"Etapa2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(348, 143);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 17);
			this->label13->TabIndex = 38;
			this->label13->Text = L"Etapa3";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(348, 213);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 17);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Etapa4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(405, 246);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 17);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Vazio";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(405, 178);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 17);
			this->label6->TabIndex = 46;
			this->label6->Text = L"Vazio";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(405, 119);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 17);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Vazio";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(405, 63);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 17);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Vazio";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(90, 178);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 17);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Vazio";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(90, 119);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(43, 17);
			this->label25->TabIndex = 42;
			this->label25->Text = L"Vazio";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(90, 246);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(43, 17);
			this->label30->TabIndex = 41;
			this->label30->Text = L"Vazio";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(90, 63);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(43, 17);
			this->label31->TabIndex = 40;
			this->label31->Text = L"Vazio";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(53, 2);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(55, 17);
			this->label32->TabIndex = 48;
			this->label32->Text = L"Linha 1";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(333, 2);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(55, 17);
			this->label33->TabIndex = 49;
			this->label33->Text = L"Linha 2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1199, 519);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->shapeContainer1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Lanchonete Corujão";
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

public:		void processo(string nome);
public:		void UpdateRichText(String^ texto);
public:		void setCor(int i, int n);
public:		void resetCor(int i, int n);
public:		void setNome(int i, int n, string nome);
public:		void resetNome(int i, int n, string nome);

private: System::Void botaoLanche_Click_1(System::Object^  sender, System::EventArgs^  e);
private: System::Void botaoBebida_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void botaoSobremesa_Click(System::Object^  sender, System::EventArgs^  e);


};
}
