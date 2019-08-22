#include <iostream>
#include "VetorDinamico.cpp"
using namespace std;
int main() {

	//Regras
	//Inicia com 5 posicoes
	//Realoca o vetor de 5 em 5 elementos (remocao e adicao)
	//Testa a classe no Main

	//int * v = new int;
	//
	////Alocacao dinamica de memoria do C++
	//int * v1 = new int[10];
	//delete v1; //libera espaco de memoria alocada
	//
	////Aloca memoria e inicializa com zeros (mais lenta que o malloc)
	//int * v2 = (int *)calloc(10, sizeof(int));
	//
	//for (int i = 0; i < 10; i++){
	//	v2[i] = 0;
	//}
	//*(v2 + 6) = 2;
	////*v2[1] = 2;
	//
	//
	//v2 = (int *)realloc(v2, 5 * sizeof(int));
	//cout << v2[6] << endl;
	//cout << v2[3] << endl;
	//int vet[10];

	VetorDinamico * vetor;


	VetorDinamico.adiciona_valor(1);
	VetorDinamico.adiciona_valor(2);
	VetorDinamico.adiciona_valor(3);
	VetorDinamico.adiciona_valor(4);
	VetorDinamico.adiciona_valor(5);
	VetorDinamico.adiciona_valor(6);
	VetorDinamico.adiciona_valor(7);
	VetorDinamico.adiciona_valor(8);

	VetorDinamico.remove_valor(4);
	VetorDinamico.remove_valor(3);

	system("pause");
	return 0;
}