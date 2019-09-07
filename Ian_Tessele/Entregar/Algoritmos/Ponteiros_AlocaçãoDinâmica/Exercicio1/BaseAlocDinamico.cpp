#include "BaseAlocDinamico.h"


BaseAlocDinamico::BaseAlocDinamico()
{
}


BaseAlocDinamico::~BaseAlocDinamico()
{
}

void BaseAlocDinamico::BaseC_Plus_Plus(int *Vetor, int VetorSize)
{

	Vetor = new int[VetorSize];

	std::cout << "Create in C++" << std::endl << std::endl;

	ADD_Values(Vetor, VetorSize);//chama um m�todo para Adicionar os Valores

	for (int i = 0; i < VetorSize; i++) {

		std::cout << "Value " << i << ": " << Vetor[i] << std::endl;  //Mostra os Valores

	}
}
void BaseAlocDinamico::BaseC(int * Vetor, int VetorSize)
{
	Vetor = (int *)malloc(VetorSize * sizeof(int));

	std::cout << "Create in C" << std::endl << std::endl;

	ADD_Values(Vetor, VetorSize);//chama um m�todo para Adicionar os Valores

	for (int i = 0; i < VetorSize; i++) {

		std::cout << "Value " << i << ": " << Vetor[i] << std::endl; //Mostra os Valores

	}
}


void BaseAlocDinamico::Delete_C_Plus_Plus(int * Vetor)
{
	std::cout << std::endl;
	delete Vetor;
	std::cout << "Clear" << std::endl << std::endl;
}


void BaseAlocDinamico::Delete_C(int * Vetor)
{
	std::cout << std::endl;
	free(Vetor);
	std::cout << "Clear" << std::endl << std::endl;
}

void BaseAlocDinamico::ADD_Values(int * Vetor, int VetorSize)
{

	for (int i = 0; i < VetorSize; i++) {

		Vetor[i] = rand() % 100;  //Adiciona os Valores

	}

}
