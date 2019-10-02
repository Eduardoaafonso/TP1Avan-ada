#include "Itens.h"

using namespace std;

#pragma once
ref class Sobremesa: public Itens
{
private: 
	string nome;
	bool gelado;
	bool diet;
	bool lactose;
public:
	Sobremesa();
	~Sobremesa();

	string getNome();
	bool getGelado();
	bool getDiet();
	bool getLactose();
};

