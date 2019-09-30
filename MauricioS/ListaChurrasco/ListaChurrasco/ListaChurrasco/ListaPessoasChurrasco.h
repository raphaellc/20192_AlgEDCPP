#pragma once
#include "Pessoa.h"
#include "No.h"

class ListaPessoasChurrasco
{
public:
	ListaPessoasChurrasco();
	~ListaPessoasChurrasco();

	void adicionarPessoa(Pessoa *p_pessoa);
	void listaPessoasDoChurrasco();
	void quantidadeCarne();

	void quantidadeHomens();
	void quantidadeMulheres();

private:
	No *inicioLista;
	No *fimLista;
	int quantidadeNo;
	int qtCarne;
	int qtHomens = 0, qtMulheres = 0;
};

