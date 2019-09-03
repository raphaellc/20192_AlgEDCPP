#include <iostream>

using namespace std;

int main()
{
	int * vet = (int*)calloc(3, sizeof(int));
	int i, qntRealoc;
	for (i = 0; i < 3; i++)
	{
		cout << "Ecreva numeros para adicionar ao vetor: " << endl;
		cin >> vet[i];
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << vet[i] << endl;
	}
	cout << endl;
	if (vet[2])
	{
		cout << "quantos novas posicoes voce quer? " << endl;
		cin >> qntRealoc;

		vet = (int *)realloc(vet, qntRealoc * sizeof(int));

		for (int i = 0; i < qntRealoc; i++)
		{
			cout << "Escreva um valor para adicionar ao vetor: " << endl;
			cin >> vet[i];
		}
	}
	cout << endl;
	for (int i = 0; i < qntRealoc; i++)
	{
		cout << vet[i] << endl;
	}
    free(vet);

	system("pause");
	return 0;
}