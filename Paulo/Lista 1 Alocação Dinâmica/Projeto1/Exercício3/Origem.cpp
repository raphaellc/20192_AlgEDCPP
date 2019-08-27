#include <iostream>
int main() {
	int *vetor, nPosicoes, aux;
	printf("Digite a quantidade de posicoes do vetor: ");
	scanf_s("%d", &nPosicoes);
	vetor = (int*)calloc(nPosicoes, sizeof(int));
	for (int i = 0; i < nPosicoes; i++) {
		printf("Digite um valor para a posicao %d do vetor: ", i + 1);
		scanf_s("%d", &vetor[i]);
	}
	printf("Valores do vetor dinamico:");
	for (int i = 0; i < nPosicoes; i++) {
		printf("%d\n", vetor[i]);
	}
	printf("Digite o novo tamanho do vetor(deve ser maior do que o anterior): ");
	scanf_s("%d", &aux);
	if (nPosicoes >= aux) {
		printf("mds velho era pra expandir o tamanho do vetor\ncomo tu consegue errar isso\nreportado\n");
	}
	else {
		vetor = (int*)realloc(vetor, aux * sizeof(int));
		for (int i = nPosicoes; i < aux; i++) {
			printf("Digite um valor para a posicao %d do vetor: ", i + 1);
			scanf_s("%d", &vetor[i]);
		}
		printf("Valores do vetor dinamico:");
		for (int i = 0; i < aux; i++) {
			printf("%d\n", vetor[i]);
		}
	}
	system("pause");
	return 0;
}