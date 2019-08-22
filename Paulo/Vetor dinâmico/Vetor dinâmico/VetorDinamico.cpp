#include "VetorDinamico.h"
#include <iostream>
using namespace std;

VetorDinamico::VetorDinamico(){
	int tamanho = 5;
	int posicao = 0;
	vetor = (int *)malloc(tamanho * sizeof(int));
}


VetorDinamico::~VetorDinamico(){
}

void VetorDinamico::adiciona_valor(int valor){
	vetor[posicao] = valor;
	posicao++;

	if (posicao >= tamanho) {
		tamanho += 5;
		vetor = (int*)realloc(vetor, tamanho * sizeof(int));
	}

}

int VetorDinamico::obtem_valor(int posicao){
	if (posicao < 0 || posicao > tamanho) {
		std::cout << "\n\nnumero invalido, tem que mudar isso dai talkey\n\n";
	}
	else {
		return vetor[posicao];
	}

	return 0;
}

int VetorDinamico::remove_valor(int posicao){
	vetor[posicao] = NULL;
	posicao--;

	if (posicao < (tamanho - 5)){
		tamanho -= 5;
		vetor = (int*)realloc(vetor, tamanho * sizeof(int));
	}


	return 0;
}
