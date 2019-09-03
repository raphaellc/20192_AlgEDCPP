#pragma once
class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();

	void adiciona(int val);
	void remover();
	int obterValorEm(int i);
	int obterValor();
	int mostrarValores();

protected:
	int *array;
	int indice;
	int tamanho;
	int qtd_elementos;

	void realocar();
	int Tamanho();

};

