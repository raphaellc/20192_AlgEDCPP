#include <iostream>
#include "Guerreiro.h"
using namespace std;
int main() {

	Guerreiro * guerreiro = new Guerreiro;

	guerreiro->atacar();
	guerreiro->defender();
	guerreiro->correr();
	guerreiro->dancar();
	guerreiro->provocar();

	system("pause");
	return 0;
}