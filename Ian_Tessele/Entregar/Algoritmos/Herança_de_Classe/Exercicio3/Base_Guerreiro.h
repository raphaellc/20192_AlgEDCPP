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

protected:

	string nome;

	int life;
	int stamina;
	
	bool StartWalk;

	SubClass Classe;

	TypeArm Arma;
	int dano;

	void virtual SetStatus(string _nome , int _life, int _stamina, SubClass _classe) = 0;

	void virtual Atacar(int _dano, TypeArm _arma, bool _walk);
	void virtual Defender(int _dano, TypeArm _arma, bool _walk);
	void virtual Healing(int value_Up,int _life, bool _walk);
	void virtual walk(bool _walk);
	void virtual Idle(bool _walk);
};

