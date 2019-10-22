#include "Linha1.h"

queue<Itens*> linha1;

Linha1::Linha1(MyForm^ mform, int n){
	this->numLinha = n;
	this->myform = mform;
	this->m_hThread = NULL;
	this->m_ThreadId = 0;
	this->KillThread = false;
}

void Linha1::setItem(int tempo1, int tempo2, int tempo3, int tempo4, string nome){
	Itens* item = new Itens(tempo1, tempo2, tempo3, tempo4, nome);
	linha1.push(item);
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
		this->myform->UpdateRichText("aa\n");
		processo1(linha1.front()->getTempoEtapa1());
		processo2(linha1.front()->getTempoEtapa2());
		processo3(linha1.front()->getTempoEtapa3());
		processo4(linha1.front()->getTempoEtapa4());
		SetKillThread(true);
}
	_endthread();
	return 0;
}

void Linha1::processo1(int tempo1){
	this->myform->setCor(1, numLinha);
	Sleep(tempo1);
}

void Linha1::processo2(int tempo2){
	this->myform->resetCor(1, numLinha);
	this->myform->setCor(2, numLinha);
	Sleep(tempo2);
}

void Linha1::processo3(int tempo3){
	this->myform->resetCor(2, numLinha);
	this->myform->setCor(3, numLinha);
	Sleep(tempo3);
}

void Linha1::processo4(int tempo4){
	this->myform->resetCor(3, numLinha);
	this->myform->setCor(4, numLinha);
	Sleep(tempo4);
}

void Linha1::popItem(){
	this->myform->resetCor(4, numLinha);
	linha1.pop();
}