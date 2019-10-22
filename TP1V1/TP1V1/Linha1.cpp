#include "Linha1.h"

queue<Itens*> linha1;

Linha1::Linha1(MyForm^ mform, int n){
	this->numLinha = n;
	this->myform = mform;
	this->m_hThread = NULL;
	this->m_ThreadId = 0;
	this->KillThread = false;

}

void Linha1::setItem(int tempo1, int tempo2, int tempo3, int tempo4, string nome, HANDLE hSemaphoreParam, HANDLE hMutexParam){
	Itens* item = new Itens(tempo1, tempo2, tempo3, tempo4, nome);
	linha1.push(item);
	this->nomePos = nome;
	hSemaphore = hSemaphoreParam;
	hMutex = hMutexParam;
	//CRIAR FORA*************************
	hSemaphore = CreateSemaphore(
		NULL, //Atributo de segurança
		   3, //Contador inicial
		   3, //Valor máximo do contaodr
		"Semaforo" //Nome do semáforo
		);

	hMutex = CreateMutex(
		NULL, //Atributo de segurança
		FALSE, //propriedade
		NULL //nome
	);
}

int Linha1::getNumLinha(){
	return this->numLinha;
}

void Linha1::StartThread()
{
	m_hThread = (HANDLE)_beginthreadex(NULL, 0,
	(PBEGINTHREADEX_THREADFUNC) Linha1::ThreadFunc,
	(LPVOID)this, // passa pointer para objeto como parâmetro
	0, (PBEGINTHREADEX_THREADID) &m_ThreadId );
	if (m_hThread) {
	}
	this->KillThread = false;
}
void Linha1::WaitForExit() // Espera fim da thread
{
	WaitForSingleObject(m_hThread, INFINITE);
	CloseHandle(m_hThread);
}

void Linha1::SetKillThread(bool kill) {
	this->KillThread = kill;
	this->myform->processo(linha1.front()->getNome());
	popItem();
}
bool Linha1::GetKillThread() {
	return this->KillThread;
}
// This is a static member function. Unlike C static functions, you only
// place the static declaration on the function declaration in the class, not
// on its implementation. Static member functions have no "this" pointer, but
// do have access rights.
DWORD WINAPI Linha1::ThreadFunc(LPVOID param) {
// Use the param as the address of the object
	Linha1* pto = (Linha1*)param;
// Call the member function. Since we have a proper object pointer,
// even virtual functions will be called properly.
	return pto->ThreadMemberFunc();
}

// This above function Linha1::ThreadFunc() calls this function after the
// thread starts up.
DWORD Linha1::ThreadMemberFunc()
// Função que desempenhará as funções da thread
{
// Do something useful ...
	while(!this->GetKillThread()){
		//this->myform->UpdateRichText("aa\n");
		WaitForSingleObject(hSemaphore, INFINITE);
		WaitForSingleObject(hMutex, INFINITE);

		processo1(linha1.front()->getTempoEtapa1(), this->nomePos);

		ReleaseMutex(hMutex);
		ReleaseSemaphore(hSemaphore,1,0);

		WaitForSingleObject(hSemaphore, INFINITE);
		WaitForSingleObject(hMutex, INFINITE);

		processo2(linha1.front()->getTempoEtapa1(), this->nomePos);

		ReleaseMutex(hMutex);
		ReleaseSemaphore(hSemaphore,1,0);

		WaitForSingleObject(hSemaphore, INFINITE);
		WaitForSingleObject(hMutex, INFINITE);

		processo3(linha1.front()->getTempoEtapa1(), this->nomePos);

		ReleaseMutex(hMutex);
		ReleaseSemaphore(hSemaphore,1,0);

		WaitForSingleObject(hSemaphore, INFINITE);
		WaitForSingleObject(hMutex, INFINITE);

		processo4(linha1.front()->getTempoEtapa1(), this->nomePos);

		ReleaseMutex(hMutex);
		ReleaseSemaphore(hSemaphore,1,0);

		SetKillThread(true);

	


}
	_endthread();
	return 0;
}

void Linha1::processo1(int tempo1, string nome){
	this->myform->setCor(1, getNumLinha());
	this->myform->setNome(1, getNumLinha(), nome);
	Sleep(tempo1);
}

void Linha1::processo2(int tempo2, string nome){
	this->myform->resetCor(1, getNumLinha());
	this->myform->setCor(2, getNumLinha());
	this->myform->resetNome(1, getNumLinha(), "Vazio");
	this->myform->setNome(2, getNumLinha(), nome);

	Sleep(tempo2);
}

void Linha1::processo3(int tempo3, string nome){
	this->myform->resetCor(2, getNumLinha());
	this->myform->setCor(3, getNumLinha());
	this->myform->resetNome(2, getNumLinha(), "Vazio");
	this->myform->setNome(3, getNumLinha(), nome);
	Sleep(tempo3);
}

void Linha1::processo4(int tempo4, string nome){
	this->myform->resetCor(3, getNumLinha());
	this->myform->setCor(4, getNumLinha());
	this->myform->resetNome(3, getNumLinha(), "Vazio");
	this->myform->setNome(4, getNumLinha(), nome);
	Sleep(tempo4);
}

void Linha1::popItem(){
	this->myform->resetCor(4, getNumLinha());
	this->myform->resetNome(4, getNumLinha(), "Vazio");
	linha1.pop();
}