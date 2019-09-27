#pragma once
#include <iostream>
class Pessoa
{
public:
	Pessoa();
	~Pessoa();
	void defineNome(std::string nm);
	std::string obtemNome();
private:
	int idade, id;
	std::string nome;
	
};

