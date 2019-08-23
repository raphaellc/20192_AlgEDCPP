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

	int aux, num = 0;
	srand(time(0));

	VetorDinamico * vetor = new VetorDinamico();
	
	for (int i = 0; i < 18; i++) {
		aux = rand() % 10;
		vetor->adiciona_valor(aux);
		cout << "[" << i << "]" << vetor->obtem_valor(i) << "\t" << "Tamanho vetor: " << vetor->tamanho << endl;
	}

	cout << "Digite -1 para parar de remover valores\n";

	while (num != -1 && vetor->contador) {
		cout << endl << "Digite uma posicao para remover: ";
		cin >> num;
		vetor->remove_valor(num);
		for (int i = 0; i < vetor->contador; i++) {
			cout << "[" << i << "]" << vetor->obtem_valor(i) << "\t" << "Tamanho vetor: " << vetor->tamanho << endl;
		}
	}

	system("pause");
	return 0;
}