#pragma once
#include "Pessoa.h"
class No
{
public:
	No();
	~No();
	void defineProximo(No * prox);
	No* obtemProximo();
	void defineInfo(Pessoa * pes);
	Pessoa * obtemInfo();
private:
	Pessoa * info;
	No * proximo;
};

