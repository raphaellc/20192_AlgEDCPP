#include <iostream>

using namespace std;

int main()
{
	int * vet = new int[5];

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
    delete vet;

	system("pause");
	return 0;
}