#include "ArrayInt.h"
#include <iostream>

using namespace std;

ArrayInt::ArrayInt()
{
	sizeVetor = 5;
	vetor = new int[sizeVetor]{0,0,0,0,0};
	qtCurrent = 0;
}


ArrayInt::~ArrayInt()
{
}

void ArrayInt::Realocar()
{
	sizeVetor += 5;

	int *__vetorTemp = new int[sizeVetor];

	for (int i = 0; i < qtCurrent; i++)
	{
		__vetorTemp[i] = vetor[i];
	}
	vetor = __vetorTemp;
}

void ArrayInt::Adicionar(int p_value)
{
	if (qtCurrent >= sizeVetor - 1)	
		Realocar();	

	vetor[qtCurrent] = p_value;	
	qtCurrent++;
}

void ArrayInt::AdicionarFinal(int p_valor)
{
	if (qtCurrent >= sizeVetor - 1)
		Realocar();

	if(vetor[sizeVetor - 1] <= 0)
		qtCurrent++;

	vetor[sizeVetor - 1] = p_valor;
}

void ArrayInt::RemoverUltimoValor()
{
	if (vetor[sizeVetor - 1] > 0)
	{
		vetor[sizeVetor - 1] = 0;
		qtCurrent--;
	}
	else
	{
		int __counter = sizeVetor - 1;
		bool __temp = true;

		while (__temp)
		{
			if (vetor[__counter] > 0)
			{
				vetor[__counter] = 0;
				qtCurrent--;
				__temp = false;
			}
			__counter--;
		}
	}
}

int ArrayInt::ObterValorEm(int p_posicao)
{
	return vetor[p_posicao];
}

int ArrayInt::ObtervalorFinal()
{
	return vetor[qtCurrent];
}

void ArrayInt::MostrarValores()
{
	for (int i = 0; i < sizeVetor; i++)
	{
		cout << "pos " << i << ": " << vetor[i] << endl;
	}

	cout << endl;
	cout << "---------------------------" << endl;
	cout << endl;
}