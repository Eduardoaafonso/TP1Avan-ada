#ifndef THREADSOBREMESA
#define THREADSOBREMESA

// Só os .h mais básicos serão incluídos.
#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include <windows.h>
#include <process.h>
#include "MyForm.h"
#include <vcclr.h> // gcroot
#include "Sobremesa.h"

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
// This ThreadSobremesa is created by a thread that wants to start another thread. All public member functions
// except ThreadFunc() are called by that original thread. The virtual function ThreadMemberFunc() is
// the start of the new thread.
//
class ThreadSobremesa  : public Sobremesa
{
public:
	ThreadSobremesa(MyForm^, Button^,Button^, Button^, Button^);		// Construtor
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