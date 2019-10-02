# TP1Avan-ada

A classe "teste" herda da super Pilsen que herda 
da superclasse Cerveja.

OBS: USO DE GCNEW com ponteiro .NET (^)

#include <iostream>
#include "teste.h"

using namespace std;
using namespace System;

int main(){

	int a;
	cin>>a;
	
********teste^ teste1 = gcnew teste();********
	
	teste1->setTempoEngarrafar(a);

	int b = teste1->getTempoEngarrafar();

	cout<<b;

	system("pause");

	return 0;

}