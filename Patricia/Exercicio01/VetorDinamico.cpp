#include "VetorDinamico.h"
#include <iostream>

using namespace std;

VetorDinamico::VetorDinamico()
{
	int contador = 0;
	int tamanho = 5;
	vetor = (int*)malloc(tamanho * sizeof(int));
}


VetorDinamico::~VetorDinamico()
{
}

int VetorDinamico::exibe()
{
	for (int i = 0; i < tamanho; i++)
	{
		int valor = vetor[i];
		if (i >= contador)
		{
			valor =- 1;
		}
		cout << "[" << valor << "]";
	}
	return 0;
}

void VetorDinamico::adicionar_valor(int valor)
{

	vetor[contador] = valor;
	contador++;
	if (contador >= tamanho)
	{
		tamanho += 5;
		vetor=(int*)realloc(vetor, tamanho * sizeof(int));
	}

}

int VetorDinamico::obtem_valor(int posicao)
{
	if (posicao<0 || posicao>contador)
	{
		return -1;
	}
	else
	{
		return vetor[posicao];
	}
	
}

int VetorDinamico::remover_valor(int posicao)
{
	for (int i = posicao; i < tamanho; i++)
	{
		vetor[i] = vetor[i + 1];
	}
	contador--;
	return 0;
}
