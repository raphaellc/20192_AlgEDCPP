#pragma once
#include "Coordenada.h"
#include <iostream>
using namespace std;
class Retangulo : protected Coordenada
{
public:
	Retangulo();
	~Retangulo();

	void setCoordenadas(int pontoX[], int pontoY[]);
	float calcularAltura();
	float calcularComprimento();
	float calcularArea();
	float calcularPerimetro();
	bool verificaQuadrado();

	float getAltura() { return altura; }
	float getComprimento() { return comprimento; }

	float altura, comprimento, area, perimetro;
};

