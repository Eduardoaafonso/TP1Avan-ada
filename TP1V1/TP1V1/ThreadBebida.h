#ifndef THREADBEBIDA
#define THREADBEBIDA

// Só os .h mais básicos serão incluídos.
#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include <windows.h>
#include <process.h>
#include "MyForm.h"
#include <vcclr.h> // gcroot
#include "Bebida.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace TP1V1;

typedef unsigned (WINAPI *PBEGINTHREADEX_THREADFUNC)(LPVOID lpThreadParameter);
typedef unsigned *PBEGINTHREADEX_THREADID;
//
// This ThreadBebida is created by a thread that wants to start another thread. All public member functions
// except ThreadFunc() are called by that original thread. The virtual function ThreadMemberFunc() is
// the start of the new thread.
//
class ThreadBebida : public Bebida
{
public:
	ThreadBebida(MyForm^ mform, string nome, bool gelado, bool diet, int tempo1, int tempo2, int tempo3, int tempo4);		// Construtor
	void CreateThread();
	void WaitForExit();
	static DWORD WINAPI ThreadFunc(LPVOID param);

	void SetKillThread(bool kill);
	bool GetKillThread();
	int Suspend();
	int Active();

private:
	
	gcroot<MyForm^> myform;
	gcroot<Button^> buttonCriar;
	gcroot<Button^> buttonSuspender;
	gcroot<Button^> buttonAtivar;
	gcroot<Button^> buttonTerminar;	

protected:
	virtual DWORD ThreadMemberFunc();
	HANDLE m_hThread;	// Handle para thread criada
	DWORD m_ThreadId;	// Identificador da thread
	bool KillThread;
};
#endif