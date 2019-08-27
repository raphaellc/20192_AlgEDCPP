#include "AlocDim.h"



AlocDim::AlocDim()
{
}


AlocDim::~AlocDim()
{
}

void AlocDim::set_vetor(int _tamanho)
{
	vetor = (int*)malloc(_tamanho * sizeof(int));
}

void AlocDim::set_valor(int _pos, int _valor)
{
	posVetor = _pos;
	valor = _valor;

	vetor[posVetor] = valor;
}

void AlocDim::set_ultimaPosVetor(int _pos)
{
	posMaxVetor = _pos;
}

void AlocDim::clear_valor(int _pos)
{
	posVetor = _pos;
	vetor[posVetor] = free();
}
