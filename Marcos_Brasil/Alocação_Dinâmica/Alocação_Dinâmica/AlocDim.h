#pragma once
#include <iostream>
#include <stdlib.h>

class AlocDim
{
public:
	AlocDim();
	~AlocDim();

	//sets
	void set_vetor(int _tamanho);
	void set_valor(int _pos, int _valor);
	void set_ultimaPosVetor(int _pos);

	//gets
	int get_posVetor() { return posVetor; }
	int get_posMaxVetor() { return posMaxVetor; }
	int get_posValor() { return valor; }
	bool get_ultimaPosVetor() { return ultimaPosVetor; }

	//clears e deletes 
	void clear_valor(int _pos);
	void realocar_vetor(int _tamanho);

	//others
	void desenhar();


protected:
	int *vetor, posVetor, posMaxVetor, valor;
	bool ultimaPosVetor;
};

