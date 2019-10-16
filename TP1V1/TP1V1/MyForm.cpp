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

queue<ThreadLanche*> filaLanche;
queue<ThreadBebida*> filaBebida;
queue<ThreadSobremesa*> filaSobremesa;
bool lancheVeg;
bool bebidaGelada, bebidaDiet;
bool sobremesaGelada, sobremesaDiet, sobremesaLac;

System::Void MyForm::botaoLanche_Click_1(System::Object^  sender, System::EventArgs^  e){
	int tempo1 = Convert::ToInt32(tempo1Lanche->Text);
	int tempo2 = Convert::ToInt32(tempo2Lanche->Text);
	int tempo3 = Convert::ToInt32(tempo3Lanche->Text);
	int tempo4 = Convert::ToInt32(tempo4Lanche->Text);

	String^ aux = nomeLanche->Text;
	msclr::interop::marshal_context context;
    string nome = context.marshal_as<std::string>(aux);

	ThreadLanche* lanche = new ThreadLanche(this, nome, lancheVeg, tempo1, tempo2, tempo3, tempo4);
	filaLanche.push(lanche);
}

System::Void MyForm::botaoBebida_Click(System::Object^  sender, System::EventArgs^  e){
	int tempo1 = Convert::ToInt32(tempo1Bebida->Text);
	int tempo2 = Convert::ToInt32(tempo2Bebida->Text);
	int tempo3 = Convert::ToInt32(tempo3Bebida->Text);
	int tempo4 = Convert::ToInt32(tempo4Bebida->Text);

	String^ aux = nomeBebida->Text;
	msclr::interop::marshal_context context;
    string nome = context.marshal_as<std::string>(aux);

	ThreadBebida* bebida = new ThreadBebida(this, nome, bebidaGelada, bebidaDiet, tempo1, tempo2, tempo3, tempo4);
	filaBebida.push(bebida);
}

System::Void MyForm::botaoSobremesa_Click(System::Object^  sender, System::EventArgs^  e){
	int tempo1 = Convert::ToInt32(tempo1Bebida->Text);
	int tempo2 = Convert::ToInt32(tempo2Bebida->Text);
	int tempo3 = Convert::ToInt32(tempo3Bebida->Text);
	int tempo4 = Convert::ToInt32(tempo4Bebida->Text);

	String^ aux = nomeSobremesa->Text;
	msclr::interop::marshal_context context;
    string nome = context.marshal_as<std::string>(aux);

	ThreadSobremesa* sobremesa = new ThreadSobremesa(this, nome, sobremesaGelada, sobremesaDiet, sobremesaLac, tempo1, tempo2, tempo3, tempo4);
	filaSobremesa.push(sobremesa);
}





