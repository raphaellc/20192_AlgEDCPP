#include "Pessoa.h"



Pessoa::Pessoa()
{
	this->proxima = nullptr;
}


Pessoa::~Pessoa()
{
}

Pessoa * Pessoa::obtemProxima()
{
	return this->proxima;
}

void Pessoa::defineNome(std::string nm)
{
	this->nome = nm;
}

std::string Pessoa::obtemNome()
{
	return this->nome;
}

void Pessoa::defineProximaPessoa(Pessoa * pr)
{
	this->proxima = pr;
}
