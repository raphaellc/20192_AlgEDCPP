#pragma once
#include "Personagem.h"
class Bardo :
	public Personagem
{
public:
	Bardo();
	~Bardo();

	void tocarTrompete();

	int mana;
};

