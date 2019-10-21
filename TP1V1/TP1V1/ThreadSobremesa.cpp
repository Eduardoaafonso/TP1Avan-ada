#include "ThreadSobremesa.h"


ThreadSobremesa::ThreadSobremesa(MyForm^ mform, string nome, bool gelado, bool diet, bool lactose, int tempo1, int tempo2, int tempo3, int tempo4) 
	: Sobremesa(nome, gelado, diet, lactose, tempo1, tempo2, tempo3, tempo4)// Inicializa membros privados da classe
{ 
	this->myform = mform;
		
	this->m_hThread = NULL;
	this->m_ThreadId = 0;
	this->KillThread = false;
}

void ThreadSobremesa::CreateThread()
{
	m_hThread = (HANDLE)_beginthreadex(NULL,
		0,
		(PBEGINTHREADEX_THREADFUNC) ThreadSobremesa::ThreadFunc,
		(LPVOID)this, // passa pointer para objeto como parâmetro
		CREATE_SUSPENDED,
		(PBEGINTHREADEX_THREADID) &m_ThreadId );

	if (m_hThread) {	
		/* habilita os botões */
		this->buttonCriar->Enabled = FALSE;
		this->buttonSuspender->Enabled = FALSE;
		this->buttonAtivar->Enabled = TRUE;
		this->buttonTerminar->Enabled = TRUE;
	}
	else
	{
		MessageBox::Show("Não foi possivel criar thread","Notificação", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
}

void ThreadSobremesa::WaitForExit() // Espera fim da thread
{
	WaitForSingleObject(m_hThread, INFINITE);
	CloseHandle(m_hThread);
}

void ThreadSobremesa::SetKillThread(bool kill)
{
	this->KillThread = kill;
}

bool ThreadSobremesa::GetKillThread()
{
	return this->KillThread;
}

int ThreadSobremesa::Active()
{
	this->buttonSuspender->Enabled = TRUE;
	this->buttonAtivar->Enabled = FALSE;

	return ResumeThread(this->m_hThread);  // Handle para a thread alvo
}

int ThreadSobremesa::Suspend()
{
	this->buttonSuspender->Enabled = FALSE;
	this->buttonAtivar->Enabled = TRUE;

	return SuspendThread(this->m_hThread);  // Handle para a thread alvo
	
}

// This is a static member function. Unlike C static functions, you only
// place the static declaration on the function declaration in the class, not on its implementation.
// Static member functions have no "this" pointer, but do have access rights.
DWORD WINAPI ThreadSobremesa::ThreadFunc(LPVOID param)
{
	// Use the param as the address of the object
	ThreadSobremesa* pto = (ThreadSobremesa*)param;
	// Call the member function. Since we have a proper object pointer,
	// even virtual functions will be called properly.
	return pto->ThreadMemberFunc();
}
// This above function ThreadSobremesa::ThreadFunc() calls this function after the thread starts up.
DWORD ThreadSobremesa::ThreadMemberFunc()
	// Função que desempenhará as funções da thread
{
	// Do something useful ...
	while(!this->GetKillThread())
	{
		this->myform->UpdateRichText("New thread " + this->m_ThreadId + " loop!\n");
		Sleep(3000);
	}
	_endthread();
	return 0;
}

ThreadSobremesa::~ThreadSobremesa(){
}

//Descrição do processo
void ThreadSobremesa::Processos(int tempo1,int tempo2,int tempo3, int tempo4, String^ nome){
		VerificiarIng(tempo1, nome);
		SepararIng(tempo2, nome);
		PrepSob(tempo3, nome);
		EmbalarSob(tempo4, nome);
		
		SetKillThread(true);
}

bool ThreadSobremesa::VerificiarIng(int tempo1, String^ nome){
		this->myform->UpdateRichText("Os ingredientes de "+nome+" está sendo verificada no estoque\n");
		fflush(stdout);
		Sleep(tempo1);
	return true;  
}

bool ThreadSobremesa::SepararIng(int tempo2, String^ nome){
		this->myform->UpdateRichText(nome+" está iniciando os preparos\n");
		fflush(stdout);
		Sleep(tempo2);
	return true;  
}

bool ThreadSobremesa::PrepSob(int tempo3, String^ nome){
		this->myform->UpdateRichText(nome+" está quase pronto\n");
		fflush(stdout);
		Sleep(tempo3);
	return true;  
}

bool ThreadSobremesa::EmbalarSob(int tempo4, String^ nome){
		this->myform->UpdateRichText("Pode pegar "+nome+"\n\n");
		fflush(stdout);
		Sleep(tempo4);
	return true;  
}
