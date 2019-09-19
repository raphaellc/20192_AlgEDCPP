#include "Retangulo.h"



Retangulo::Retangulo()
{
	comprimento = 1;
	altura = 1;
}

Retangulo::~Retangulo()
{
}

void Retangulo::SetComprimento(int p_value)
{
	if(p_value > 0 && p_value <= 20)
		comprimento = p_value;
}

int Retangulo::GetComprimento()
{
	return comprimento;
}

void Retangulo::SetAltura(int p_value)
{
	if (p_value > 0 && p_value <= 20)
		altura = p_value;
}

int Retangulo::GetAltura()
{
	return altura;
}

int Retangulo::Perimetro()
{
	return (2*(comprimento + altura));
}

int Retangulo::Area()
{
	return comprimento * altura;
}
