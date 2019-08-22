#include <iostream>
#include "VetorDinamico.h"
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {

	//Regras
	//Inicia com 5 posicoes
	//Realoca o vetor de 5 em 5 elementos (remocao e adicao)
	//Testa a classe no Main

	int aux;
	srand(time(0));

	VetorDinamico * vetor = new VetorDinamico();

	for (int i = 0; i < 8; i++) {
		aux = rand() % 10;
		vetor->adiciona_valor(aux);
	}

	for (int i = 0; i < 8; i++) {
		cout << vetor->obtem_valor(i) << endl;
	}

	system("pause");
	return 0;
}