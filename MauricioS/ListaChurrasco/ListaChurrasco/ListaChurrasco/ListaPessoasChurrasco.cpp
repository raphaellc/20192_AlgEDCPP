#include "ListaPessoasChurrasco.h"

ListaPessoasChurrasco::ListaPessoasChurrasco()
{
}


ListaPessoasChurrasco::~ListaPessoasChurrasco()
{
}

void ListaPessoasChurrasco::adicionarPessoa(Pessoa * p_pessoa)
{
	No *novoNo;
	novoNo = new No();
	novoNo->setInfo(p_pessoa);

	if (inicioLista == nullptr)
	{
		inicioLista = novoNo;
		fimLista = novoNo;
	}
	else
	{
		fimLista->setProximo(novoNo);
		fimLista = novoNo;
	}
	quantidadeNo++;
}

void ListaPessoasChurrasco::listaPessoasDoChurrasco()
{
	if (inicioLista == nullptr)
	{
		std::cout << "lista vazia";
	}
	else
	{
		No *percorre = inicioLista;
		while (percorre != nullptr)
		{
			std::cout << "nome da pessoa: " << percorre->getPessoa()->getNome().c_str() << std::endl;
			std::cout << "genero: " << percorre->getPessoa()->getGenero().c_str() << std::endl;
			
			if (percorre->getPessoa()->getGenero() == "m")
				qtHomens += 1;
			else if (percorre->getPessoa()->getGenero() == "f")
				qtMulheres += 1;

			percorre = percorre->getProximo();
		}
	}
}

void ListaPessoasChurrasco::quantidadeCarne()
{
	if (inicioLista == nullptr)
	{
		std::cout << "lista vazia";
	}
	else
	{
		No *percorre = inicioLista;
		while (percorre != nullptr)
		{
			if (percorre->getPessoa()->getGenero() == "m")
			{
				qtCarne += 500;
			}
			else if (percorre->getPessoa()->getGenero() == "f")
			{
				qtCarne += 300;
			}
			percorre = percorre->getProximo();
		}
		std::cout << "quantidade de carne: " << qtCarne << std::endl;
	}
}

void ListaPessoasChurrasco::quantidadeHomens()
{
	std::cout <<  "Quantidade de homens: " << qtHomens << std::endl;
}

void ListaPessoasChurrasco::quantidadeMulheres()
{
	std::cout << "Quantidade de mulheres: " << qtMulheres << std::endl;
}
