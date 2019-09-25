#pragma once
#include <iostream>
class Pessoa
{
public:
	Pessoa();
	~Pessoa();
	Pessoa * obtemProxima();
	void defineProximaPessoa(Pessoa * pr);
	void defineNome(std::string nm);
	std::string obtemNome();
	
private:
	int idade, id;
	std::string nome;
	Pessoa * proxima;
};

