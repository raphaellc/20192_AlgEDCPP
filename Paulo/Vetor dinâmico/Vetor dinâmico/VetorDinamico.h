#pragma once
class VetorDinamico
{
public:
	VetorDinamico();
	~VetorDinamico();
	
	void adiciona_valor(int valor);
	int obtem_valor(int posicao);
	int remove_valor(int posicao);

	int * vetor;
	int tamanho = 5, contador;
};

