#include "VetorDinamico.h"



VetorDinamico::VetorDinamico()
{
	this->vetor_dinamico = (int *) malloc(10 * sizeof(int));
}


VetorDinamico::~VetorDinamico()
{
	delete this->vetor_dinamico;
}

void VetorDinamico::adicionaValor(int valor)
{

}

int VetorDinamico::removeValor(int posicao)
{
	return 0;
}

int VetorDinamico::obtemValor(int posicaco)
{
	return 0;
}

void VetorDinamico::realocar(int novo_tam)
{
}
