#include <iostream>

#pragma once
class BaseAlocDinamico
{
public:
	BaseAlocDinamico();
	~BaseAlocDinamico();

	void Base(int *Vetor, int VetorSize);
	void Delete(int *Vetor);
};

