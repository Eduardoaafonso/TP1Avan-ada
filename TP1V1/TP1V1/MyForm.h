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





	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::GroupBox^  groupBox4;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label26;



	private: System::Windows::Forms::Label^  label28;

	private: System::Windows::Forms::Label^  label29;

	private: System::Windows::Forms::GroupBox^  groupBox6;

	private: System::Windows::Forms::Label^  label16;

	private: System::Windows::Forms::GroupBox^  groupBox1;






	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;





private: System::Windows::Forms::TextBox^  tempo4Bebida;
private: System::Windows::Forms::TextBox^  tempo3Bebida;
private: System::Windows::Forms::TextBox^  tempo2Bebida;
private: System::Windows::Forms::TextBox^  tempo1Bebida;
private: System::Windows::Forms::TextBox^  tempo4Sobremesa;
private: System::Windows::Forms::TextBox^  tempo3Sobremesa;
private: System::Windows::Forms::TextBox^  tempo2Sobremesa;
private: System::Windows::Forms::TextBox^  tempo1Sobremesa;

private: System::Windows::Forms::Button^  botaoLanche;
private: System::Windows::Forms::Button^  botaoBebida;
private: System::Windows::Forms::Button^  botaoSobremesa;
private: System::Windows::Forms::TextBox^  nomeBebida;
private: System::Windows::Forms::TextBox^  nomeSobremesa;


















	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa4L1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa3L1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa2L1;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa1L1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label27;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa4L2;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa3L2;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa2L2;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape6;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  Etapa1L2;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape4;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;
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

private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::RadioButton^  queijo;
private: System::Windows::Forms::RadioButton^  soja;


private: System::Windows::Forms::RadioButton^  carne;

private: System::Windows::Forms::RadioButton^  bacon;












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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->numLanche = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->botaoLanche = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->numBebida = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->nomeBebida = (gcnew System::Windows::Forms::TextBox());
			this->botaoBebida = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tempo4Bebida = (gcnew System::Windows::Forms::TextBox());
			this->tempo3Bebida = (gcnew System::Windows::Forms::TextBox());
			this->tempo2Bebida = (gcnew System::Windows::Forms::TextBox());
			this->tempo1Bebida = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->numSobremesa = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->nomeSobremesa = (gcnew System::Windows::Forms::TextBox());
			this->botaoSobremesa = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tempo4Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->tempo3Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->tempo2Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->tempo1Sobremesa = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->Etapa4L2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa3L2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa2L2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape6 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Etapa1L2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
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
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->xBurger = (gcnew System::Windows::Forms::RadioButton());
			this->xTudo = (gcnew System::Windows::Forms::RadioButton());
			this->xVeg = (gcnew System::Windows::Forms::RadioButton());
			this->xBacon = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->queijo = (gcnew System::Windows::Forms::RadioButton());
			this->soja = (gcnew System::Windows::Forms::RadioButton());
			this->carne = (gcnew System::Windows::Forms::RadioButton());
			this->bacon = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
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
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox9);
			this->groupBox4->Controls->Add(this->numLanche);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->botaoLanche);
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Location = System::Drawing::Point(401, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(505, 157);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Lanche";
			// 
			// numLanche
			// 
			this->numLanche->AutoSize = true;
			this->numLanche->Location = System::Drawing::Point(347, 135);
			this->numLanche->Name = L"numLanche";
			this->numLanche->Size = System::Drawing::Size(13, 13);
			this->numLanche->TabIndex = 43;
			this->numLanche->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(276, 135);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 13);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Produzidos: ";
			// 
			// botaoLanche
			// 
			this->botaoLanche->Location = System::Drawing::Point(279, 105);
			this->botaoLanche->Name = L"botaoLanche";
			this->botaoLanche->Size = System::Drawing::Size(157, 23);
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
			this->groupBox1->Location = System::Drawing::Point(10, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(117, 120);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tipo de Lanche:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->numBebida);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->nomeBebida);
			this->groupBox5->Controls->Add(this->botaoBebida);
			this->groupBox5->Controls->Add(this->groupBox2);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Location = System::Drawing::Point(401, 165);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(505, 157);
			this->groupBox5->TabIndex = 31;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Bebida";
			// 
			// numBebida
			// 
			this->numBebida->AutoSize = true;
			this->numBebida->Location = System::Drawing::Point(347, 73);
			this->numBebida->Name = L"numBebida";
			this->numBebida->Size = System::Drawing::Size(13, 13);
			this->numBebida->TabIndex = 42;
			this->numBebida->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(276, 73);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 13);
			this->label17->TabIndex = 41;
			this->label17->Text = L"Produzidos: ";
			// 
			// nomeBebida
			// 
			this->nomeBebida->Location = System::Drawing::Point(342, 17);
			this->nomeBebida->Name = L"nomeBebida";
			this->nomeBebida->Size = System::Drawing::Size(147, 20);
			this->nomeBebida->TabIndex = 35;
			// 
			// botaoBebida
			// 
			this->botaoBebida->Location = System::Drawing::Point(279, 128);
			this->botaoBebida->Name = L"botaoBebida";
			this->botaoBebida->Size = System::Drawing::Size(157, 23);
			this->botaoBebida->TabIndex = 35;
			this->botaoBebida->Text = L"Fazer Pedido";
			this->botaoBebida->UseVisualStyleBackColor = true;
			this->botaoBebida->Click += gcnew System::EventHandler(this, &MyForm::botaoBebida_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tempo4Bebida);
			this->groupBox2->Controls->Add(this->tempo3Bebida);
			this->groupBox2->Controls->Add(this->tempo2Bebida);
			this->groupBox2->Controls->Add(this->tempo1Bebida);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Location = System::Drawing::Point(14, 17);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(238, 135);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tempos (segundos)";
			// 
			// tempo4Bebida
			// 
			this->tempo4Bebida->Location = System::Drawing::Point(170, 100);
			this->tempo4Bebida->Name = L"tempo4Bebida";
			this->tempo4Bebida->Size = System::Drawing::Size(48, 20);
			this->tempo4Bebida->TabIndex = 30;
			// 
			// tempo3Bebida
			// 
			this->tempo3Bebida->Location = System::Drawing::Point(170, 75);
			this->tempo3Bebida->Name = L"tempo3Bebida";
			this->tempo3Bebida->Size = System::Drawing::Size(48, 20);
			this->tempo3Bebida->TabIndex = 29;
			// 
			// tempo2Bebida
			// 
			this->tempo2Bebida->Location = System::Drawing::Point(170, 49);
			this->tempo2Bebida->Name = L"tempo2Bebida";
			this->tempo2Bebida->Size = System::Drawing::Size(48, 20);
			this->tempo2Bebida->TabIndex = 28;
			// 
			// tempo1Bebida
			// 
			this->tempo1Bebida->Location = System::Drawing::Point(170, 19);
			this->tempo1Bebida->Name = L"tempo1Bebida";
			this->tempo1Bebida->Size = System::Drawing::Size(48, 20);
			this->tempo1Bebida->TabIndex = 27;
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
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->numSobremesa);
			this->groupBox6->Controls->Add(this->label22);
			this->groupBox6->Controls->Add(this->nomeSobremesa);
			this->groupBox6->Controls->Add(this->botaoSobremesa);
			this->groupBox6->Controls->Add(this->groupBox3);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Location = System::Drawing::Point(401, 328);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(505, 185);
			this->groupBox6->TabIndex = 31;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Sobremesa";
			// 
			// numSobremesa
			// 
			this->numSobremesa->AutoSize = true;
			this->numSobremesa->Location = System::Drawing::Point(347, 88);
			this->numSobremesa->Name = L"numSobremesa";
			this->numSobremesa->Size = System::Drawing::Size(13, 13);
			this->numSobremesa->TabIndex = 44;
			this->numSobremesa->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(276, 88);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(65, 13);
			this->label22->TabIndex = 42;
			this->label22->Text = L"Produzidos: ";
			// 
			// nomeSobremesa
			// 
			this->nomeSobremesa->Location = System::Drawing::Point(342, 24);
			this->nomeSobremesa->Name = L"nomeSobremesa";
			this->nomeSobremesa->Size = System::Drawing::Size(147, 20);
			this->nomeSobremesa->TabIndex = 36;
			// 
			// botaoSobremesa
			// 
			this->botaoSobremesa->Location = System::Drawing::Point(279, 150);
			this->botaoSobremesa->Name = L"botaoSobremesa";
			this->botaoSobremesa->Size = System::Drawing::Size(157, 23);
			this->botaoSobremesa->TabIndex = 36;
			this->botaoSobremesa->Text = L"Fazer Pedido";
			this->botaoSobremesa->UseVisualStyleBackColor = true;
			this->botaoSobremesa->Click += gcnew System::EventHandler(this, &MyForm::botaoSobremesa_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tempo4Sobremesa);
			this->groupBox3->Controls->Add(this->tempo3Sobremesa);
			this->groupBox3->Controls->Add(this->tempo2Sobremesa);
			this->groupBox3->Controls->Add(this->tempo1Sobremesa);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Location = System::Drawing::Point(6, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(238, 136);
			this->groupBox3->TabIndex = 43;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tempos (segundos)";
			// 
			// tempo4Sobremesa
			// 
			this->tempo4Sobremesa->Location = System::Drawing::Point(178, 107);
			this->tempo4Sobremesa->Name = L"tempo4Sobremesa";
			this->tempo4Sobremesa->Size = System::Drawing::Size(48, 20);
			this->tempo4Sobremesa->TabIndex = 34;
			// 
			// tempo3Sobremesa
			// 
			this->tempo3Sobremesa->Location = System::Drawing::Point(178, 79);
			this->tempo3Sobremesa->Name = L"tempo3Sobremesa";
			this->tempo3Sobremesa->Size = System::Drawing::Size(48, 20);
			this->tempo3Sobremesa->TabIndex = 33;
			// 
			// tempo2Sobremesa
			// 
			this->tempo2Sobremesa->Location = System::Drawing::Point(178, 53);
			this->tempo2Sobremesa->Name = L"tempo2Sobremesa";
			this->tempo2Sobremesa->Size = System::Drawing::Size(48, 20);
			this->tempo2Sobremesa->TabIndex = 32;
			// 
			// tempo1Sobremesa
			// 
			this->tempo1Sobremesa->Location = System::Drawing::Point(178, 23);
			this->tempo1Sobremesa->Name = L"tempo1Sobremesa";
			this->tempo1Sobremesa->Size = System::Drawing::Size(48, 20);
			this->tempo1Sobremesa->TabIndex = 31;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 86);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(47, 13);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Preparar";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 30);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(88, 13);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Conferir Estoque ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 114);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(45, 13);
			this->label20->TabIndex = 18;
			this->label20->Text = L"Embalar";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 60);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(105, 13);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Separar Ingredientes";
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
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(13) {this->Etapa4L2, 
				this->Etapa3L2, this->Etapa2L2, this->rectangleShape6, this->Etapa1L2, this->rectangleShape4, this->rectangleShape3, this->rectangleShape2, 
				this->rectangleShape1, this->Etapa4L1, this->Etapa3L1, this->Etapa2L1, this->Etapa1L1});
			this->shapeContainer1->Size = System::Drawing::Size(920, 525);
			this->shapeContainer1->TabIndex = 32;
			this->shapeContainer1->TabStop = false;
			// 
			// Etapa4L2
			// 
			this->Etapa4L2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa4L2->Location = System::Drawing::Point(20, 265);
			this->Etapa4L2->Name = L"Etapa4L2";
			this->Etapa4L2->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa3L2
			// 
			this->Etapa3L2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa3L2->Location = System::Drawing::Point(20, 235);
			this->Etapa3L2->Name = L"Etapa3L2";
			this->Etapa3L2->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa2L2
			// 
			this->Etapa2L2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa2L2->Location = System::Drawing::Point(20, 205);
			this->Etapa2L2->Name = L"Etapa2L2";
			this->Etapa2L2->Size = System::Drawing::Size(35, 25);
			// 
			// rectangleShape6
			// 
			this->rectangleShape6->Location = System::Drawing::Point(440, 250);
			this->rectangleShape6->Name = L"rectangleShape6";
			this->rectangleShape6->Size = System::Drawing::Size(40, 25);
			// 
			// Etapa1L2
			// 
			this->Etapa1L2->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa1L2->Location = System::Drawing::Point(20, 175);
			this->Etapa1L2->Name = L"Etapa1L2";
			this->Etapa1L2->Size = System::Drawing::Size(35, 25);
			// 
			// rectangleShape4
			// 
			this->rectangleShape4->Location = System::Drawing::Point(443, 295);
			this->rectangleShape4->Name = L"rectangleShape4";
			this->rectangleShape4->Size = System::Drawing::Size(35, 25);
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->Location = System::Drawing::Point(443, 265);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->Size = System::Drawing::Size(35, 25);
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->Location = System::Drawing::Point(443, 235);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(35, 25);
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->rectangleShape1->Location = System::Drawing::Point(443, 205);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa4L1
			// 
			this->Etapa4L1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa4L1->Location = System::Drawing::Point(20, 115);
			this->Etapa4L1->Name = L"Etapa4L1";
			this->Etapa4L1->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa3L1
			// 
			this->Etapa3L1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa3L1->Location = System::Drawing::Point(20, 85);
			this->Etapa3L1->Name = L"Etapa3L1";
			this->Etapa3L1->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa2L1
			// 
			this->Etapa2L1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa2L1->Location = System::Drawing::Point(20, 55);
			this->Etapa2L1->Name = L"Etapa2L1";
			this->Etapa2L1->Size = System::Drawing::Size(35, 25);
			// 
			// Etapa1L1
			// 
			this->Etapa1L1->FillStyle = Microsoft::VisualBasic::PowerPacks::FillStyle::Solid;
			this->Etapa1L1->Location = System::Drawing::Point(20, 25);
			this->Etapa1L1->Name = L"Etapa1L1";
			this->Etapa1L1->Size = System::Drawing::Size(35, 25);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Etapa1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Etapa4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(81, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Etapa2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(81, 98);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Etapa3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(81, 182);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Etapa1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(81, 218);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 37;
			this->label12->Text = L"Etapa2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(81, 248);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 38;
			this->label13->Text = L"Etapa3";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(81, 278);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Etapa4";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label24);
			this->groupBox7->Location = System::Drawing::Point(34, 339);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(343, 81);
			this->groupBox7->TabIndex = 33;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Linha1: Fila de Espera";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 30);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(335, 13);
			this->label24->TabIndex = 16;
			this->label24->Text = L"Colocar os itens que estão em espera na thread, não implementei isso";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Location = System::Drawing::Point(34, 426);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(343, 81);
			this->groupBox8->TabIndex = 34;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Linha2: Fila de Espera";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(6, 30);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(335, 13);
			this->label23->TabIndex = 16;
			this->label23->Text = L"Colocar os itens que estão em espera na thread, não implementei isso";
			// 
			// xBurger
			// 
			this->xBurger->AutoSize = true;
			this->xBurger->Location = System::Drawing::Point(7, 20);
			this->xBurger->Name = L"xBurger";
			this->xBurger->Size = System::Drawing::Size(72, 17);
			this->xBurger->TabIndex = 0;
			this->xBurger->TabStop = true;
			this->xBurger->Text = L"X - Burger";
			this->xBurger->UseVisualStyleBackColor = true;
			// 
			// xTudo
			// 
			this->xTudo->AutoSize = true;
			this->xTudo->Location = System::Drawing::Point(8, 66);
			this->xTudo->Name = L"xTudo";
			this->xTudo->Size = System::Drawing::Size(66, 17);
			this->xTudo->TabIndex = 1;
			this->xTudo->TabStop = true;
			this->xTudo->Text = L"X - Tudo";
			this->xTudo->UseVisualStyleBackColor = true;
			// 
			// xVeg
			// 
			this->xVeg->AutoSize = true;
			this->xVeg->Location = System::Drawing::Point(8, 89);
			this->xVeg->Name = L"xVeg";
			this->xVeg->Size = System::Drawing::Size(60, 17);
			this->xVeg->TabIndex = 2;
			this->xVeg->TabStop = true;
			this->xVeg->Text = L"X - Veg";
			this->xVeg->UseVisualStyleBackColor = true;
			// 
			// xBacon
			// 
			this->xBacon->AutoSize = true;
			this->xBacon->Location = System::Drawing::Point(8, 45);
			this->xBacon->Name = L"xBacon";
			this->xBacon->Size = System::Drawing::Size(72, 17);
			this->xBacon->TabIndex = 3;
			this->xBacon->TabStop = true;
			this->xBacon->Text = L"X - Bacon";
			this->xBacon->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->queijo);
			this->groupBox9->Controls->Add(this->soja);
			this->groupBox9->Controls->Add(this->carne);
			this->groupBox9->Controls->Add(this->bacon);
			this->groupBox9->Location = System::Drawing::Point(140, 19);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(130, 120);
			this->groupBox9->TabIndex = 33;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Adicional:";
			// 
			// queijo
			// 
			this->queijo->AutoSize = true;
			this->queijo->Location = System::Drawing::Point(8, 45);
			this->queijo->Name = L"queijo";
			this->queijo->Size = System::Drawing::Size(55, 17);
			this->queijo->TabIndex = 3;
			this->queijo->TabStop = true;
			this->queijo->Text = L"Queijo";
			this->queijo->UseVisualStyleBackColor = true;
			// 
			// soja
			// 
			this->soja->AutoSize = true;
			this->soja->Location = System::Drawing::Point(8, 89);
			this->soja->Name = L"soja";
			this->soja->Size = System::Drawing::Size(107, 17);
			this->soja->TabIndex = 2;
			this->soja->TabStop = true;
			this->soja->Text = L"Hamburguer Soja";
			this->soja->UseVisualStyleBackColor = true;
			// 
			// carne
			// 
			this->carne->AutoSize = true;
			this->carne->Location = System::Drawing::Point(8, 66);
			this->carne->Name = L"carne";
			this->carne->Size = System::Drawing::Size(114, 17);
			this->carne->TabIndex = 1;
			this->carne->TabStop = true;
			this->carne->Text = L"Hamburguer Carne";
			this->carne->UseVisualStyleBackColor = true;
			// 
			// bacon
			// 
			this->bacon->AutoSize = true;
			this->bacon->Location = System::Drawing::Point(7, 20);
			this->bacon->Name = L"bacon";
			this->bacon->Size = System::Drawing::Size(56, 17);
			this->bacon->TabIndex = 0;
			this->bacon->TabStop = true;
			this->bacon->Text = L"Bacon";
			this->bacon->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(920, 525);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
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
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

public:		void processo(string nome);
public:		void UpdateRichText(String^ texto);
public:		void setCor(int i, int n);
public:		void resetCor(int i, int n);

private: System::Void botaoLanche_Click_1(System::Object^  sender, System::EventArgs^  e);
private: System::Void botaoBebida_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void botaoSobremesa_Click(System::Object^  sender, System::EventArgs^  e);
		 
};
}
