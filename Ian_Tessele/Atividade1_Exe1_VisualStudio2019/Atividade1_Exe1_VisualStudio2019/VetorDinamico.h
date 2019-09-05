#pragma once
class VetorDinamico
{
public:
	void AdicionarValor(int valor);
	int Obter_Valor(int posicao);
	int Remover_Valor(int posicao);

	int * vetor = (int *)malloc(5 * sizeof(int));

};

