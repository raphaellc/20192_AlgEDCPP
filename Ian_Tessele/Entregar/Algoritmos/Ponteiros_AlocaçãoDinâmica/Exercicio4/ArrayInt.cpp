#include "ArrayInt.h"



ArrayInt::ArrayInt()
{
	tamanho = 10;
	indice = 0;
	array = new int[tamanho];

}


ArrayInt::~ArrayInt()
{
}

void ArrayInt::adiciona(int val)
{

	array[indice] = val;
	indice++;

	if (indice >= tamanho) {
		tamanho += 5;
		realocar();
	}
	
}

void ArrayInt::remover()
{
}

int ArrayInt::obterValorEm(int i)
{
	if (i, 0 || i > tamanho)
		std::cout << "Valor Invalido \n";
	else
		return array[i];
	
	return 0;
}

int ArrayInt::obterValor()
{
	return array[indice];
}

int ArrayInt::mostrarValores()
{
	return 0;
}

void ArrayInt::realocar()
{
	array = new int[tamanho];
}

int ArrayInt::Tamanho()
{
	return 0;
}
