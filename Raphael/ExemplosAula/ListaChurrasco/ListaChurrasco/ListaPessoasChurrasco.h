#pragma once
#include "Pessoa.h"
#include "No.h"
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
	No * inicio_lista;
	No * fim_lista;
	int quantidadeNo;
};

