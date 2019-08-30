#include <iostream>
using namespace std;
int main() {
	int *vetor, nPosicoes;
	cout << "Informe a quantidade de posicoes do vetor: ";
	cin >> nPosicoes;
	vetor = new int[nPosicoes];
	for (int i = 0; i < nPosicoes; i++) {
		cout << "Digite um valor para a posicao " << i + 1 << " do vetor: ";
		cin >> vetor[i];
	}
	cout << "Valores do vetor dinamico: ";
	for (int i = 0; i < nPosicoes; i++) {
		cout << vetor[i] << endl;
	}
	delete[]vetor;
	system("pause");
	return 0;
}