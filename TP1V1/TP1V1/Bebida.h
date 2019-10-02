#include "Itens.h"

using namespace std;

#pragma once
ref class Bebida:public Itens
{
private:
	string nome;
	bool quente;
	bool dieta;
	bool gelado;

public:
	Bebida();
	~Bebida();

	bool getQuente();
	bool getDieta();
	bool getGelado();
	string getNome();
};

