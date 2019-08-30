#include <iostream>
using namespace std;
int main() {
	int * v = new int;

	//Alocacao dinamica de memoria do C++
	int * v1 = new int[10];
	delete v1; //libera espaco de memoria alocada

	//Aloca memoria, mas nao inicializa
	//int * v2 = (int *)malloc(10 * sizeof(int));
	//free(v2); //libera o espaco de memoria locado

	//Aloca memoria e inicializa com zeros (mais lenta que o malloc)
	int * v2 = (int *)calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++) v2[i] = 0;
	*(v2 + 6) = 2;
	//*v2[1] = 2;


	v2 = (int *)realloc(v2, 5*sizeof(int));
	cout << v2[6] << endl;
	cout << v2[3] << endl;
	int vet[10];

	system("pause");
}