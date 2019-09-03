#include <iostream>

using namespace std;

int main()
{
	int * vet = (int*)calloc(5, sizeof(int));

	for (int i = 0; i < 5; i++)
	{
	    cout << "digite um numero para adicionar ao vetor: " << endl;
	    cin >> vet[i];
	}
    cout << endl;
    for (int i = 0; i < 5; i++)
	{
		cout << vet[i] << endl;
	}
    free(vet);

	system("pause");
	return 0;
}