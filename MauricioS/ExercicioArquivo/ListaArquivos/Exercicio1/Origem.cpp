#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	ofstream arquivo("arquivo.dat", ios::binary | ios::out);

	if (arquivo.is_open())
	{
		cout << "Aquivo abriu com sucesso" << endl;
		for (int i = 0; i < 10; i++)
			arquivo.write(reinterpret_cast<char *> (&i), sizeof(int));
	}
	else
	{
		cout << "Aquivo nao abriu" << endl;
		exit(1);
	}

	arquivo.close();

	ifstream arquivoRead;
	arquivoRead.open("arquivo.dat", ios::binary);

	int counter = 0;
	while (!arquivoRead.eof() && counter < 9)
	{
		arquivoRead.read(reinterpret_cast<char *> (&counter), sizeof(int));
		cout << counter << endl;
	}

	system("pause");
}