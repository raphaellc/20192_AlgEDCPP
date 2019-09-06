#pragma once
#include <iostream>
using namespace std;
class Personagem
{
public:
	Personagem();
	~Personagem();

	void andar();
	void pular();

	int vida, velocidade;
};

