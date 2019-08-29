#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "ptb");

	int *pVetor, valor = 0, contador = 1;

	pVetor = new int;

	cout << "Escreva números inteiros e positivos. Digite qualquer valor negativo para sair." << endl;

	do
	{
		cout << "VALOR: ";
		cin >> valor;
		if (valor >= 0)
		{
			pVetor = (int*)realloc(pVetor, contador * sizeof(int)); //única forma de realocar?

			pVetor[contador - 1] = valor;
			contador++;
		}

	} while (valor > -1);

	for (int i = 0; i < contador - 1; i++)
	{
		cout << " | " << pVetor[i];

		if (i == contador - 2)cout << " | " << endl;
	}
	cout << endl;

	delete pVetor;

	system("pause");
	return 0;
}