#include "No.h"



No::No()
{
	this->proximo = nullptr;
}


No::~No()
{
}

void No::defineProximo(No * prox)
{
	this->proximo = prox;
}

No * No::obtemProximo()
{
	return this->proximo;
}

void No::defineInfo(Pessoa * pes)
{
	this->info = pes;
}

Pessoa * No::obtemInfo()
{
	return this->info;
}
