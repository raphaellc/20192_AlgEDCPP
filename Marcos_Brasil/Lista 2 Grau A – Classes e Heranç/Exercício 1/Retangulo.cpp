#include "Retangulo.h"

Retangulo::Retangulo()
{
}


Retangulo::~Retangulo()
{
}

void Retangulo::calcPerimetro()
{
	perimetro = 2 * comprimento + 2 * altura;
}

void Retangulo::calcArea()
{
	area = comprimento * altura;
}

void Retangulo::setComprimento(float valor)
{
	if (valor > 0 && valor < 20) comprimento = valor;
}

void Retangulo::setAltura(float valor)
{
	if (valor > 0 && valor < 20) altura = valor;
}

