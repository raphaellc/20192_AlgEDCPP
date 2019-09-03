#include <iostream>
#include <time.h> 
#include "Guerreiro.h"

using namespace std;

int main()
{
	Guerreiro *novoGuerreiro = new Guerreiro();

	srand(time(NULL));
	int sorte = rand() % 10 + 5;

	cout << "Um guerreiro foi criado." << endl;
	cout << "Sua sorte na criacao foi de: " << sorte << endl;
	cout << "-------------------" << endl;

	novoGuerreiro->CriarGuerreiro(sorte);

	cout << "Atributos" << endl;
	cout << "Forca: " << novoGuerreiro->GetForca() << endl;
	cout << "Destreza: " << novoGuerreiro->GetDestreza() << endl;
	cout << "Inteligencia: " << novoGuerreiro->GetInteligencia() << endl;
	cout << "Velocidade: " << novoGuerreiro->GetVelocidade() << endl;
	cout << "Carisma: " << novoGuerreiro->GetCarisma() << endl;

	cout << "-------------------" << endl;

	cout << "Dados de acoes" << endl;
	cout << "Atacar:" << endl;
	novoGuerreiro->Atacar();
	cout << "Caminha:" << endl;
	novoGuerreiro->Caminhar();
	cout << "Defende" << endl;
	novoGuerreiro->Defender();
	cout << "Persuadir" << endl;
	novoGuerreiro->Persuadir();

	system("pause");
	return 0;
}