#include "No.h"



No::No()
{
}


No::~No()
{
}

void No::setProximo(No * p_proximo)
{
	proximo = p_proximo;
}

No * No::getProximo()
{
	return proximo;
}

void No::setInfo(Pessoa * p_pessoa)
{
	info = p_pessoa;
}

Pessoa * No::getPessoa()
{
	return info;
}
