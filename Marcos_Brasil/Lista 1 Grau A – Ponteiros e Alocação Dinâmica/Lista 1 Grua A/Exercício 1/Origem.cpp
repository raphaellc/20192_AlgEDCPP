#include <iostream>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "ptb");

	int *pVetor, valor = 0, contador = 1;

	pVetor = (int*)malloc(contador * sizeof(int));

	printf("Escreva números inteiros e positivos. Digite qualquer valor negativo para sair.\n");

	do
	{
		printf("VALOR: ");
		scanf_s("%d", &valor);
		if (valor >= 0)
		{
			pVetor = (int*)realloc(pVetor, contador * sizeof(int));

			pVetor[contador - 1] = valor;
			contador++;
		}

	} while (valor > -1);

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