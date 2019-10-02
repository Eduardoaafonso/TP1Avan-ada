#include "Lanche.h"


Lanche::Lanche(string tipo, bool veg){
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
