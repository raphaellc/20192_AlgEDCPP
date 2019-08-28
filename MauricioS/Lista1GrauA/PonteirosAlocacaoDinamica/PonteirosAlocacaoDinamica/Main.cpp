#include <iostream>
#include "VetorDinamico.h"

using namespace std;

int main()
{
	VetorDinamico *vetorDin = new VetorDinamico();
	int sizeTemp;
	
	cout << "coloque aqui o tamanho do array (max = 10 / min = 1): ";
	cin >> sizeTemp;
	vetorDin->SetSize(sizeTemp);

	vetorDin->CreateVetor();

	cout << "-----------------------------------------" << endl;


	for (int i = 0; i < vetorDin->GetSize(); i++)
	{
		int _valueTemp;
		cout << "preencha o valor que ira na posicao " << i + 1 << " de " << vetorDin->GetSize() << " :";
		cin >> _valueTemp;
		cout << endl;

		vetorDin->SetVetor(i, _valueTemp);
	}

	cout << "----------------------------------------" << endl;
	cout << "Posicoes do vetor: ";

	for (int i = 0; i < vetorDin->GetSize(); i++)
	{
		cout << vetorDin->GetvalueVetor(i);
		cout << " / ";
	}

	cout << endl;
	cout << "----------------------------------------" << endl;
	cout << "----------------------------------------" << endl;

	vetorDin->DesalocarVetor();

	cout << "valor posicao 1 apos ser desalocado: " << vetorDin->GetvalueVetor(0) << endl;

	system("pause");
	return 0;
}