//Crie uma fun��o recursiva para determinar a soma dos
//elementos de um vetor de inteiros.Al�m do vetor esta fun��o
//usa o tamanho do vetor.Especifique a condi��o de parada e a
//defini��o de recursividade.
#include <iostream>
int somaInteiros(int* v, int tam_vet) {
	//condicao de Parada
	if (tam_vet == 0) {
		return 0;
	}
	return v[tam_vet - 1] + somaInteiros(v, tam_vet - 1);
}
//somaInteiros(v,3)=>v[2]+somaInteiros(v,2)

//somaInteiros(v,3)=>v[2]+(v[1]+somaInteiros(v,1))

//somaInteiros(v,3)=>v[2]+(v[1]+(v[0]+somaInteiros(v,0)))

//somaInteiros(v,3)=>v[2]+(v[1]+(v[0]+0))

int fatorial(int N) {
	return 0;
}

int fib(int n) {
	int f;
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	if (n > 1) {
		return fib(n - 1) + fib(n - 2);
	}
}
int main() {
	int vet[3] = {-1,-1,-1};
	int resultado = somaInteiros(vet, 3);
	//std::cout << resultado << std::endl;
	
	resultado = fib(7);
	for (int i = 0; i < 100; i++)
		std::cout << fib(i) << " " ;
	std::cout << std::endl;
	//for(int i; i < )
	system("pause");
	return 0;
}