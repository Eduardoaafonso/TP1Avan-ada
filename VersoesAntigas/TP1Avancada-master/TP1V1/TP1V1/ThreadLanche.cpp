#include "ThreadLanche.h"

ThreadLanche::ThreadLanche(MyForm^ mform, string tipo, bool veg, int tempo1, int tempo2, int tempo3, int tempo4) 
	: Lanche(tipo, veg, tempo1, tempo2, tempo3, tempo4)// Inicializa membros privados da classe // Inicializa membros privados da classe
{
	this->myform = mform;
	this->m_hThread = NULL;
	this->m_ThreadId = 0;
	this->KillThread = false;
}
void ThreadLanche::StartThread()
{
	m_hThread = (HANDLE)_beginthreadex(NULL, 0,
	(PBEGINTHREADEX_THREADFUNC) ThreadLanche::ThreadFunc,
	(LPVOID)this, // passa pointer para objeto como parâmetro
	0, (PBEGINTHREADEX_THREADID) &m_ThreadId );
	if (m_hThread) {
	}
}
void ThreadLanche::WaitForExit() // Espera fim da thread
{
	WaitForSingleObject(m_hThread, INFINITE);
	CloseHandle(m_hThread);
}

void ThreadLanche::SetKillThread(bool kill) {
	this->KillThread = kill;
}
bool ThreadLanche::GetKillThread() {
	return this->KillThread;
}
// This is a static member function. Unlike C static functions, you only
// place the static declaration on the function declaration in the class, not
// on its implementation. Static member functions have no "this" pointer, but
// do have access rights.
DWORD WINAPI ThreadLanche::ThreadFunc(LPVOID param) {
// Use the param as the address of the object
	ThreadLanche* pto = (ThreadLanche*)param;
// Call the member function. Since we have a proper object pointer,
// even virtual functions will be called properly.
	return pto->ThreadMemberFunc();
}

// This above function ThreadLanche::ThreadFunc() calls this function after the
// thread starts up.
DWORD ThreadLanche::ThreadMemberFunc()
// Função que desempenhará as funções da thread
{
// Do something useful ...
	while(!this->GetKillThread()){
		this->myform->UpdateRichText("aa\n");
		Sleep(1000);
		SetKillThread(true);
}
	_endthread();
	return 0;
}
