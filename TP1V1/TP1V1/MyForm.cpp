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

HANDLE hSemaphore;
HANDLE hMutex;

int tempo1, tempo2, tempo3, tempo4;

//Unico semaforo
System::Void MyForm::botaoLanche_Click_1(System::Object^  sender, System::EventArgs^  e){


	if(!linha1criada){
		linha1 = new Linha1(this, 1);
		linha1criada = true;
	}
	if(!linha2criada){
		linha2 = new Linha1(this, 2);
		linha2criada = true;
	}
	string lanche;
	if(xBurger->Checked){
		tempo1 = 1, tempo2 = 2, tempo3 = 2, tempo4 = 1;
		lanche = "X-Burguer";
	}
	if(xBacon->Checked){
		tempo1 = 2, tempo2 = 3, tempo3 = 3, tempo4 = 1;
		lanche = "X-Bacon";
	}
	if(xTudo->Checked){
		tempo1 = 2, tempo2 = 4, tempo3 = 5, tempo4 = 2;
		lanche = "X-Tudo";
	}
	if(xVeg->Checked){
		tempo1 = 1, tempo2 = 3, tempo3 = 4, tempo4 = 1;
		lanche = "X-Veg";
	}

	if(bacon->Checked){
		tempo1 += 0.3, tempo2 += 0.3, tempo3 +=0.3, tempo4 += 0.3;
		lanche = lanche + " com bacon";
	}
	if(queijo->Checked){
		tempo1 += 0.1, tempo2 += 0.3, tempo3 +=0.1, tempo4 += 0.1;
		lanche = lanche + " com queijo";
	}
	if(carne->Checked){
		tempo1 += 0.3, tempo2 += 1, tempo3 +=1, tempo4 += 0.3;
		lanche = lanche + " com carne";
	}
	if(soja->Checked){
		tempo1 += 0.3, tempo2 += 0.5, tempo3 +=0.5, tempo4 += 0.3;
		lanche = lanche + " de soja";
	}

	tempo1 = tempo1*1000; //Passando para segundos
	tempo2 = tempo2*1000;
	tempo3 = tempo3*1000;
	tempo4 = tempo4*1000;

	if ((n1Lanche + nSobremesa) >= 3){ //FILA SIZE*********
		if((n2Lanche+nBebida) >= 3){
			MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		}
	}
	if((n1Lanche+nSobremesa) <= (n2Lanche+nBebida)){
		linha1->setItem(tempo1, tempo2, tempo3, tempo4, lanche, hSemaphore, hMutex);
		linha1->StartThread();

		WaitForSingleObject(linha1, INFINITE);
		CloseHandle(linha1);	
		n1Lanche++;
		
	}
	else{
		linha2->setItem(tempo1, tempo2, tempo3, tempo4, lanche, hSemaphore, hMutex);
		linha2->StartThread();
		WaitForSingleObject(linha2, INFINITE);
		CloseHandle(linha2);
		n2Lanche++;
		
	}

	CloseHandle(hMutex);
	CloseHandle(hSemaphore);
	
}

System::Void MyForm::botaoBebida_Click(System::Object^  sender, System::EventArgs^  e){
	if(!linha2criada){
		linha2 = new Linha1(this, 2);
		linha2criada = true;
	}

	string bebida;
	if(bebidaSuc->Checked){
		tempo1 = 2, tempo2 = 1, tempo3 = 1, tempo4 = 1;
		bebida = "Suco";
	}
	if(bebidaRef->Checked){
		tempo1 = 2, tempo2 = 1, tempo3 = 1, tempo4 = 1;
		bebida = "Refri";
	}
	if(bebidaCer->Checked){
		tempo1 = 1, tempo2 = 2, tempo3 = 3, tempo4 = 2;
		bebida = "Cerveja";
	}
	if(bebidaAgua->Checked){
		tempo1 = 1, tempo2 = 3, tempo3 = 4, tempo4 = 1;
		bebida = "Agua";
	}
	
	if(bebidaCarGel->Checked){
		tempo1 += 0.5, tempo2 += 0.2, tempo3 +=0.1, tempo4 += 0.4;
		bebida = bebida + " gelada";
	}
	if(bebidaCarCAlc->Checked){
		tempo1 += 0.5, tempo2 += 0.2, tempo3 +=0.1, tempo4 += 0.4;
		bebida = bebida + " com alcool";
	}
	if(bebidaCarQuen->Checked){
		tempo1 += 0.1, tempo2 += 1, tempo3 +=1.2, tempo4 += 1.3;
		bebida = bebida + " quente";
	}
	if(bebidaCarSAlc->Checked){
		tempo1 += 1.3, tempo2 += 0.7, tempo3 +=0.5, tempo4 += 0.3;
		bebida = bebida + " sem alcool";
	}
	
	tempo1 = tempo1*1000; //Passando para segundos
	tempo2 = tempo2*1000;
	tempo3 = tempo3*1000;
	tempo4 = tempo4*1000;
	
	if ((nBebida + n2Lanche) >= 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		linha2->setItem(tempo1, tempo2, tempo3, tempo4, bebida,hSemaphore, hMutex);
		linha2->StartThread();
		WaitForSingleObject(linha2, INFINITE);
		CloseHandle(linha2);
		nBebida++;
	}

	CloseHandle(hMutex);
	CloseHandle(hSemaphore);
	
}

System::Void MyForm::botaoSobremesa_Click(System::Object^  sender, System::EventArgs^  e){
	if(!linha1criada){
		linha1 = new Linha1(this, 1);
		linha1criada = true;
	}
	
	string sobremesa;
	if(SobBolo->Checked){
		tempo1 = 1, tempo2 = 1, tempo3 = 1, tempo4 = 1;
		sobremesa = "Bolo";
	}
	if(SobPav->Checked){
		tempo1 = 2, tempo2 = 3, tempo3 = 3, tempo4 = 1;
		sobremesa = "Pave";
	}
	if(SobPud->Checked){
		tempo1 = 2, tempo2 = 1, tempo3 = 3, tempo4 = 2;
		sobremesa = "Pudim";
	}
	if(SobSorv->Checked){
		tempo1 = 1, tempo2 = 3, tempo3 = 2, tempo4 = 1;
		sobremesa = "Sorvete";
	}
	
	if(SobCarDiet->Checked){
		tempo1 += 0.3, tempo2 += 0.5, tempo3 +=0.8, tempo4 += 0.3;
		sobremesa = sobremesa + " diet";
	}
	if(SobCarLight->Checked){
		tempo1 += 1, tempo2 += 0.3, tempo3 +=0.9, tempo4 += 0.1;
		sobremesa = sobremesa + " light";
	}

	tempo1 = tempo1*1000; //Passando para segundos
	tempo2 = tempo2*1000;
	tempo3 = tempo3*1000;
	tempo4 = tempo4*1000;

	if ((n1Lanche + nSobremesa) >= 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		linha1->setItem(tempo1, tempo2, tempo3, tempo4,sobremesa,hSemaphore, hMutex);
		linha1->StartThread();
		WaitForSingleObject(linha1, INFINITE);
		CloseHandle(linha1);
		nSobremesa++;
	} 

	CloseHandle(hMutex);
	CloseHandle(hSemaphore);

}


//Realizada após o pop(), decrementa contador do numero de itens
void MyForm::processo(string nome){
		if(nome.find("X-Burguer") || nome.find("X-Tudo")|| nome.find("X-Veg") || nome.find("X-Bacon")){
			n1Lanche--;
			contLanche++;
			System::String^ lanche = contLanche.ToString();
			numLanche->Text = lanche;
		
		}
		if(nome.find("Sorvete") || nome.find("Pudim")|| nome.find("Pave") || nome.find("Bolo")){
			nSobremesa--;
			contSobremesa++;
			System::String^ sobremesa = contSobremesa.ToString();
			numSobremesa->Text = sobremesa;
		}
		if(nome.find("Refri") || nome.find("Cerveja")|| nome.find("Agua") || nome.find("Suco")){
			nBebida--;
			contBebida++;
			System::String^ bebida = contBebida.ToString();
			numBebida->Text = bebida;
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

void MyForm::setNome(int i, int n, string nome){
	System::String^ str = gcnew System::String(nome.c_str());

	if(n==1){
		if(i == 1){
			label31->Text=str;
		}
		if(i == 2){
			label25->Text=str;
		}
		if(i == 3){
			label9->Text=str;
		}
		if(i == 4){
			label30->Text=str;
		}
	}
	if(n==2){
		if(i == 1){
			label8->Text=str;
		}
		if(i == 2){
			label7->Text=str;
		}
		if(i == 3){
			label6->Text=str;
		}
		if(i == 4){
			label1->Text=str;
		}
	}
}

void MyForm::resetNome(int i, int n, string nome){
	System::String^ str = gcnew System::String(nome.c_str());

	if(n==1){
		if(i == 1){
			label31->Text=str;
		}
		if(i == 2){
			label25->Text=str;
		}
		if(i == 3){
			label9->Text=str;
		}
		if(i == 4){
			label30->Text=str;
		}
	}
	if(n==2){
		if(i == 1){
			label8->Text=str;
		}
		if(i == 2){
			label7->Text=str;
		}
		if(i == 3){
			label6->Text=str;
		}
		if(i == 4){
			label1->Text=str;
		}
	}
}

