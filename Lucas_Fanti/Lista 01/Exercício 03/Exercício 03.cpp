#include <iostream>

using namespace std;

int main()
{
	int * vetor = (int*)calloc(3, sizeof(int));
	int i, qntRealoc;
	for (i = 0; i < 3; i++)
	{
		cout << "Escreva um valor para adicionar ao vetor: " << endl;
		cin >> vetor[i];
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << vetor[i] << endl;
	}
	cout << endl;
	if (vetor[2])
	{
		cout << "Quantos novos espacos voce quer abrir? " << endl;
		cin >> qntRealoc;

		vetor = (int *)realloc(vetor, qntRealoc * sizeof(int));

		for (int i = 0; i < qntRealoc; i++)
		{
			cout << "Escreva um valor para adicionar ao vetor: " << endl;
			cin >> vetor[i];
		}
	}
	cout << endl;
	for (int i = 0; i < qntRealoc; i++)
	{
		cout << vetor[i] << endl;
	}

	free(vetor);

	system("pause");
	return 0;
}