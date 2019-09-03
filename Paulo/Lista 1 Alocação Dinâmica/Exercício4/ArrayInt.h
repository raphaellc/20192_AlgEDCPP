#pragma once
#include <iostream>
class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();

	void realocar();
	int tamanho();
	void adiciona(int val);
	void remover();
	int obterValorEm(int i);
	int obterValor();
	int mostrarValores();

	int *array;
	int indice, tam, qtd_elementos;
};

