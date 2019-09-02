#include <iostream>

using namespace std;

int main()
{
	int * vetor = (int*)calloc(5, sizeof(int));

	for (int i = 0; i < 5; i++)
	{
		cout << "Escreva um valor para adicionar ao vetor: " << endl;
		cin >> vetor[i];
	}
	
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << vetor[i] << endl;
	}

	free(vetor);

	system("pause");
	return 0;
}