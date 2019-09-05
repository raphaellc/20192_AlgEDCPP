#include "ArrayInt.h"



ArrayInt::ArrayInt(){
	int tam = 5;
	int qtd_elementos = 0;
	array = (int*)malloc(tam * sizeof(int));
}


ArrayInt::~ArrayInt(){
	delete this->array;
}

void ArrayInt::realocar(){
	//caso precise aumentar
	if (indice >= tam) {
		tam += 5;
		array = (int*)realloc(array, tam * sizeof(int));
	}
	//caso precise diminuir
	else if (qtd_elementos == tam - 5) {
		tam -= 5;
		array = (int*)realloc(array, tam * sizeof(int));
	}
}

int ArrayInt::tamanho(){
	return tam;
}

void ArrayInt::adiciona(int val){
	array[indice] = val;
	indice++;
	qtd_elementos++;
	if (indice >= tam) {
		ArrayInt::realocar();
	}
}

void ArrayInt::remover(){
	if (indice == 0) {
		std::cout << "vetor vazio" << std::endl;
	}
	else {
		array[qtd_elementos-1] = NULL;
		qtd_elementos--;
		if (qtd_elementos == tam - 5) {
			ArrayInt::realocar();
		}
	}
}

int ArrayInt::obterValorEm(int i){
	if (i < 0 || i > tam) {
		std::cout << "\n\nnumero invalido, tem que mudar isso dai talkey\n\n";
	}
	else {
		return array[i];
	}
	return 0;
}

int ArrayInt::obterValor(){
	std::cout << array[qtd_elementos-1] << std::endl;
	return 0;
}

int ArrayInt::mostrarValores(){
	for (int i = 0; i < qtd_elementos; i++) {
		std::cout << "[" << i << "]" << obterValorEm(i) << "\t" << "Tamanho vetor: " << tam << std::endl;
	}
	return 0;
}
