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

	ADD_Values(Vetor, VetorSize);//chama um método para Adicionar os Valores

	ViewUI_C_Plus_Plus(Vetor, VetorSize);
}
void BaseAlocDinamico::BaseC(int * Vetor, int VetorSize)
{
	Vetor = (int *)malloc(VetorSize * sizeof(int));

	ADD_Values(Vetor, VetorSize);//chama um método para Adicionar os Valores

	ViewUI_C(Vetor, VetorSize);
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

void BaseAlocDinamico::Realloc(int * Vetor, int VetorSize, int NewVetorSize)
{
	/*
	Redefine o valor de tamnho do vetor 
	pegando o valor atual + o novo valor
	*/
	VetorSize += NewVetorSize;
	
	Vetor = (int *)realloc(Vetor, (VetorSize) * sizeof(int));

	ADD_Values(Vetor, VetorSize);

	ViewUI_C(Vetor, VetorSize);
}

void BaseAlocDinamico::New(int * Vetor, int VetorSize, int NewVetorSize)
{
	/*
	Redefine o valor de tamnho do vetor
	pegando o valor atual + o novo valor
	*/
	VetorSize += NewVetorSize;

	Vetor = new int[VetorSize];

	ADD_Values(Vetor, VetorSize);

	ViewUI_C_Plus_Plus(Vetor, VetorSize);

}

void BaseAlocDinamico::ViewUI_C(int * Vetor, int VetorSize)
{
	std::cout << "Create in C" << std::endl << std::endl;

	for (int i = 0; i < VetorSize; i++) {

		std::cout << "Value " << i << ": " << Vetor[i] << std::endl;  //Mostra os Valores

	}
}

void BaseAlocDinamico::ViewUI_C_Plus_Plus(int * Vetor, int VetorSize)
{
	std::cout << "Create in C++" << std::endl << std::endl;

	for (int i = 0; i < VetorSize; i++) {

		std::cout << "Value " << i << ": " << Vetor[i] << std::endl;  //Mostra os Valores

	}
}
