#include "Bebida.h"

Bebida::Bebida(bool gelado, bool diet, string nome, int tempo1, int tempo2, int tempo3, int tempo4)
	: Itens(tempo1, tempo2, tempo3, tempo4){

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