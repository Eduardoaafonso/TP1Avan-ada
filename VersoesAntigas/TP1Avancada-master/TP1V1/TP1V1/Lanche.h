#ifndef LANCHE_H
#define LANCHE_H

#include "Itens.h"

using namespace std;

class Lanche:public Itens{
private:
	string tipo;
	bool veg;
public:
	Lanche(string tipo, bool veg, int tempo1, int tempo2, int tempo3, int tempo4);
	~Lanche();

	string getTipo();
	bool getVeg();
};
#endif
