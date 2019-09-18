#pragma once
#include <iostream>
#include "fstream"

using namespace std;

class Arquivo
{
public:
	Arquivo();
	~Arquivo();	

	void Registrar();
	void Logar();
	void Autenticar();
};

ifstream Login("Data_Us.dat", ios::binary | ios::in);
ofstream Register("Data_Us.dat", ios::binary | ios::out);

Arquivo::Arquivo()
{
}
Arquivo::~Arquivo()
{
}

void Arquivo::Registrar()
{
	//char* _Login;
	//char* _Senha;

	//cout << "Qual seu Login: "; cin >> _Login; cout << endl;

	//cout << "Qual sua Senha: "; cin >> _Senha; cout << endl;

	Register.open("Data_Us.dat");

	//Register.write(reinterpret_cast<const char*>(&_Login), sizeof(char));
	//Register.write(reinterpret_cast<const char*>(&_Senha), sizeof(char));

	Register.close();

}

void Arquivo::Logar()
{
}

void Arquivo::Autenticar()
{
}


