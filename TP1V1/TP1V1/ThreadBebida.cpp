#include "ThreadBebida.h"

ThreadBebida::ThreadBebida(MyForm^ mform, bool gelado, bool diet, string nome, int tempo1, int tempo2, int tempo3, int tempo4) 
	: Bebida(gelado, diet, nome, tempo1, tempo2, tempo3, tempo4)// Inicializa membros privados da classe
{ 
	
	
	this->myform = mform;
		
	this->m_hThread = NULL;
	this->m_ThreadId = 0;
	this->KillThread = false;
}

void ThreadBebida::CreateThread()
{
	m_hThread = (HANDLE)_beginthreadex(NULL,
		0,
		(PBEGINTHREADEX_THREADFUNC) ThreadBebida::ThreadFunc,
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

void ThreadBebida::WaitForExit() // Espera fim da thread
{
	WaitForSingleObject(m_hThread, INFINITE);
	CloseHandle(m_hThread);
}

void ThreadBebida::SetKillThread(bool kill)
{
	this->KillThread = kill;
}

bool ThreadBebida::GetKillThread()
{
	return this->KillThread;
}

int ThreadBebida::Active()
{
	this->buttonSuspender->Enabled = TRUE;
	this->buttonAtivar->Enabled = FALSE;

	return ResumeThread(this->m_hThread);  // Handle para a thread alvo
}

int ThreadBebida::Suspend()
{
	this->buttonSuspender->Enabled = FALSE;
	this->buttonAtivar->Enabled = TRUE;

	return SuspendThread(this->m_hThread);  // Handle para a thread alvo
	
}

// This is a static member function. Unlike C static functions, you only
// place the static declaration on the function declaration in the class, not on its implementation.
// Static member functions have no "this" pointer, but do have access rights.
DWORD WINAPI ThreadBebida::ThreadFunc(LPVOID param)
{
	// Use the param as the address of the object
	ThreadBebida* pto = (ThreadBebida*)param;
	// Call the member function. Since we have a proper object pointer,
	// even virtual functions will be called properly.
	return pto->ThreadMemberFunc();
}
// This above function ThreadBebida::ThreadFunc() calls this function after the thread starts up.
DWORD ThreadBebida::ThreadMemberFunc()
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