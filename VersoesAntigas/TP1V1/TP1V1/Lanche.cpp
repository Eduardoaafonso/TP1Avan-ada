#include "Lanche.h"

Lanche::Lanche(string tipo, bool veg, int tempo1, int tempo2, int tempo3, int tempo4) 
	: Itens( tempo1, tempo2, tempo3, tempo4){

	this->tipo = tipo;
	this->veg = veg;
}

Lanche::~Lanche(){
}

string Lanche::getTipo(){
	return this->tipo;
}

bool Lanche::getVeg(){
	return this->veg;
}
