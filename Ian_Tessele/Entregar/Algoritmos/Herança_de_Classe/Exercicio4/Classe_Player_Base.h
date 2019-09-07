#include <iostream>
#include <string>
using namespace std;
#pragma once

class Classe_Player_Base
{


public:
	Classe_Player_Base();
	~Classe_Player_Base();

	enum  Armas
	{
		cajado,
		livro,
		clava,
		caveira_magica,
		bardo,
		machado,
		martelo,
		adaga
	};

protected:

	Armas tipo_de_arma;
	string nome;
	int vida;
	int dano;

	virtual void Sets(string _nome, Armas _tipo_de_arma, int _vida, int _dano);
	virtual void Atacar();
	virtual void Defender();
	virtual void Curar(int _valor_da_cura);
};

