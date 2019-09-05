#pragma once
class Retangulo
{
public:
	Retangulo();
	~Retangulo();

	int getArea();
	int setArea();
	int getPerimetro();
	int setPerimetro();

protected:

	int comprimento = 1, altura = 1;
};

