#include <iostream>
#include "Lista.h"
#include "Pessoa.h"

#include "Pilha.h"

int main() {

	//Pilha<Pessoa> * pilha_pessoas = new Pilha<Pessoa>;
	
	
	Lista<Pessoa> * listaPessoas = new Lista<Pessoa>;


	// Defini��o de pessoas
	Pessoa * pessoa1;
	pessoa1 = new Pessoa();
	pessoa1->s_nome = "Daciolo";
	pessoa1->i_idade = 40;

	Pessoa * deux = new Pessoa();
	deux->s_nome = "DEUX";
	deux->i_idade = 0;

	Pessoa * pessoa2 = new Pessoa();
	pessoa2->s_nome = "Raphael";
	pessoa2->i_idade = 0;

	Pessoa * pessoa3 = new Pessoa();
	pessoa3->s_nome = "Bozo";
	pessoa3->i_idade = 0;

	
	/*
	listaPessoas->insereFimLista(pessoa1);
	std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	listaPessoas->insereInicioLista(deux);
	std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	listaPessoas->insereFimLista(pessoa2);
	std::cout << listaPessoas->obtemTamanhoLista() << std::endl;

	std::cout << "obterPrimeiroElemento = " << listaPessoas->obterPrimeiroElemento()->s_nome << std::endl;
	std::cout << "obterUltimoElemento = " << listaPessoas->obterUltimoElemento()->s_nome << std::endl;
	
	std::cout << "obterElementoEm(0) = " << listaPessoas->obterElementoEm(0)->s_nome << std::endl;
	std::cout << "obterElementoEm(1) = " << listaPessoas->obterElementoEm(1)->s_nome << std::endl;
	std::cout << "obterElementoEm(2) = " << listaPessoas->obterElementoEm(2)->s_nome << std::endl;
	
	listaPessoas->insereEm(1, pessoa3);
	std::cout << listaPessoas->obtemTamanhoLista() << std::endl;
	std::cout << "obterElementoEm(2) = "<< listaPessoas->obterElementoEm(2)->s_nome << std::endl;
	std::cout << "obterUltimoElemento = " << listaPessoas->obterUltimoElemento()->s_nome << std::endl;
	
	listaPessoas->removePrimeiroNo();
	std::cout << listaPessoas->obterPrimeiroElemento()->s_nome << std::endl;

	listaPessoas->removeUltimoNo();
	std::cout << "obterUltimoElemento = " << listaPessoas->obterUltimoElemento()->s_nome << std::endl;

	//if (listaPessoas->contemNaLista(pessoa3)) std::cout << "sim \n"; else std::cout << "n�o \n";
	listaPessoas->esvaziaLista();
	std::cout << listaPessoas->obtemTamanhoLista() << std::endl;
	*/



	system("pause");
	return 0;
}