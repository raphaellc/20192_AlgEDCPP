#pragma once
#include "Pessoa.h"
class No
{
public:
	No();
	~No();
	void setProximo(No *p_proximo);
	No *getProximo();
	void setInfo(Pessoa *p_pessoa);
	Pessoa *getPessoa();

private:
	Pessoa * info;
	No *proximo;
};

