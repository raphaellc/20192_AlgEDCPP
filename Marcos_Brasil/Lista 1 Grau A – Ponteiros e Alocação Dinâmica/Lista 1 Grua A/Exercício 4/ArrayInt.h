#pragma once
#include <iostream>
#include <stdlib.h>

class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();

	void adicionaValor(int num);
	void removerValor();
	void mostrarValores();

	int tamanhoVetor();

	int obterValorEm(int i);
	int obterValor(){ return valor; }
	

private:

	void realocarVetor();

	int *vetor, indice, tamanho, qtd_elementos, valor;
};

