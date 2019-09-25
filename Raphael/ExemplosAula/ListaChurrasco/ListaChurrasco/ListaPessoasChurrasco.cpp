#include "ListaPessoasChurrasco.h"
#include <iostream>


ListaPessoasChurrasco::ListaPessoasChurrasco()
{
}


ListaPessoasChurrasco::~ListaPessoasChurrasco()
{
}

void ListaPessoasChurrasco::adicionarPessoa(Pessoa * p)
{
	if (this->inicio_lista == nullptr) {
		this->inicio_lista = p;
	}
	else {
		Pessoa * percorre = this->inicio_lista;
		while (percorre->obtemProxima() != nullptr) {
			percorre = percorre->obtemProxima();
		}
		percorre->defineProximaPessoa(p);
	}
}

void ListaPessoasChurrasco::listaPessoasDoChurrasco()
{
	if (this->inicio_lista == nullptr) {
		std::cout << "lista vazia";
	}
	else {
		Pessoa * percorre = this->inicio_lista;
		while (percorre != nullptr) {
			std::cout << "Nome da Pessoa: " << percorre->obtemNome().c_str() << std::endl;
			percorre = percorre->obtemProxima();
		}
	}
}
