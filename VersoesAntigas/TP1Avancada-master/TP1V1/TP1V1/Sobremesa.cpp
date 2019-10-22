#include "Sobremesa.h"


Sobremesa::Sobremesa(string nome, bool gelado, bool diet, bool lactose, int tempo1, int tempo2, int tempo3, int tempo4)
	: Itens( tempo1, tempo2, tempo3, tempo4){
		this->nome = nome;
		this->gelado = gelado;
		this->diet = diet;
		this->lactose = lactose;
}

Sobremesa::~Sobremesa(){
}

string Sobremesa::getNome(){
	return this->nome;
}

bool Sobremesa::getGelado(){
	return this->gelado;
}

bool Sobremesa::getDiet(){
	return this->diet;
}

bool Sobremesa::getLactose(){
	return this->lactose;
}