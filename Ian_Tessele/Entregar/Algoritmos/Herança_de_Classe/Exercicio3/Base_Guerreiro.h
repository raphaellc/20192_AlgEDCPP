#include <iostream>
#include <string>
#pragma once
using namespace std;

enum SubClass {
	Barburo,
	cavalero
};

enum TypeArm {
	machado, espada_curta,
	espada_longa, martelo,
	marreta, duas_espadas,
	dois_machados
};

class Base_Guerreiro
{
public:
	Base_Guerreiro();
	~Base_Guerreiro();

	string nome;

	int life;
	int stamina;

	bool StartWalk;

	SubClass Classe;

	TypeArm Arma;
	int dano;

	virtual void SetStatus() = 0;

	virtual void Atacar();
	virtual void Defender();
	virtual void Healing();
	virtual void walk();
	virtual void Idle();

};

