#include <iostream>
#include "fstream"

using namespace std;

int main() {

	setlocale(LC_ALL, "pt");

	ofstream DebugLog("DebugLog.txt",ios::out | ios::app);


	//Grava os dados
	ofstream ArquivoEscrita("Dados.dat", ios::binary | ios::out);

	if (!ArquivoEscrita.is_open()) {
		cout << "Não Abrio" << endl;
		DebugLog << "Não Abrio";
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
		cout << "Não Abrio" << endl;
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
Grava a saída no fim do arquivo sem apagar o conteúdo existente. Ou seja,
posiciona o ponteiro de leitura/escrita após o último registro.

ios::in
Abre para entrada e avança até o final do arquivo.

ios::out
Abre para saída.

ios::trunc
Elimina o conteúdo do arquivo caso ele exista.

ios::binary
Abre um arquivo para I/O binário.



Incluir os cabeçalhos <iostream> e <fstream>

ifstream:
Cria um arquivo para somente ler dados do arquivo.
Não é possível escrever/modificar dados no arquivo.

ofstream:
Cria um arquivo para somente gravar dados no arquivo.
Não é possível executar leituras no arquivo.

fstream:
Criar um arquivo que permite tanto leituras e escritas.
*/