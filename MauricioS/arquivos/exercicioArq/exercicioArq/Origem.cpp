#include <iostream>
#include <fstream>
#include "Itens.h"
#include "Usuario.h"

using namespace std;

int main()
{
#pragma region Exercicio1

	cout << "exercicio numero 1: " << endl;
	ofstream arquivo;
	arquivo.open("dados.bin", ios::binary);

	for (int i = 0; i < 10; i++)
	{
		arquivo.write(reinterpret_cast<char *>(&i), sizeof(int));
	}
	arquivo.close();

	ifstream arquivoLeitura;
	arquivoLeitura.open("dados.bin");	
	int dados[10];

	for (int i = 0; i < 10; i++)
	{
		arquivoLeitura.read(reinterpret_cast<char *>(&dados[i]), sizeof(int));
	}
	arquivoLeitura.close();

	for (int i = 0; i < 10; i++)
	{
		cout << "valor numero " << i + 1 << ": " << dados[i] << endl;
	}

#pragma endregion

#pragma region Exercicio2

	cout << "exercicio numero 2: " << endl;

	Itens itens[10];

	for (int i = 0; i < 10; i++)
	{
		itens[i].setId(i);
		itens[i].setPeso((i + 1) * 10);
		if (i % 2)
			itens[i].setItem(POCAO);
		else if(i % 3)
			itens[i].setItem(ESPADA);
		else
			itens[i].setItem(ESCUDO);
	}

	ofstream arquivoEx2;
	arquivoEx2.open("inventario.bin", ios::binary);

	for (int i = 0; i < 10; i++)
	{
		arquivoEx2.write(reinterpret_cast<char *>(&itens[i]), sizeof(Itens));
	}
	arquivoEx2.close();

	ifstream arquivoLeituraEx2;
	arquivoLeituraEx2.open("inventario.bin");

	Itens itensTemp[10];
	for (int i = 0; i < 10; i++)
	{
		arquivoLeituraEx2.read(reinterpret_cast<char *>(&itensTemp[i]), sizeof(Itens));
	}
	arquivoLeituraEx2.close();

	for(int i = 0; i < 10; i++)
	{
		cout << "id: " << itensTemp[i].getId() << " / ";
		cout << "peso: " << itensTemp[i].getPeso() << " / ";
		cout << "item: " << itensTemp[i].getItem() << endl;
		cout << "------------------------" << endl;
	}

#pragma endregion

#pragma region Exercicio3
	cout << "exercicio numero 3: " << endl;

	//criacao de 3 usuarios estaticos
	Usuario usuarioAdd[3];

	usuarioAdd[0].setId(0);
	usuarioAdd[0].setLogin("fulano1");
	usuarioAdd[0].setSenha("10");
	usuarioAdd[1].setId(1);
	usuarioAdd[1].setLogin("fulano2");
	usuarioAdd[1].setSenha("20");
	usuarioAdd[2].setId(2);
	usuarioAdd[2].setLogin("fulano3");
	usuarioAdd[2].setSenha("30");

	//grava esses usuarios em um arquivo
	ofstream arqUsuarios;
	arqUsuarios.open("usuarios.bin", ios::binary);
	for (int i = 0; i < 3; i++)
	{
		arqUsuarios.write(reinterpret_cast<char *>(&usuarioAdd[i]), sizeof(Usuario));
	}
	arqUsuarios.close();

	//le os usuarios guardados no arquivo colocando eles em um array de usuarios local
	ifstream arqUsuariosLeitura;
	arqUsuariosLeitura.open("usuarios.bin");	
	Usuario usuarioTemp[3];
	for (int i = 0; i < 3; i++)
	{
		arqUsuariosLeitura.read(reinterpret_cast<char *>(&usuarioTemp[i]), sizeof(Usuario));
		cout << "id: " << usuarioTemp[i].getId() << "/"
			<< "login: " << usuarioTemp[i].getLogin() << "/"
			<< "senha: " << usuarioTemp[i].getSenha() << endl;
	}
	arqUsuariosLeitura.close();

	//atualiza o login do segundo usuario
	usuarioTemp[1].setLogin("fulano2 atualizado");

	//abre o arquivo usuario colocando a atualizacao dentro do arquivo
	arqUsuarios.open("usuarios.bin", ios::binary);
	for (int i = 0; i < 3; i++)
	{
		arqUsuarios.write(reinterpret_cast<char *>(&usuarioTemp[i]), sizeof(Usuario));
	}
	arqUsuarios.close();

	cout << "--------------" << endl;

	//abre o arquivo usuario novamente para fazer a comparacao
	arqUsuariosLeitura.open("usuarios.bin");
	Usuario usuarioTempAtualizado[3];
	for (int i = 0; i < 3; i++)
	{
		arqUsuariosLeitura.read(reinterpret_cast<char *>(&usuarioTempAtualizado[i]), sizeof(Usuario));
		cout << "id: " << usuarioTempAtualizado[i].getId() << "/"
			<< "login: " << usuarioTempAtualizado[i].getLogin() << "/"
			<< "senha: " << usuarioTempAtualizado[i].getSenha() << endl;
	}
	arqUsuariosLeitura.close();

#pragma endregion

	system("pause");
	return 0;
}