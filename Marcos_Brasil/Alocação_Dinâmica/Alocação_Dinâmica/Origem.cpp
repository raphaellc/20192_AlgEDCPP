
#include "AlocDim.h"

using namespace std;

enum Menu { setValor = 1, clearValor, setVetor, deleteVetor, sair };

int main() {

	setlocale(LC_ALL, "ptb");

	Menu opcao;

	AlocDim *vetor = new AlocDim;

	int valor = 0;

	while (opcao != sair);
	{
		cout << "||============= MENU =============||\n"
			<< "|| 1 - Setar valor da posi��o     ||\n"
			<< "|| 2 - Limpar valor da posi��o    ||\n"
			<< "|| 3 - Setar tamanho do vetor     ||\n"
			<< "|| 4 - Deletar posi��o do vetor   ||\n"
			<< "|| 5 - Sair                       ||\n"
			<< "||================================||\n"
			<< endl << "Digite a op��o desejada!\n OP��O: " << endl;
		cin >> valor;
		
		opcao = (Menu)valor;
		switch (opcao)
		{
		case setValor:
			break;
		case clearValor:
			break;
		case setVetor:
			break;
		case deleteVetor:
			break;
		case sair:
			//fecha o programa
			system("pause");
			system("cls");
			break;
		default:
			cout << "Op��o inv�lida!";
			system("cls");
			break;
		}

	}
	return 0;
}