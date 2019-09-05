#include "Guerreiro.h"
#include <iostream>
using namespace std;


Guerreiro::Guerreiro(){
	vida = 12;
	energia = 14;
	armadura = 4;
	velocidade = 6;
	força = 7;
}


Guerreiro::~Guerreiro(){
}

void Guerreiro::atacar(){
	std::cout << "[Atacar]\tDESCENDO O CACETE NESSES PUTO\n" << std::endl;
}

void Guerreiro::defender(){
	std::cout << "[Defender]\tBATE MAIS QUE NAO TA DANDO DANO\n" << std::endl;
}

void Guerreiro::correr(){
	std::cout << "[Correr]\tdeu bosta vo fugir daqui KK\n" << std::endl;
}

void Guerreiro::dancar(){
	std::cout << "[Dancar]\tDancando no corpo dos noob\n" << std::endl;
}

void Guerreiro::provocar(){
	std::cout << "[Provocar]\tVEM SE TU E HOMI VEM QUERO VER\n" << std::endl;
}
