#pragma once
class Retangulo
{
public:
	Retangulo();
	~Retangulo();

	int getAltura();
	void setAltura(float valor);
	int getComprimento();
	void setComprimento(float valor);
	void calcularPerimetro();
	void calcularArea();

	float comprimento = 1, altura = 1, perimetro, area;
};

