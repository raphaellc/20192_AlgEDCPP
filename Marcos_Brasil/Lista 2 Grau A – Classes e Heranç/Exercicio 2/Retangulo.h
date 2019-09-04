#pragma once
#include "Coordenadas.h"
class Retangulo :
	public Coordenadas
{
public:
	Retangulo();
	~Retangulo();

	void calcAltura();
	void calcComprimento();
	void calcArea_();
	void calcPerimetro_();

	void setPonto(int p, float _x, float _y);

	float getAltura() { return altura; }
	float getComprimento() { return comprimento; }
	


protected:
	float altura, comprimento, area, perimetro;

	Coordenadas ponto[4];
};

