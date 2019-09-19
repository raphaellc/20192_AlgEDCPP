#include <iostream>
#include <fstream>
#include "Item.h"

using namespace std;

void main()
{
	Item *item1 = new Item(1, 2);
	Item *item2 = new Item(3, 4);

	ofstream arquivo("arquivoTeste.dat", ios::binary | ios::out);

	if (arquivo.is_open())
	{
		arquivo.write(reinterpret_cast<char *> (&item1), sizeof(Item));
		arquivo.write(reinterpret_cast<char *> (&item2), sizeof(Item));
	}

	arquivo.close();

	ifstream arquivoRead;
	arquivoRead.open("arquivoTeste.dat", ios::binary);

	Item *tempItem;
	arquivoRead.read(reinterpret_cast<char *> (&tempItem), sizeof(Item));
	cout << tempItem->GetId() << endl;

	system("pause");
}