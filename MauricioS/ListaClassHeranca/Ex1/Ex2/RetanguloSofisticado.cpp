#include "RetanguloSofisticado.h"



RetanguloSofisticado::RetanguloSofisticado()
{
}


RetanguloSofisticado::~RetanguloSofisticado()
{
}

void RetanguloSofisticado::SetCoordenadas(int p_posX[], int p_posY[])
{
	bool _condicaoAceita = true;

	for (int i = 0; i < 4; i++)
	{
		if (p_posX[i] < 0 || p_posX[i] > 20 || p_posY[i] < 0 || p_posY[i] > 20)
			_condicaoAceita = false;
	}
	if (_condicaoAceita)
	{
		SetPontoA(p_posX[0], p_posY[0]);
		SetPontoB(p_posX[1], p_posY[1]);
		SetPontoC(p_posX[2], p_posY[2]);
		SetPontoD(p_posX[3], p_posY[3]);
	}
}

int RetanguloSofisticado::CalculaComprimento()
{
	return Comprimento();
}

int RetanguloSofisticado::CalculaAltura()
{
	return Altura();
}

int RetanguloSofisticado::CalculaArea()
{
	return Area();
}

int RetanguloSofisticado::CalculaPerimetro()
{
	return Perimetro();
}
