#include <iostream>
#include "ArrayInt.h"
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {

	int aux, num = 0;
	srand(time(0));

	ArrayInt * array = new ArrayInt();

	for (int i = 0; i < 11; i++) {
		aux = rand() % 10;
		array->adiciona(aux);
		cout << "[" << i << "]" << array->obterValorEm(i) << "\t" << "Tamanho vetor: " << array->tam << endl;
	}


	std::cout << "----- obtendo ultimo elemento -----\n";
	array->obterValor();

	std::cout << "----- removendo ultimo elemento -----\n";
	array->remover();
	std::cout << "----- obtendo ultimo elemento -----\n";
	array->obterValor();


	std::cout << "----- removendo ultimo elemento -----\n";
	array->remover();
	std::cout << "----- obtendo ultimo elemento -----\n";
	array->obterValor();


	std::cout << "----- obtendo todos elementos -----\n";
	array->mostrarValores();





	system("pause");
	return 0;
}