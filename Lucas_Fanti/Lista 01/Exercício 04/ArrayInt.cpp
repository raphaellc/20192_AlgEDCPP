#include "ArrayInt.h"
#include <iostream>

using namespace std;

ArrayInt::ArrayInt()
{
}


ArrayInt::~ArrayInt()
{
}

void ArrayInt::adicionar(int)
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Escreva um valor para adicionar ao array: " << endl;
		cin >> array[i];
	}
}

void ArrayInt::remover()
{
	free(array);
}

void ArrayInt::realocar()
{
	if (array[2])
	{
		array = (int *)realloc(array, 5 * sizeof(int));

		for (int i = 0; i < 5; i++)
		{
			cout << "Escreva um valor para adicionar ao array: " << endl;
			cin >> array[i];
		}
	}
}

int ArrayInt::getObterValorEm(int)
{
	cout << "Digite a posicao que quer visualizar: " << endl;
	cin >> valor;

	cout << array[valor] << endl;

	return 0;
}

int ArrayInt::getObterValor()
{
	cout << array[7] << endl;
	return 0;
}

int ArrayInt::getMostrarValores()
{
	for (int i = 0; i < 8; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}

int ArrayInt::getTamanho()
{
	return 0;
}