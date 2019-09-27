#include "Pessoa.h"



Pessoa::Pessoa()
{
}


Pessoa::~Pessoa()
{
}

void Pessoa::defineNome(std::string nm)
{
	this->nome = nm;
}

std::string Pessoa::obtemNome()
{
	return this->nome;
}
