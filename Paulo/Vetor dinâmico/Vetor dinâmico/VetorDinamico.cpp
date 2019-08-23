#include "VetorDinamico.h"
#include <iostream>
using namespace std;

VetorDinamico::VetorDinamico(){
	int tamanho = 5;
	int contador = 0;
	vetor = (int *)malloc(tamanho * sizeof(int));
}


VetorDinamico::~VetorDinamico(){
	delete this->vetor;
}

void VetorDinamico::adiciona_valor(int valor){
	vetor[contador] = valor;
	contador++;

	if (contador >= tamanho) {
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
	if (contador == 0) {
		cout << "vetor vazio" << endl;
	}
	else {
		for (int i = posicao; i < tamanho; i++) {
			vetor[i] = vetor[i + 1];
		}
		contador--;
		if (contador == tamanho - 5) {
			tamanho -= 5;
			vetor = (int*)realloc(vetor, tamanho * sizeof(int));
		}
	}
	return 0;
}
