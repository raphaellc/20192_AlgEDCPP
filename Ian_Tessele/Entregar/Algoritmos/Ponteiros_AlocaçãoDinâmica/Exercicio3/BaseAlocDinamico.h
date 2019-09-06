#include <iostream>

#pragma once
class BaseAlocDinamico
{
public:
	BaseAlocDinamico();
	~BaseAlocDinamico();

	void BaseC_Plus_Plus(int *Vetor, int VetorSize); //método em C++
	void Delete_C_Plus_Plus(int *Vetor);//método em C++

	void BaseC(int *Vetor, int VetorSize);//método em C
	void Delete_C(int *Vetor);//método em C

	void ADD_Values(int *Vetor, int VetorSize);//Método para adicionar valores

	void Realloc(int *Vetor, int VetorSize, int NewVetorSize);////método em C para realocar
	void New(int *Vetor, int VetorSize, int NewVetorSize);//método em C++ para realocar


	//os métodos são iguais apenas o cout é diferente
	void ViewUI_C(int *Vetor, int VetorSize);//método em C(apenas para dizer se é em C)
	void ViewUI_C_Plus_Plus(int *Vetor, int VetorSize);//método em C++(apenas para dizer se é em C++)
};

