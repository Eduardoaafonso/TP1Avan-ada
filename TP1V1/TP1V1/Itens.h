#pragma once
ref class Itens
{
private: 
	int tempoConf;
	int tempoSepIng;
	int tempoPreparo;
	int tempoEmbalar;
	int tempoEngarrafar;
	int tempoTampar;
	int static nPedidos;
	static int nMaximo;
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

