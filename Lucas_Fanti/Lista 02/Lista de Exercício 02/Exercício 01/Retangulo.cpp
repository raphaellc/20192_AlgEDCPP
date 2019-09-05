#include "Retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo()
{
}


Retangulo::~Retangulo()
{
}

int Retangulo::getArea()
{
	return 0;
}

int Retangulo::setArea()
{
	if (comprimento > 0 && comprimento < 21)
	{
		if (altura > 0 && altura < 21)
		{
			cout << "Seus atributos sao validos." << endl;
		}
	}

	else
	{
		cout << "Algum dos seus atributos nao eh valido." << endl;
	}
	return 0;
}

int Retangulo::getPerimetro()
{
	return 0;
}

int Retangulo::setPerimetro()
{
	if (comprimento > 0 && comprimento < 21)
	{
		if (altura > 0 && altura < 21)
		{
			cout << "Seus atributos sao validos." << endl;
		}
	}

	else
	{
		cout << "Algum dos seus atributos nao eh valido." << endl;
	}
	return 0;
}
