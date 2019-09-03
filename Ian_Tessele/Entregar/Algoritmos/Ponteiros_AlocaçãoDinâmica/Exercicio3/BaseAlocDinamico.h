#include <iostream>

#pragma once
class BaseAlocDinamico
{
public:
	BaseAlocDinamico();
	~BaseAlocDinamico();

	void BaseC_Plus_Plus(int *Vetor, int VetorSize);
	void Delete_C_Plus_Plus(int *Vetor);

	void BaseC(int *Vetor, int VetorSize);
	void Delete_C(int *Vetor);

	void ADD_Values(int *Vetor, int VetorSize);

	void Realloc(int *Vetor, int VetorSize, int NewVetorSize);
	void New(int *Vetor, int VetorSize, int NewVetorSize);

	void ViewUI_C(int *Vetor, int VetorSize);
	void ViewUI_C_Plus_Plus(int *Vetor, int VetorSize);
};

