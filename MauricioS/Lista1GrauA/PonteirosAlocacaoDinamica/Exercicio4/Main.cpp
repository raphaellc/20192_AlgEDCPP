#include <iostream>
#include "ArrayInt.h"

using namespace std;

int main()
{
	ArrayInt *vetorDin = new ArrayInt;

	vetorDin->Adicionar(1);
	vetorDin->Adicionar(2);
	vetorDin->Adicionar(3);
	cout << "valores iniciais" << endl;
	vetorDin->MostrarValores();

	vetorDin->AdicionarFinal(9);
	cout << "adicionado valor na ultima posicao do array" << endl;
	vetorDin->MostrarValores();

	vetorDin->RemoverUltimoValor();
	cout << "removido ultima posicao valida do array" << endl;
	vetorDin->MostrarValores();
	
	vetorDin->Adicionar(4);
	vetorDin->Adicionar(5);
	cout << "adicionado ate chegar no fim do array, realoca" << endl;
	vetorDin->MostrarValores();

	cout << "valor da posicao 3: " << vetorDin->ObterValorEm(2) << endl;

	cout << "ultimo valor do array: " << vetorDin->ObtervalorFinal() << endl;

	vetorDin->Adicionar(6);
	vetorDin->AdicionarFinal(99);
	cout << "adicionado valor 6 na sequencia e 99 na ultima posicao" << endl;
	vetorDin->MostrarValores();

	vetorDin->RemoverUltimoValor();
	vetorDin->RemoverUltimoValor();
	vetorDin->RemoverUltimoValor();
	vetorDin->RemoverUltimoValor();
	cout << "removido 4 posicoes do array" << endl;
	vetorDin->MostrarValores();

	system("pause");
	return 0;
}