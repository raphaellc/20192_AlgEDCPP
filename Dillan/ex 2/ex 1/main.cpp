#include <iostream>

using namespace std;

int main() {
	int qtd, num;

	cout << "Digite quantos numeros deseja armazenar" << endl;
	cin >> qtd;

	int *vetor = new int[qtd];

	for (int i = 0; i < qtd; i++)
	{
		cout << "informe um valor: " << endl;
		cin >> num;
		vetor[i] = num;
	}

	for (int i = 0; i < qtd; i++)
	{
		cout << vetor[i] << endl;
	}
	delete vetor;


	system("pause");
	return 0;
}