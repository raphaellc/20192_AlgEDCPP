#include <iostream>
#include "ListaPessoasChurrasco.h"

using namespace std;

int main()
{
	ListaPessoasChurrasco *listaChurrasco = new ListaPessoasChurrasco();
	Pessoa *pessoa1 = new Pessoa();
	Pessoa *pessoa2 = new Pessoa();
	Pessoa *pessoa3 = new Pessoa();

	pessoa1->setNome("pessoa1");
	pessoa1->setGenero("f");
	pessoa2->setNome("pessoa2");
	pessoa2->setGenero("m");
	pessoa3->setNome("pessoa3");
	pessoa3->setGenero("f");

	listaChurrasco->listaPessoasDoChurrasco();
	std::cout << std::endl;

	listaChurrasco->adicionarPessoa(pessoa1);
	listaChurrasco->adicionarPessoa(pessoa2);
	listaChurrasco->adicionarPessoa(pessoa3);

	listaChurrasco->listaPessoasDoChurrasco();
	listaChurrasco->quantidadeCarne();
	listaChurrasco->quantidadeHomens();
	listaChurrasco->quantidadeMulheres();

	system("pause");
	return 0;
}