#include <iostream>
int main() {
	int *vetor, nPosicoes;
	printf("Informe a quantidade de posicoes do vetor: ");
	scanf_s("%d", &nPosicoes);
	vetor = (int*)calloc(nPosicoes, sizeof(int));
	for (int i = 0; i < nPosicoes; i++) {
		printf("Digite um valor para a posicao %d do vetor: ", i + 1);
		scanf_s("%d", &vetor[i]);
	}
	printf("Valores do vetor dinamico: ");
	for (int i = 0; i < nPosicoes; i++) {
		printf("%d\n", vetor[i]);
	}
	free(vetor);
	system("pause");
	return 0;
}