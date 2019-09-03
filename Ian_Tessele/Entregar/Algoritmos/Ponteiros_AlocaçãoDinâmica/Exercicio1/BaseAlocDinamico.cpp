#include "BaseAlocDinamico.h"


BaseAlocDinamico::BaseAlocDinamico()
{
}


BaseAlocDinamico::~BaseAlocDinamico()
{
}

void BaseAlocDinamico::Base(int *Vetor, int VetorSize)
{

	Vetor = new int[VetorSize];

	std::cout << "Create" << std::endl << std::endl;

	for (int i = 0; i < VetorSize; i++) {

		Vetor[i] = rand() % 100;

	}
	for (int i = 0; i < VetorSize; i++) {

		std::cout <<"Value "<< i << ": " << Vetor[i] << std::endl;

	}
}

void BaseAlocDinamico::Delete(int * Vetor)
{
	std::cout << std::endl;
	delete Vetor;
	std::cout << "Clear" << std::endl << std::endl;
}
