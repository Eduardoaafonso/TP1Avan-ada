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

queue<Lanche> filaLanche;
queue<Bebida> filaBebida;
queue<Sobremesa> filaSobremesa;


Void BotaoLanche_Click(System::Object^  sender, System::EventArgs^  e){
	Lanche lanche();
	//setar parametros
	filaLanche.push(lanche);
}




