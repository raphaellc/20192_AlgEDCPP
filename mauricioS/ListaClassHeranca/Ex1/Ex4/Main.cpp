#include <iostream>
#include "Clerigo.h"

using namespace std;

int main()
{
	Clerigo *clerigo1 = new Clerigo();
	Clerigo *clerigo2 = new Clerigo(1,2,3,4,5);

	cout << "Clerigo ataca com: " << clerigo1->Atacar() << endl;
	cout << "Clerigo defende com: " << clerigo1->Defender() << endl;
	cout << "Clerigo persuadi com: " << clerigo1->Persuadir() << endl;
	cout << "Clerigo caminha com: " << clerigo1->Caminhar() << endl;

	cout << "Clerigo defende com: " << clerigo1->Personagem::Atacar() << endl;

	cout << "-----------------------------" << endl;

	cout << "Clerigo ataca com: " << clerigo2->Atacar() << endl;
	cout << "Clerigo defende com: " << clerigo2->Defender() << endl;
	cout << "Clerigo persuadi com: " << clerigo2->Persuadir() << endl;
	cout << "Clerigo caminha com: " << clerigo2->Caminhar() << endl;
	
	system("pause");
	return 0;
}