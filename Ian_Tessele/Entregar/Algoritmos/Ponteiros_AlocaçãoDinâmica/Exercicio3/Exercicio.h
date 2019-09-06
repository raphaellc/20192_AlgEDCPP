#pragma once
#include "BaseAlocDinamico.h"
class Exercicio : public BaseAlocDinamico
{
public:
	Exercicio();
	~Exercicio();

	void Atualizar();

protected:
	int *Vetor;
	int VetorSize;

};

