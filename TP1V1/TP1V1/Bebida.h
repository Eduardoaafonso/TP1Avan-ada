#ifndef BEBIDA_H
#define BEBIDA_H
#include "Itens.h"

using namespace std;

class Bebida:public Itens{
private:
	string nome;
	bool diet;
	bool gelado;

public:
	Bebida(bool gelado, bool diet, string nome, int tempo1, int tempo2, int tempo3, int tempo4);
	~Bebida();
	bool getDiet();
	bool getGelado();
	string getNome();
};

#endif