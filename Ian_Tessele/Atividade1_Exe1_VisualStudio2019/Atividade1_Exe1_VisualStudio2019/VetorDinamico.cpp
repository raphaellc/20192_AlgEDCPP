#include "VetorDinamico.h"
#include <iostream>
using namespace std;


void VetorDinamico::AdicionarValor(int valor)
{

	vetor = (int*)malloc(valor * sizeof(int));

}

int VetorDinamico::Obter_Valor(int posicao)
{

	return vetor[posicao];
}

int VetorDinamico::Remover_Valor(int posicao)
{

	vetor[posicao];

	return 0;
}
