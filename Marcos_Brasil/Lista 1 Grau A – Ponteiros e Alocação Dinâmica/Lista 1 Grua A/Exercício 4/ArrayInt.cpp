#include "ArrayInt.h"



ArrayInt::ArrayInt()
{
	tamanho = 5;
	vetor = new int[tamanho];
}


ArrayInt::~ArrayInt()
{
}

void ArrayInt::realocarVetor()
{
	vetor = (int*)realloc(vetor, tamanho * sizeof(int));
}

void ArrayInt::adicionaValor(int num)
{
	vetor[tamanho - 1] = num;
}

void ArrayInt::removerValor()
{
	vetor[tamanho - 1] = NULL;
}

int ArrayInt::tamanhoVetor()
{
	tamanho += 5;
	return tamanho;
}

int ArrayInt::obterValorEm(int i)
{
	if (i >= tamanho)
	{
		return NULL;
	}
	else
	{
		return vetor[i];
	}
}

void ArrayInt::mostrarValores()
{
	for (int i = 0; i < tamanho; i++)
	{
		printf(" | %d", vetor[i]);

		if (i == tamanho - 1)printf(" |\n");
	}
	printf("\n");
}
