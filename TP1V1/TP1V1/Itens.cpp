#include "Itens.h"

void Itens::setTempoConf(int tempo){
	this->tempoConf = tempo;
}

void Itens::setTempoSepIng(int tempo){
	this->tempoSepIng = tempo;
}

void Itens::setTempoPreparo(int tempo){
	this->tempoPreparo = tempo;
}

void Itens::setTempoEmbalar(int tempo){
	this->tempoEmbalar = tempo;
}

void Itens::setTempoEngarrafar(int tempo){
	this->tempoEngarrafar = tempo;
}

void Itens::setTempoTampar(int tempo){
	this->tempoTampar = tempo;
}

void Itens::setNPedidos(int pedidos){
	this->nPedidos = pedidos;
}

void Itens::setNMaximo(int nMaximo){
	this->nMaximo = 3;
}

void Itens::setPronto(bool pronto){
	this->pronto = true;
}

int Itens::getTempoConf(){
	return this->tempoConf;
}

int Itens::getTempoSepIng(){
	return this->tempoSepIng;
}

int Itens::getTempoPreparo(){
	return this->tempoPreparo;
}

int Itens::getTempoEmbalar(){
	return this->tempoEmbalar;
}

int Itens::getTempoEngarrafar(){
	return this->tempoEngarrafar;
}

int Itens::getTempoTampar(){
	return this->tempoTampar;
}

int Itens::getNPedidos(){
	return this->nPedidos;
}

int Itens::getNMaximo(){
	return this->nMaximo;
}

bool Itens::getPronto(){
	return this->pronto;
}

