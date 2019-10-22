#ifndef SOBREMESA_H
#define SOBREMESA_H
#include "Itens.h"

using namespace std;

class Sobremesa: public Itens
{
private: 
	string nome;
	bool gelado;
	bool diet;
	bool lactose;
public:
	Sobremesa(string nome, bool gelado, bool diet, bool lactose, int tempo1, int tempo2, int tempo3, int tempo4);
	~Sobremesa();

	string getNome();
	bool getGelado();
	bool getDiet();
	bool getLactose();
};
#endif
