#include "MyForm.h"
#include "Linha1.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include <queue>

using namespace System::Windows::Forms;
using namespace std;
using namespace TP1V1;
using namespace System::Threading;

int n1Lanche = 0, n2Lanche = 0;
int nBebida = 0, nSobremesa = 0;
int contLanche = 0, contBebida = 0, contSobremesa = 0;
bool linha1criada = false, linha2criada = false;
bool vegLanche;
bool geladaBebida, dietBebida;
bool geladaSobremesa, dietSobremesa, lacSobremesa;
Linha1* linha1;
Linha1* linha2;

int tempo1, tempo2, tempo3, tempo4;


System::Void MyForm::botaoLanche_Click_1(System::Object^  sender, System::EventArgs^  e){
	if(!linha1criada){
		linha1 = new Linha1(this, 1);
		linha1criada = true;
	}
	if(!linha2criada){
		linha2 = new Linha1(this, 2);
		linha2criada = true;
	}
	
	if(xBurger->Checked){
		tempo1 = 1, tempo2 = 2, tempo3 = 2, tempo4 = 1;
	}
	if(xBacon->Checked){
		tempo1 = 2, tempo2 = 3, tempo3 = 3, tempo4 = 1;
	}
	if(xTudo->Checked){
		tempo1 = 2, tempo2 = 4, tempo3 = 5, tempo4 = 2;
	}
	if(xVeg->Checked){
		tempo1 = 1, tempo2 = 3, tempo3 = 4, tempo4 = 1;
	}
	
	if(bacon->Checked){
		tempo1 += 0.3, tempo2 += 0.3, tempo3 +=0.3, tempo4 += 0.3;
	}
	if(queijo->Checked){
		tempo1 += 0.1, tempo2 += 0.3, tempo3 +=0.1, tempo4 += 0.1;
	}
	if(carne->Checked){
		tempo1 += 0.3, tempo2 += 1, tempo3 +=1, tempo4 += 0.3;
	}
	if(soja->Checked){
		tempo1 += 0.3, tempo2 += 0.5, tempo3 +=0.5, tempo4 += 0.3;
	}

	tempo1 = tempo1*1000; //Passando para segundos
	tempo2 = tempo2*1000;
	tempo3 = tempo3*1000;
	tempo4 = tempo4*1000;

	if ((n1Lanche + nSobremesa) >= 3){
		if((n2Lanche+nBebida) >= 3){
			MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		}
	}
	if((n1Lanche+nSobremesa) <= (n2Lanche+nBebida)){
		linha1->setItem(tempo1, tempo2, tempo3, tempo4, "Lanche");
		linha1->StartThread();
		
		n1Lanche++;
		
	}
	else{
		linha2->setItem(tempo1, tempo2, tempo3, tempo4, "Lanche");
		linha2->StartThread();
		n2Lanche++;
		
	}
	
}


System::Void MyForm::botaoBebida_Click(System::Object^  sender, System::EventArgs^  e){
	if(!linha2criada){
		linha2 = new Linha1(this, 2);
		linha2criada = true;
	}

	int tempo1 = Convert::ToInt32(tempo1Bebida->Text);
	int tempo2 = Convert::ToInt32(tempo2Bebida->Text);
	int tempo3 = Convert::ToInt32(tempo3Bebida->Text);
	int tempo4 = Convert::ToInt32(tempo4Bebida->Text);
	
	tempo1 = tempo1*1000; //Passando para segundos
	tempo2 = tempo2*1000;
	tempo3 = tempo3*1000;
	tempo4 = tempo4*1000;
	
	String^ aux = nomeBebida->Text;
	msclr::interop::marshal_context context;
    string nome = context.marshal_as<std::string>(aux);

	if ((nBebida + n2Lanche) >= 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		linha2->setItem(tempo1, tempo2, tempo3, tempo4, "Bebida");
		linha2->StartThread();
		
		nBebida++;
	}
	
}

System::Void MyForm::botaoSobremesa_Click(System::Object^  sender, System::EventArgs^  e){
	if(!linha1criada){
		linha1 = new Linha1(this, 1);
		linha1criada = true;
	}
	int tempo1 = Convert::ToInt32(tempo1Sobremesa->Text);
	int tempo2 = Convert::ToInt32(tempo2Sobremesa->Text);
	int tempo3 = Convert::ToInt32(tempo3Sobremesa->Text);
	int tempo4 = Convert::ToInt32(tempo4Sobremesa->Text);

	tempo1 = tempo1*1000; //Passando para segundos
	tempo2 = tempo2*1000;
	tempo3 = tempo3*1000;
	tempo4 = tempo4*1000;
	
	String^ aux = nomeSobremesa->Text;
	msclr::interop::marshal_context context;
    string nome = context.marshal_as<std::string>(aux);

	if ((n1Lanche + nSobremesa) >= 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		linha1->setItem(tempo1, tempo2, tempo3, tempo4, "Sobremesa");
		linha1->StartThread();
		
		nSobremesa++;
	} 
}


//Realizada após o pop(), decrementa contador do numero de itens
void MyForm::processo(string nome){
	if(nome == "Lanche"){
		n1Lanche--;
		contLanche++;
		System::String^ s = contLanche.ToString();
		numLanche->Text = s;
		
	}
	if(nome == "Sobremesa"){
		nSobremesa--;
		contSobremesa++;
		System::String^ s = contSobremesa.ToString();
		numSobremesa->Text = s;
		
	}
	if(nome == "Bebida"){
		nBebida--;
		contBebida++;
		System::String^ s = contBebida.ToString();
		numBebida->Text = s;
	}
}

void MyForm::setCor(int i, int n){
	if(n==1){
		if(i == 1){
			Etapa1L1->FillColor = Color::Green;
		}
		if(i == 2){
			Etapa2L1->FillColor = Color::Green;
		}
		if(i == 3){
			Etapa3L1->FillColor = Color::Green;
		}
		if(i == 4){
			Etapa4L1->FillColor = Color::Green;
		}
	}
	if(n==2){
		if(i == 1){
			Etapa1L2->FillColor = Color::Green;
		}
		if(i == 2){
			Etapa2L2->FillColor = Color::Green;
		}
		if(i == 3){
			Etapa3L2->FillColor = Color::Green;
		}
		if(i == 4){
			Etapa4L2->FillColor = Color::Green;
		}
	}
}

void MyForm::resetCor(int i, int n){
	if(n == 1){
		if(i == 1){
			Etapa1L1->FillColor = Color::Black;
		}
		if(i == 2){
			Etapa2L1->FillColor = Color::Black;
		}
		if(i == 3){
			Etapa3L1->FillColor = Color::Black;
		}
		if(i == 4){
			Etapa4L1->FillColor = Color::Black;
		}
	}
	if(n == 2){
		if(i == 1){
			Etapa1L2->FillColor = Color::Black;
		}
		if(i == 2){
			Etapa2L2->FillColor = Color::Black;
		}
		if(i == 3){
			Etapa3L2->FillColor = Color::Black;
		}
		if(i == 4){
			Etapa4L2->FillColor = Color::Black;
		}
	}
}

void  MyForm::UpdateRichText(String^ texto){
          //richTextBox1->AppendText(texto);
}



