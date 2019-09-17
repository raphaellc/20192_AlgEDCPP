#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ofstream arquivo("Dados.bin", ios::binary | ios::out);
	arquivo.open("Dados.bin", ios::binary | ios::out);

	if (!arquivo.is_open()) {
		cout << "Erro ao abrir o arquivo." << endl;
	}
	else {
		for (int i = 0; i < 10; i++) {
			arquivo.write(reinterpret_cast<const char*>(&i), sizeof(int));
			cout << i << endl;
		}
	}

	arquivo.close();

	system("pause");
	return 0;
}