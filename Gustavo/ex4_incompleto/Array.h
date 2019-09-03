#pragma once
class Array
{
public:
	Array();
	~Array();
	void realocar();
	void adiciona(int val);
	int tamanho();
	void remover();
	int ObterValorEm(int i);
	int ObterValor();
	int MostrarValores();
protected:
	int *array, indice, tamanho, qtd_elementos;
};

