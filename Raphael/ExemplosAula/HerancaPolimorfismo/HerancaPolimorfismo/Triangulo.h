#pragma once
#include "Forma.h"
class Triangulo :
	public Forma
{
public:
	Triangulo();
	~Triangulo();
	void calculaArea() override;
};

