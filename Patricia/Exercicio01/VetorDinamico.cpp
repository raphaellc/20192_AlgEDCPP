#include "VetorDinamico.h"
#include <iostream>



VetorDinamico::VetorDinamico()
{
	int contador = 0;
	int tamanho = 5;
	vetor = (int*)malloc(tamanho * sizeof(int));
}


VetorDinamico::~VetorDinamico()
{
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
	for (i = posicao; i < tamanho; i++)
	{
		vetor[i] = vetor[i + 1];
	}
	contador--;
	return 0;
}
