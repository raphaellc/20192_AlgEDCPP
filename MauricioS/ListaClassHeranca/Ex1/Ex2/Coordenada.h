#pragma once
class Coordenada
{
public:
	Coordenada();
	~Coordenada();

protected:
	void SetPontoA(int p_posX, int p_posY);
	void SetPontoB(int p_posX, int p_posY);
	void SetPontoC(int p_posX, int p_posY);
	void SetPontoD(int p_posX, int p_posY);
	int GetVetorPosX();
	int GetVetorPosY();

	int Comprimento();
	int Altura();
	int Area();
	int Perimetro();

private:
	int *vetorPosX;
	int *vetorPosY;
};

