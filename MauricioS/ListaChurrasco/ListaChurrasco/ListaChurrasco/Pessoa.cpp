#include "Pessoa.h"



Pessoa::Pessoa()
{
}


Pessoa::~Pessoa()
{
}

void Pessoa::setNome(std::string p_nome)
{
	nome = p_nome;
}

std::string Pessoa::getNome()
{
	return nome;
}

void Pessoa::setGenero(std::string p_genero)
{
	genero = p_genero;
}

std::string Pessoa::getGenero()
{
	return genero;
}
