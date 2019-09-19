#include <iostream>
#include <fstream>
using namespace std;
int * carregaInteiros() {
	int *vetorInt = new int[10];
	ifstream if_arquivo;
	if_arquivo.open("Dados.bin", ios::binary);
	if (!if_arquivo.is_open()) {
		return 0;
	}
	int j = 0;
	while (!if_arquivo.eof() && j < 10) {
			if_arquivo.read(reinterpret_cast<char*>(&vetorInt[j]), sizeof(int));
			//cout << vetorInt[j] << " ";
			j++;

	}
	return vetorInt;
}



int main() {
	int * vetI;
	ofstream arquivo;// ("Dados.bin", ios::binary | ios::out);
	arquivo.open("Dados.bin", ios::binary);
	if (!arquivo.is_open()) {
		cout << "Erro ao abrir o arquivo." << endl;
		exit(1);
	}
	for (int i = 0; i < 10; i++) {
		arquivo.write(reinterpret_cast<char*>(&i), sizeof(int));
		//cout << i << endl;
	}
	arquivo.close();

	vetI = carregaInteiros();
	for (int i = 0; i < 10; i++) {
		cout << vetI[i] << endl;
	}

	system("pause");
	return 0;
}