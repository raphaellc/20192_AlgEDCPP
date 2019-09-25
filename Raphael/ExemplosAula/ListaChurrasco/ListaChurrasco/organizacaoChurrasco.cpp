#include<iostream>
#include "ListaPessoasChurrasco.h"
int main() {
	ListaPessoasChurrasco * listaChurrasco = new ListaPessoasChurrasco();
	Pessoa * pessoa1 = new Pessoa();
	Pessoa * pessoa2 = new Pessoa();
	Pessoa * pessoa3 = new Pessoa();

	pessoa1->defineNome("Ian");
	pessoa2->defineNome("Maria");
	pessoa3->defineNome("Dillan");

	listaChurrasco->adicionarPessoa(pessoa1);
	listaChurrasco->adicionarPessoa(pessoa2);
	listaChurrasco->adicionarPessoa(pessoa3);
	listaChurrasco->listaPessoasDoChurrasco();
	system("pause");
	return 0;
}