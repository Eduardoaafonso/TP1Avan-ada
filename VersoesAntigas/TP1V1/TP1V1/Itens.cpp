#include "Itens.h"

Itens::Itens(int tempo1, int tempo2, int tempo3, int tempo4){
	this->tempoEtapa1 = tempo1;
	this->tempoEtapa2 = tempo2;
	this->tempoEtapa3 = tempo3;
	this->tempoEtapa4 = tempo4;
}

Itens::~Itens(){
}

void Itens::setTempoEtapa1(int tempo){
	this->tempoEtapa1 = tempo;
}

void Itens::setTempoEtapa2(int tempo){
	this->tempoEtapa2 = tempo;
}

void Itens::setTempoEtapa3(int tempo){
	this->tempoEtapa3 = tempo;
}

void Itens::setTempoEtapa4(int tempo){
	this->tempoEtapa4 = tempo;
}

void Itens::setPronto(bool pronto){
	this->pronto = pronto;
}

int Itens::getTempoEtapa1(){
	return this->tempoEtapa1;
}

int Itens::getTempoEtapa2(){
	return this->tempoEtapa2;
}

int Itens::getTempoEtapa3(){
	return this->tempoEtapa3;
}

int Itens::getTempoEtapa4(){
	return this->tempoEtapa4;
}

/*
void Itens::setNPedidos(int pedidos){
	this->nPedidos = pedidos;
}

int Itens::getNPedidos(){
	return this->nPedidos;
}

int Itens::getNMaximo(){
	return this->nMaximo;
}
*/

bool Itens::getPronto(){
	return this->pronto;
}

