#include <iostream>
#include "ArrayInt.h"
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {

	int aux, num = 0;
	srand(time(0));

	ArrayInt * array = new ArrayInt();

	for (int i = 0; i < 18; i++) {
		aux = rand() % 10;
		array->adiciona(aux);
		cout << "[" << i << "]" << array->obterValorEm(i) << "\t" << "Tamanho vetor: " << array->tam << endl;
	}

	//cout << "Digite -1 para parar de remover valores\n";
	//
	//while (num != -1 && num <= array->indice && array->indice) {
	//	cout << endl << "Digite uma posicao para remover: ";
	//	cin >> num;
	//	if (num < 0 || num > array->indice) {
	//		cout << "Numero invalido\n";
	//	}
	//	else {
	//		array->remover();
	//		for (int i = 0; i < array->indice; i++) {
	//			cout << "[" << i << "]" << array->obterValorEm(i) << "\t" << "Tamanho vetor: " << array->tam << endl;
	//		}
	//	}
	//}

	cout << "\n------------------------\n";
	array->remover();
			for (int i = 0; i < array->indice; i++) {
			cout << "[" << i << "]" << array->obterValorEm(i) << "\t" << "Tamanho vetor: " << array->tam << endl;
		}
	cout << "\n------------------------\n";
	array->remover();
			for (int i = 0; i < array->indice; i++) {
			cout << "[" << i << "]" << array->obterValorEm(i) << "\t" << "Tamanho vetor: " << array->tam << endl;
		}
	cout << "\n------------------------\n";
	array->remover();
			for (int i = 0; i < array->indice; i++) {
			cout << "[" << i << "]" << array->obterValorEm(i) << "\t" << "Tamanho vetor: " << array->tam << endl;
		}

	system("pause");
	return 0;
}