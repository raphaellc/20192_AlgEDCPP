#pragma once
#include "Personagem.h"

class Clerigo : public Personagem
{
public:
	Clerigo();
	Clerigo(int p_forca, int p_destreza, int p_inteligencia, int p_velocidade, int p_carisma);
	~Clerigo();

	int Atacar() override;
	int Caminhar() override;
	int Defender() override;
	int Persuadir() override;
};

