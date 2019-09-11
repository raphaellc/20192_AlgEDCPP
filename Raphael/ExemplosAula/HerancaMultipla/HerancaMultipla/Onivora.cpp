#include "Onivora.h"
#include <iostream>


Onivora::Onivora()
{
}


Onivora::~Onivora()
{
}

void Onivora::comer()
{
	Herbivora::comer();
	Carnivora::comer();
	std::cout << "comendo" << std::endl;
}

void Onivora::DNA()
{
	//sobrescrevendo DNA
}

void Onivora::novoMetodo()
{
	std::cout << "NemTãoNovoAssim" << std::endl;
}
