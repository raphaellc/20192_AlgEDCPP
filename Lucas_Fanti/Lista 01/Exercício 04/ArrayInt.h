#pragma once
class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();
	void realocar();
	void adicionar(int);
	void remover();
	int getTamanho();
	int getObterValorEm(int);
	int getObterValor();
	int getMostrarValores();

protected:
	int * array = new int[3];
	int valor, tamanho, qnt_elementos;
};

