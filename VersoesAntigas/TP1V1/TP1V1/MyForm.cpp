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

bool vegLanche;
bool geladaBebida, dietBebida;
bool geladaSobremesa, dietSobremesa, lacSobremesa;


System::Void MyForm::botaoLanche_Click_1(System::Object^  sender, System::EventArgs^  e){
	if(filaLanche.size() != 0){
		processos();
	}
//	backgroundWorker1->RunWorkerAsync(1);  //starting background worker

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
	if ((filaLanche.size() + filaSobremesa.size()) >= 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		//Tentar criar nova thread para cada processo!

		ThreadLanche* lanche = new ThreadLanche(this, nome, vegLanche, tempo1, tempo2, tempo3, tempo4);
		lanche->setPronto(false);

		filaLanche.push(lanche);
		filaLanche.front()->CreateThread();
		//lanche->Processos(tempo1, tempo2, tempo3,tempo4, aux);
		//nLanche--;
		richTextBox1->AppendText("item criado\n");
	}
}
/*
System::Void MyForm::backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
 
				while(true)
				{
				 if(backgroundWorker1->CancellationPending) //if it was cancelled
					{
						e->Cancel=true;
						break;
					}
				 if(progressBar1->Value==progressBar1->Maximum)  //if the progress bar value reached maximum
				 {
					 break;
				 }
 
				 backgroundWorker1->ReportProgress(10);  //reporting progress
				 Thread::Sleep(1000);   //wait for 1 second
				}
			 }

System::Void MyForm::backgroundWorker1_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
 
			 progressBar1->Value+=e->ProgressPercentage;  //rising the progressbar's value
 
		 }

System::Void MyForm::backgroundWorker1_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
 
			 progressBar1->Value=0;   //reseting value
 
			 if(e->Cancelled)    //Messages for the events
			 {
				 MessageBox::Show("You have cancelled background worker!!!");
			 }
			 else
			 {
				 MessageBox::Show("Work completed!!");
			 }
		 }
		 */
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

	if (filaBebida.size() >= 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		ThreadBebida* bebida = new ThreadBebida(this, nome, geladaBebida, dietBebida, tempo1, tempo2, tempo3, tempo4);
		filaBebida.push(bebida);
		//bebida->Processos(tempo1, tempo2, tempo3,tempo4, aux);
		//richTextBox1->AppendText("item criado\n");
	}
}

System::Void MyForm::botaoSobremesa_Click(System::Object^  sender, System::EventArgs^  e){
	if(filaSobremesa.size() != 0){
		processos();
	}
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

	if ((filaLanche.size() + filaSobremesa.size()) >= 3){
		MessageBox::Show("Fila cheia! Aguarde.","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	else{
		ThreadSobremesa* sobremesa = new ThreadSobremesa(this, nome, geladaSobremesa, dietSobremesa, lacSobremesa, tempo1, tempo2, tempo3, tempo4);
		filaSobremesa.push(sobremesa);

		richTextBox1->AppendText("item criado\n");
	}
}

void  MyForm::UpdateRichText(String^ texto){

		richTextBox1->AppendText(texto);
		richTextBox1->Refresh();
	
}


void MyForm::processos(){
	
	if(filaLanche.front()->GetKillThread()){
		filaLanche.pop();
		richTextBox1->AppendText("foi\n");
	}
}