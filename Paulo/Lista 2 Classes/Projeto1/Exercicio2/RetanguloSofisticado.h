#pragma once
class RetanguloSofisticado
{
public:
	RetanguloSofisticado();
	~RetanguloSofisticado();

	void calcularAltura();
	void calcularComprimento();
	void calcularArea();
	void calcularPerimetro();
	float getAltura() { return altura; }
	float getComprimento() { return comprimento; }

	float altura, comprimento, area, perimetro;
	float *ponto;
};

