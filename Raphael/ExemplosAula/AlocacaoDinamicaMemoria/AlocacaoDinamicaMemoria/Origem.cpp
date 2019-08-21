#include <iostream>

void main() {
	//alocação dinâmica de memória

	int * v = new int;
	//Alocação dinâmica de memória do C++
	int * v1 = new int[10];
	delete v1; //libera o espaço de memória alocado.
	//Aloca memória, mas não inicializa
	//int * v2 = (int*)malloc(10 * sizeof(int));
	//free(v2); //libera o espaço de memória alocado

	//Aloca memória e inicializa com zeros (mais lenta que o malloc)
	int * v2 = (int* )calloc(10, sizeof(int));
	
	//for (int i = 0; i < 10; i++) v2[i] = 0;
	*(v2+6) = 2;
	
	v2 = (int *)realloc(v2, 15 * sizeof(int));
	std::cout << v2[6] << std::endl;
	std::cout << v2[3] << std::endl;
	int vet[10];


	system("pause");

}