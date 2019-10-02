#include "Bebida.h"

Bebida::Bebida(bool gelado, bool diet, string nome){
	this->gelado = gelado;
	this->diet = diet;
	this->nome = nome;
}

Bebida::~Bebida(){
}

bool Bebida::getDiet(){
	return this->diet;
}

bool Bebida::getGelado(){
	return this->gelado;
}

string Bebida::getNome(){
	return this->nome;
}