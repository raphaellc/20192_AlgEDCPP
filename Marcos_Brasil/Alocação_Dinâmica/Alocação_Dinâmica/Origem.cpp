#include "AlocDim.h"

using namespace std;

enum Menu {nada, setValor, clearValor, setVetor, deleteVetor, sair};

int main() {

	setlocale(LC_ALL, "ptb");

	Menu opcao = nada;

	AlocDim *vetor = new AlocDim;

	int entrada1 = 0, entrada2 = 0;
	bool vetorAlocado = true;

	do
	{
		cout << "||============= MENU =============||\n"
			<< "|| 1 - Setar valor da posi��o     ||\n"
			<< "|| 2 - Limpar valor da posi��o    ||\n"
			<< "|| 3 - Setar tamanho do vetor     ||\n"
			<< "|| 4 - Deletar posi��o do vetor   ||\n"
			<< "|| 5 - Sair                       ||\n"
			<< "||================================||\n"
			<< "\n\n";

		if(vetorAlocado)vetor->desenhar();

		cout << endl << "Digite a op��o desejada!\n OP��O: ";
		cin >> entrada1;

		opcao = (Menu)entrada1;
		switch (opcao)
		{
		case setValor:
			cout << endl << "Digite o n�mero da posi��o.\n OP��O: ";
			cin >> entrada1;
			cout << endl << "Digite o valor desejado a ser aplicado.\n OP��O: ";
			cin >> entrada2;
			vetor->set_valor(entrada1, entrada2);
			break;
		case clearValor:
			cout << endl << "Digite o n�mero da posi��o que voc� deseja limpar.\n OP��O: ";
			cin >> entrada1;
			vetor->clear_valor(entrada1);
			break;
		case setVetor:
			cout << endl << "Digite o novo tamanho do vetor.\n OP��O: ";
			cin >> entrada1;
			if (vetorAlocado)vetor->realocar_vetor(entrada1);
			else { vetor->set_vetor(entrada1); vetorAlocado = true; }
			break;
		case deleteVetor:
			delete vetor;
			vetorAlocado = false;
			break;
		case sair:
			system("pause");
			break;
		default:
			cout << "Op��o inv�lida!\n";
			break;
		}
		system("pause");
		system("cls");
	} while (opcao != sair);
	
	return 0;
}