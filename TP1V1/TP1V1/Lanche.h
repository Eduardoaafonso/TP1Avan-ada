#include "Itens.h"

using namespace std;

#pragma once
ref class Lanche:public Itens
{
private:
	string tipo;
	bool veg;
public:
	Lanche(string tipo, bool veg);
	~Lanche();

	string getTipo();
	bool getVeg();
};

