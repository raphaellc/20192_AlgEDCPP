#pragma once
#include "Personagem.h"
class Ladino :
	public Personagem
{
public:
	Ladino();
	~Ladino();

	void ataqueLeve();

	int forca;
};

