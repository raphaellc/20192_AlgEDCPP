#pragma once
#include "Pessoa.h"
class ListaPessoasChurrasco
{
public:
	ListaPessoasChurrasco();
	~ListaPessoasChurrasco();
	void adicionarPessoa(Pessoa * p);
	//removerPessoa
	//buscarPessoaPorNome
	//buscarPessoasPorGenero
	//contarPessoasPorGenero
	//contarPessoasPorIdade
private:
	Pessoa * inicio_lista;
};

