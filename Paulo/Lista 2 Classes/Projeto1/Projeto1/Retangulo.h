#pragma once
class Retangulo
{
public:
	Retangulo();
	~Retangulo();

	int getAltura();
	void setAltura(int altura);
	int getComprimento();
	void setComprimento(int comprimento);

	int comprimento = 1, altura = 1;
};

