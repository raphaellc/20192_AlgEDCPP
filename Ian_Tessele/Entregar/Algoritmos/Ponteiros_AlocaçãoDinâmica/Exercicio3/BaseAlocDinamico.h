#include <iostream>

#pragma once
class BaseAlocDinamico
{
public:
	BaseAlocDinamico();
	~BaseAlocDinamico();

	void BaseC_Plus_Plus(int *Vetor, int VetorSize); //m�todo em C++
	void Delete_C_Plus_Plus(int *Vetor);//m�todo em C++

	void BaseC(int *Vetor, int VetorSize);//m�todo em C
	void Delete_C(int *Vetor);//m�todo em C

	void ADD_Values(int *Vetor, int VetorSize);//M�todo para adicionar valores

	void Realloc(int *Vetor, int VetorSize, int NewVetorSize);////m�todo em C para realocar
	void New(int *Vetor, int VetorSize, int NewVetorSize);//m�todo em C++ para realocar


	//os m�todos s�o iguais apenas o cout � diferente
	void ViewUI_C(int *Vetor, int VetorSize);//m�todo em C(apenas para dizer se � em C)
	void ViewUI_C_Plus_Plus(int *Vetor, int VetorSize);//m�todo em C++(apenas para dizer se � em C++)
};

