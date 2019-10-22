#ifndef ITENS_H
#define ITENS_H
#include <string>

class Itens{
private: 
	int tempoEtapa1;
	int tempoEtapa2;
	int tempoEtapa3;
	int tempoEtapa4;
	//static int  nPedidos;
	//static const int nMaximo = 3;
	bool pronto;

public:
	Itens(int tempo1, int tempo2, int tempo3, int tempo4);
	~Itens();
	void setTempoEtapa1(int tempo);
	void setTempoEtapa2(int tempo);
	void setTempoEtapa3(int tempo);
	void setTempoEtapa4(int tempo);
	void setNPedidos(int pedidos);
	void setPronto(bool pronto);

	int getTempoEtapa1();
	int getTempoEtapa2();
	int getTempoEtapa3();
	int getTempoEtapa4();
	//int getNPedidos();
	//int getNMaximo();
	bool getPronto();
	
};

#endif