#include <iostream>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "ptb");

	int *pVetor, valor = 0, contador = 1, auxContador = 0;

	pVetor = (int*)malloc(5 * sizeof(int));

	printf("Escreva 5 números inteiros e positivos. \n");

	do
	{
		printf("%d", contador);
		printf("º VALOR: ");
		scanf_s("%d", &valor);
		pVetor[contador - 1] = valor;
		contador++;

	} while (contador <= 5);

	do
	{
		printf("Você preencheu 5 posições. Digite a quantidade de posições a serem incrementadas: ");
		scanf_s("%d", &auxContador);

		if (auxContador > 0) { printf("Escreva mais %d", auxContador); printf(" valores. \n"); }
		if (auxContador < 0) printf("Valor inválido! Tente novamente. \n");

	} while (auxContador < 0);
	
	auxContador += contador;

	while (contador < auxContador)
	{
		printf("%d", contador);
		printf("º VALOR: ");
		scanf_s("%d", &valor);
		pVetor = (int*)realloc(pVetor, contador * sizeof(int));
		pVetor[contador - 1] = valor;
		contador++;
	}

	printf("\n");
	for (int i = 0; i < contador - 1; i++)
	{
		printf(" | %d", pVetor[i]);

		if (i == contador - 2)printf(" |\n");
	}
	printf("\n");

	free(pVetor);

	system("pause");
	return 0;
}