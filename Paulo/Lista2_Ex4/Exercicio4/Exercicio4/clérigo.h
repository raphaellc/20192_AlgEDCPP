#pragma once
#include "Personagem.h"
class Clérigo :
	public Personagem
{
public:
	Clérigo();
	~Clérigo();

	void magiaLeve();

	int mana;
};

