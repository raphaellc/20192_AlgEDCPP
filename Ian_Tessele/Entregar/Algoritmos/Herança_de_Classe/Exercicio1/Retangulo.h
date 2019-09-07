#pragma once
class Retangulo
{
public:
	Retangulo();
	~Retangulo();

	double Comprimento;//base
	double Altura;

	double CalcPerimetro();
	double CalcArea();

	double GetComprimeto();
	double SetComprimeto();

	double GetAltura();
	double SetAltura();
};

