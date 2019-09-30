#pragma once
#include <iostream>

class Pessoa
{
public:
	Pessoa();
	~Pessoa();
	void setNome(std::string p_nome);
	std::string getNome();

	void setGenero(std::string p_genero);
	std::string getGenero();

private:
	int id, idde;
	std::string nome, genero;
};

