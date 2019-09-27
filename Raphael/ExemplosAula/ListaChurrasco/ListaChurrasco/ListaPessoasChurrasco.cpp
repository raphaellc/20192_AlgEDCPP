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
	No * novo_no = new No();
	novo_no->defineInfo(p);
	if (this->inicio_lista == nullptr) {
		this->inicio_lista = novo_no;
		this-> fim_lista = novo_no;
	}
	else {
		fim_lista->defineProximo(novo_no);
		fim_lista = novo_no;
	}
	quantidadeNos++
}

void ListaPessoasChurrasco::listaPessoasDoChurrasco()
{
	if (this->inicio_lista == nullptr) {
		std::cout << "lista vazia";
	}
	else {
		No * percorre = this->inicio_lista;
		while (percorre != nullptr) {
			std::cout << "Nome da Pessoa: " << percorre->obtemInfo()->obtemNome().c_str() << std::endl;
			percorre = percorre->obtemProximo();
		}
	}
}
