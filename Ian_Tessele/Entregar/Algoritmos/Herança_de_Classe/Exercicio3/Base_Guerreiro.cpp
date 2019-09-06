#include "Base_Guerreiro.h"



Base_Guerreiro::Base_Guerreiro()
{
}


Base_Guerreiro::~Base_Guerreiro()
{
}

void Base_Guerreiro::Atacar(int _dano, TypeArm _arma, bool _walk)
{

	std::cout << "Preparou /n";
	std::cout << "se moveu /n";
	std::cout << "atacou /n";
	std::cout << "Dano dado foi de: " << _dano << " /n";

	Idle(_walk);

}

void Base_Guerreiro::Defender(int _dano, TypeArm _arma, bool _walk)
{
}

void Base_Guerreiro::Healing(int value_Up, int _life, bool _walk)
{

	std::cout << "Pegando Pocao /n";
	std::cout << "pocao em uso /n";
	std::cout << "pocao usada /n";
	Idle(_walk);

}

void Base_Guerreiro::walk(bool _walk)
{
	_walk = true;
	std::cout << "Andando /n";
	while (_walk)
	{
		char Resposta;
		std::cout << "Parar? Y/N";
		cin >> Resposta;

		switch (Resposta)
		{
		case 'Y':
			Idle(_walk);
			break;
		case 'N':
			_walk = true;
			break;
		default:
			Idle(_walk);
			break;
		}
	}

}

void Base_Guerreiro::Idle(bool _walk)
{
	_walk = false;
	std::cout << "Parou /n";
	std::cout << "Na espera /n";
}
