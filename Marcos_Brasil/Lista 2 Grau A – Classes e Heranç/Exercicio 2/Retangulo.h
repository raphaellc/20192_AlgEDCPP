#pragma once
#include "Coordenadas.h"
class Retangulo :
	protected Coordenadas
{
public:
	Retangulo();
	~Retangulo();

	void calcAltura();
	void calcComprimento();
	void calcArea_();
	void calcPerimetro_();

	float getAltura() { return altura; }
	float getComprimento() { return comprimento; }

protected:
	float altura, comprimento, area, perimetro, *ponto;
};

