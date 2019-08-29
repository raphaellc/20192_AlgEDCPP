#include <iostream>
#include "VetorDinamico.h"

using namespace std;

int main()
{
	VetorDinamico *vetorDin = new VetorDinamico();
	int sizeTemp;
#pragma region INICIO QUESTOES 1/2/3
	//TAMANHO INICIAL DO ARRAY
	cout << "coloque aqui o tamanho do array (max = 10 / min = 1): ";
	cin >> sizeTemp;
	vetorDin->SetSize(sizeTemp);
	vetorDin->CreateVetor();
	cout << "-----------------------------------------" << endl;

	//SET DE VALORES PARA PRRENCHIMENTO DO ARRAY
	for (int i = 0; i < vetorDin->GetSize(); i++)
	{
		int _valueTemp;
		cout << "preencha o valor que ira na posicao " << i + 1 << " de " << vetorDin->GetSize() << " :";
		cin >> _valueTemp;
		cout << endl;

		vetorDin->SetVetor(i, _valueTemp);
	}

	//PRINT DOS VALORES DO ARRAY INICIAL
	cout << "----------------------------------------" << endl;
	cout << "Posicoes do vetor: ";
	for (int i = 0; i < vetorDin->GetSize(); i++)
	{
		cout << vetorDin->GetvalueVetor(i);
		cout << " / ";
	}
	cout << endl;
	cout << "----------------------------------------" << endl;
#pragma endregion
	
#pragma region REALOCA ARRAY QUESTAO 3
	//ESPAÇO PARA REALOCAR VETOR
	cout << "Insira quantas posições deseja adicionar ao array: ";
	cin >> sizeTemp;
	vetorDin->ReallocVetor(sizeTemp);
	cout << "-----------------------------------------" << endl;

	//SET DE VALORES PARA PRRENCHIMENTO DO ARRAY
	for (int i = vetorDin->GetSize() - sizeTemp; i < vetorDin->GetSize(); i++)
	{
		int _valueTemp;
		cout << "preencha o valor que ira na posicao " << i + 1 << " de " << vetorDin->GetSize() << " :";
		cin >> _valueTemp;
		cout << endl;

		vetorDin->SetVetor(i, _valueTemp);
	}

	//PRINT DOS VALORES COM AS NOVAS POSICOES DO ARRAY
	cout << "----------------------------------------" << endl;
	cout << "Posicoes do vetor com as novas posicoes: ";
	for (int i = 0; i < vetorDin->GetSize(); i++)
	{
		cout << vetorDin->GetvalueVetor(i);
		cout << " / ";
	}
	cout << endl;
	cout << "----------------------------------------" << endl;
#pragma endregion

#pragma region FINAL QUESTAO 1/2/3
	//DESALOCA O VETOR DA MEMORIA
	vetorDin->DesalocarVetor();

	//CONFIRMAÇAO DE QUE O VETOR FOI DESALOCADO
	cout << "valor posicao 1 apos ser desalocado: " << vetorDin->GetvalueVetor(0) << endl;

#pragma endregion	

	system("pause");
	return 0;
}