#pragma once
class Coordenada
{
public:
	Coordenada();
	~Coordenada();

	void setPontoA(int pontoX, int pontoY);
	void setPontoB(int pontoX, int pontoY);
	void setPontoC(int pontoX, int pontoY);
	void setPontoD(int pontoX, int pontoY);

	float calcAltura();
	float calcComprimento();
	float calcArea();
	float calcPerimetro();

	int getVetorX();
	int getVetorY();

	int *vetorX, *vetorY;
};

