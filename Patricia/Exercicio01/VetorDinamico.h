#pragma once
class VetorDinamico
{
public:
	VetorDinamico();
	~VetorDinamico();

	int contador,tamanho;
	int exibe();
	int* vetor;
	void adicionar_valor(int valor);
	int obtem_valor(int posicao);
	int remover_valor(int posicao);
};

