#define WIN32_LEAN_AND_MEAN

#include"MyForm.h"
using namespace std;
using namespace TP1V1;

/* 
Rotina Principal: Apenas chama o windows form (janela) que contem as rotinas de execu��o de acordo com os eventos 
dos botoes e os tempos de execu��o das threads
*/

[STAThreadAttribute]
int main(array<System::String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
	return 0;
}