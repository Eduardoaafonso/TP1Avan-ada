#ifndef LINHA1
#define LINHA1

// Só os .h mais básicos serão incluídos.
#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include <windows.h>
#include <process.h>
#include "MyForm.h"
#include <vcclr.h> // gcroot
//#include "Lanche.h"
//#include "Sobremesa.h"
#include "Itens.h"
#include <queue>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace TP1V1;

typedef unsigned (WINAPI *PBEGINTHREADEX_THREADFUNC)(LPVOID lpThreadParameter);
typedef unsigned *PBEGINTHREADEX_THREADID;
// This ThreadObject is created by a thread that wants to start another
// thread. All public member functions except ThreadFunc() are called by
// that original thread. The virtual function ThreadMemberFunc() is the
// start of the new thread.
class Linha1
{
private:
	gcroot<MyForm^> myform;
	int numLinha;
	string nomePos;
	HANDLE hSemaphore;
	HANDLE hMutex;

public:
	Linha1(MyForm^ mform, int n);	 // Construtor
	int getNumLinha();
	void StartThread();
	void WaitForExit();
	static DWORD WINAPI ThreadFunc(LPVOID param);
	void SetKillThread(bool kill);
	bool GetKillThread();
	void setItem(int tempo1, int tempo2, int tempo3, int tempo4, string nome, HANDLE hSemaphore, HANDLE hMutex);
	void processo1(int tempo1, string nome);
	void processo2(int tempo2, string nome);
	void processo3(int tempo3, string nome);
	void processo4(int tempo4, string nome);
	void popItem();


protected:
	virtual DWORD ThreadMemberFunc();
	HANDLE m_hThread; // Handle para thread criada
	DWORD m_ThreadId; // Identificador da thread
	bool KillThread;
};

#endif