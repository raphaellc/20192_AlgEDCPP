#include "Base_Guerreiro.h"



Base_Guerreiro::Base_Guerreiro()
{
}


Base_Guerreiro::~Base_Guerreiro()
{
}

void Base_Guerreiro::Atacar()
{

	std::cout << "Preparou \n";
	std::cout << "se moveu \n";
	std::cout << "atacou \n";
	std::cout << "Dano dado foi de: " << dano << " \n";

	Idle();

}

void Base_Guerreiro::Defender()
{
}

void Base_Guerreiro::Healing()
{

	std::cout << "Pegando Pocao \n";
	std::cout << "pocao em uso \n";
	std::cout << "pocao usada \n";
	Idle();

}

void Base_Guerreiro::walk()
{
	StartWalk = true;
	std::cout << "Andando \n";
	while (StartWalk)
	{
		char Resposta;
		std::cout << "Parar? Y/N: ";
		cin >> Resposta;

		switch (Resposta)
		{
		case 'Y':
			system("pause");
			break;
		case 'N':
			StartWalk = true;
			break;
		case 'y':
			system("pause");
			break;
		case 'n':
			StartWalk = true;
			break;
		default:
			Idle();
			break;
		}
	}

}

void Base_Guerreiro::Idle()
{
	StartWalk = false;
	std::cout << "Parou \n";
	std::cout << "Na espera \n";
}
