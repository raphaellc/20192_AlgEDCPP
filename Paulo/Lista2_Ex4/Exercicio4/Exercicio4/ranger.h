#pragma once
#include "Personagem.h"
class Ranger :
	public Personagem
{
public:
	Ranger();
	~Ranger();

	void atirarFlechas();

	int qtdFlechas;
};

