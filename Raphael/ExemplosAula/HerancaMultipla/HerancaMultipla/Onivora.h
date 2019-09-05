#pragma once
#include "Carnivora.h"
#include "Herbivora.h"
class Onivora :virtual public Carnivora, virtual public Herbivora
{
public:
	Onivora();
	~Onivora();
};

