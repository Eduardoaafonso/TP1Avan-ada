#ifndef ITENS_H
#define ITENS_H
#include <string>

class Itens{
private: 
	int tempoConf;
	int tempoSepIng;
	int tempoPreparo;
	int tempoEmbalar;
	int tempoEngarrafar;
	int tempoTampar;
	int static nPedidos;
	static const int nMaximo = 3;
	bool pronto;

public:
	void setTempoConf(int tempo);
	void setTempoSepIng(int tempo);
	void setTempoPreparo(int tempo);
	void setTempoEmbalar(int tempo);
	void setTempoEngarrafar(int tempo);
	void setTempoTampar(int tempo);
	void setNPedidos(int pedidos);
	void setNMaximo(int nMaximo);
	void setPronto(bool pronto);

	int getTempoConf();
	int getTempoSepIng();
	int getTempoPreparo();
	int getTempoEmbalar();
	int getTempoEngarrafar();
	int getTempoTampar();
	int getNPedidos();
	int getNMaximo();
	bool getPronto();
	
};

#endif