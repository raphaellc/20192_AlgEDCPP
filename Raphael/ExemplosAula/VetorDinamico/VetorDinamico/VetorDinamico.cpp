#include "VetorDinamico.h"
#include <iostream>


VetorDinamico::VetorDinamico()
{
	this->vetor_dinamico = (int *) malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++)
		this->vetor_dinamico[i] = -1;
	this->tam = 5;
	this->cont = 0;
}


VetorDinamico::~VetorDinamico()
{
	delete this->vetor_dinamico;
}

void VetorDinamico::adicionaValor(int valor)
{
	bool atribuido = true;
	if (cont == 0) {
		this->vetor_dinamico[0] = valor;
		cont++;
	}
	else if (cont == tam) {
		realocar(tam + 5); //inicialmente 5 vai incrementar de 5 em 5
		this->vetor_dinamico[cont] = valor;
		cont++;
	}
	else{
		for (int i = 0; i < tam; i++) {
			if ((this->vetor_dinamico[i] < 0) && atribuido) {
				this->vetor_dinamico[i] = valor;
				atribuido = false;
				cont++;
			}
		}
	}
}

int VetorDinamico::removeValor(int posicao)
{
	int valor_retorno, j = 0;
	if (cont == 0) {
		return -1;
	}	
	else if (posicao < tam && posicao >= 0) {
		if (this->vetor_dinamico[posicao] < 0){//posi��o livre!
			return -1;
		}
		valor_retorno = this->vetor_dinamico[posicao];
		this->vetor_dinamico[posicao] = -1;
		cont--;
		if (cont == (tam - 5) && tam > 5) {//verificar para realocar
			for (int i = 0; i < tam; i++) {
				if (this->vetor_dinamico[i] <= -1) {
					j = i + 1;
					while ((this->vetor_dinamico[j] <= -1) && j < tam) {
						j++;
					}
					if (j != tam) {
						this->vetor_dinamico[i] = this->vetor_dinamico[j];
						this->vetor_dinamico[j] = -1;
					}
				}
			}
			realocar(tam - 5);
		}
	}

	return 0;
}

int VetorDinamico::obtemValor(int posicao)
{
	if(cont == 0)
		return 0;
	else if (posicao >= 0 && posicao < tam) {
		return this->vetor_dinamico[posicao];
	}else
	{
		return -1;
	}
}

int VetorDinamico::obterTamanho()
{
	return this->tam;
}

int VetorDinamico::obterNumElementos()
{
	return this->cont;
}

void VetorDinamico::realocar(int novo_tam)
{
	//this->vetor_dinamico = (int *) realloc(this->vetor_dinamico, novo_tam*sizeof(int));
	
	//copiando o endereco do in�cio do vetor
	int * vet_aux = this->vetor_dinamico; 
	this->vetor_dinamico = new int[novo_tam];
	//copiando os dados do espa�o antigo para o novos espa�o
	for (int j = 0; j < tam; j++) 
		this->vetor_dinamico[j] = vet_aux[j];
	delete[] vet_aux;
	for (int i = tam; i < novo_tam; i++) {
		this->vetor_dinamico[i] = -1;
	}
	tam = novo_tam;
}
