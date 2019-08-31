#include "Coordenada.h"



Coordenada::Coordenada()
{
	vetorPosX = new int[4];
	vetorPosY = new int[4];
}


Coordenada::~Coordenada()
{
}

void Coordenada::SetPontoA(int p_posX, int p_posY)
{
	vetorPosX[0] = p_posX;
	vetorPosY[0] = p_posY;
}

void Coordenada::SetPontoB(int p_posX, int p_posY)
{
	vetorPosX[1] = p_posX;
	vetorPosY[1] = p_posY;
}

void Coordenada::SetPontoC(int p_posX, int p_posY)
{
	vetorPosX[2] = p_posX;
	vetorPosY[2] = p_posY;
}

void Coordenada::SetPontoD(int p_posX, int p_posY)
{
	vetorPosX[3] = p_posX;
	vetorPosY[3] = p_posY;
}

int Coordenada::GetVetorPosX()
{
	return *vetorPosX;
}

int Coordenada::GetVetorPosY()
{
	return *vetorPosY;
}

int Coordenada::Comprimento()
{
	//TODO criar logica para calculo do comprimento
	return 0;
}

int Coordenada::Altura()
{
	//TODO criar logica para calculo da altura
	return 0;
}

int Coordenada::Area()
{
	//TODO criar logica para calculo da area
	return 0;
}

int Coordenada::Perimetro()
{
	//TODO criar logica para calculo do perimetro
	return 0;
}
