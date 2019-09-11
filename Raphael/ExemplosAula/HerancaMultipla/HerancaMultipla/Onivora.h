#pragma once
#include "Carnivora.h"
#include "Herbivora.h"
class Onivora :
	public Carnivora, 
	public Herbivora
{
public:
	Onivora();
	~Onivora();
	virtual void comer() override;
	virtual void DNA() override;
	virtual void novoMetodo() override;
};

