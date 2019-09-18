#include <iostream>
#include "fstream"

using namespace std;

int main() {

	setlocale(LC_ALL, "pt");

	ofstream DebugLog("DebugLog.txt",ios::out | ios::app);


	//Grava os dados
	ofstream ArquivoEscrita("Dados.dat", ios::binary | ios::out);

	if (!ArquivoEscrita.is_open()) {
		cout << "N�o Abrio" << endl;
		DebugLog << "N�o Abrio";
	}
	else
	{


		for (int i = 0; i < 10; i++)
		{

			ArquivoEscrita.write(reinterpret_cast<const char*>(&i), sizeof(int));

		}
	}
	ArquivoEscrita.close();


	//le os dados
	ifstream ArquivoLeitura("Dados.dat", ios::binary | ios::in);
	if (!ArquivoLeitura.is_open()) {
		cout << "N�o Abrio" << endl;
	}
	else
	{
		int Valor;

		ArquivoLeitura.get();

		while (!ArquivoLeitura.eof())
		{
			ArquivoLeitura.unget();

			ArquivoLeitura.read(reinterpret_cast<char*>(&Valor), sizeof(int));
			cout << "Valor: " << Valor << endl;

			ArquivoLeitura.get();
		}	
	}


	ArquivoLeitura.close();

	system("pause");
	return 0;
}


/*
ios::app
Grava a sa�da no fim do arquivo sem apagar o conte�do existente. Ou seja,
posiciona o ponteiro de leitura/escrita ap�s o �ltimo registro.

ios::in
Abre para entrada e avan�a at� o final do arquivo.

ios::out
Abre para sa�da.

ios::trunc
Elimina o conte�do do arquivo caso ele exista.

ios::binary
Abre um arquivo para I/O bin�rio.



Incluir os cabe�alhos <iostream> e <fstream>

ifstream:
Cria um arquivo para somente ler dados do arquivo.
N�o � poss�vel escrever/modificar dados no arquivo.

ofstream:
Cria um arquivo para somente gravar dados no arquivo.
N�o � poss�vel executar leituras no arquivo.

fstream:
Criar um arquivo que permite tanto leituras e escritas.
*/