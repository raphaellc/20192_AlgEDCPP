#pragma once
#include "Coordenada.h"

class RetanguloSofisticado : protected Coordenada
{
public:
	RetanguloSofisticado();
	~RetanguloSofisticado();

	void SetCoordenadas(int p_posX[], int p_posY[]);

	int CalculaComprimento();
	int CalculaAltura();
	int CalculaArea();
	int CalculaPerimetro();

private:
	int posAtual;
};

