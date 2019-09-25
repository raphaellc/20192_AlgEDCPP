#include "ListaPessoasChurrasco.h"



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
