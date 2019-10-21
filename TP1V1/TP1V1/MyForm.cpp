#include "MyForm.h"
#include "ThreadLanche.h"
#include "ThreadBebida.h"
#include "ThreadSobremesa.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include <queue>

using namespace System::Windows::Forms;
using namespace std;
using namespace TP1V1;
using namespace System::Threading;

queue<ThreadLanche*> filaLanche;
queue<ThreadBebida*> filaBebida;
queue<ThreadSobremesa*> filaSobremesa;
int nLanche = 0;
int nBebida = 0;
int nSobremesa = 0;
bool vegLanche;
bool geladaBebida, dietBebida;
bool geladaSobremesa, dietSobremesa, lacSobremesa;

void WorkCompleted()
{
    Thread::Sleep(5000);
    MessageBox::Show("Thread completed!");

}

System::Void MyForm::botaoLanche_Click_1(System::Object^  sender, System::EventArgs^  e){

	int tempo1 = Convert::ToInt32(tempo1Lanche->Text);
	int tempo2 = Convert::ToInt32(tempo2Lanche->Text);
	int tempo3 = Convert::ToInt32(tempo3Lanche->Text);
	int tempo4 = Convert::ToInt32(tempo4Lanche->Text);

	tempo1 = tempo1*1000; //Passando para segundos
	tempo2 = tempo2*1000;
	tempo3 = tempo3*1000;
	tempo4 = tempo4*1000;

	String^ aux = nomeLanche->Text;
	msclr::interop::marshal_context context;
    string nome = context.marshal_as<std::string>(aux);
	if ((nLanche + nSobremesa) == 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		//Tentar criar nova thread para cada processo!
		//Thread^ backgroundThread = gcnew Thread(gcnew ThreadStart(this, &MyForm1::botaoLanche_Click_1));
		//backgroundThread->Start();

		ThreadLanche* lanche = new ThreadLanche(this, nome, vegLanche, tempo1, tempo2, tempo3, tempo4);

		filaLanche.push(lanche);
		nLanche++;
		lanche->CreateThread();
		lanche->Processos(tempo1, tempo2, tempo3,tempo4, aux);
		nLanche--;
		//richTextBox1->AppendText("item criado\n");
	}
}

System::Void MyForm::botaoBebida_Click(System::Object^  sender, System::EventArgs^  e){
	int tempo1 = Convert::ToInt32(tempo1Bebida->Text);
	int tempo2 = Convert::ToInt32(tempo2Bebida->Text);
	int tempo3 = Convert::ToInt32(tempo3Bebida->Text);
	int tempo4 = Convert::ToInt32(tempo4Bebida->Text);
	
	/*tempo1 = tempo1*1000; //Passando para segundos
	tempo2 = tempo2*1000;
	tempo3 = tempo3*1000;
	tempo4 = tempo4*1000;*/

	String^ aux = nomeBebida->Text;
	msclr::interop::marshal_context context;
    string nome = context.marshal_as<std::string>(aux);

	if (nBebida == 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		ThreadBebida* bebida = new ThreadBebida(this, nome, geladaBebida, dietBebida, tempo1, tempo2, tempo3, tempo4);
		filaBebida.push(bebida);
		nBebida++;
		bebida->Processos(tempo1, tempo2, tempo3,tempo4, aux);
		nBebida--;
		//richTextBox1->AppendText("item criado\n");
	}
}

System::Void MyForm::botaoSobremesa_Click(System::Object^  sender, System::EventArgs^  e){
	int tempo1 = Convert::ToInt32(tempo1Sobremesa->Text);
	int tempo2 = Convert::ToInt32(tempo2Sobremesa->Text);
	int tempo3 = Convert::ToInt32(tempo3Sobremesa->Text);
	int tempo4 = Convert::ToInt32(tempo4Sobremesa->Text);

	/*tempo1 = tempo1*1000; //Passando para segundos
	tempo2 = tempo2*1000;
	tempo3 = tempo3*1000;
	tempo4 = tempo4*1000;*/

	String^ aux = nomeSobremesa->Text;
	msclr::interop::marshal_context context;
    string nome = context.marshal_as<std::string>(aux);

	if ((nLanche + nSobremesa) == 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		ThreadSobremesa* sobremesa = new ThreadSobremesa(this, nome, geladaSobremesa, dietSobremesa, lacSobremesa, tempo1, tempo2, tempo3, tempo4);
		filaSobremesa.push(sobremesa);
		nSobremesa++;
		sobremesa->Processos(tempo1, tempo2, tempo3,tempo4, aux);
		nSobremesa--;
		//richTextBox1->AppendText("item criado\n");
	}
}

void  MyForm::UpdateRichText(String^ texto){

          richTextBox1->AppendText(texto);
		  richTextBox1->Refresh();

	
}



