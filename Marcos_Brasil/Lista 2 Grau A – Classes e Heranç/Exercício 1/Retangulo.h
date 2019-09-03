#pragma once
class Retangulo{
public:
	Retangulo();
	~Retangulo();

	void calcPerimetro();
	void calcArea();

	float getAltura() { return altura; }
	float getComprimento() { return comprimento; }

	void setComprimento(float valor);
	void setAltura(float valor);

protected:
	float area, perimetro, altura, comprimento;
};

