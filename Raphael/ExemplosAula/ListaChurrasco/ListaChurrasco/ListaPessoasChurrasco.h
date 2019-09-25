#pragma once
#include "Pessoa.h"
class ListaPessoasChurrasco
{
public:
	ListaPessoasChurrasco();
	~ListaPessoasChurrasco();
	void adicionarPessoa(Pessoa * p);
	void listaPessoasDoChurrasco();
	//removerPessoa
	//buscarPessoaPorNome
	//buscarPessoasPorGenero
	//contarPessoasPorGenero
	//contarPessoasPorIdade
private:
	Pessoa * inicio_lista;
};

