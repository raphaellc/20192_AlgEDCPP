#pragma once
class Retangulo
{
public:
	Retangulo();
	~Retangulo();

	void calcularAltura();
	void calcularComprimento();
	void calcularArea();
	void calcularPerimetro();
	void setCoordenadas(float *ponto);

	float getAltura() { return altura; }
	float getComprimento() { return comprimento; }

	float altura, comprimento, area, perimetro;
	float *ponto;
};

