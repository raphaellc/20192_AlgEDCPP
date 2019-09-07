#include "Clerigo.h"

Clerigo::Clerigo()
{
}

Clerigo::~Clerigo()
{
}

void Clerigo::inicializar()
{

	Sets("Ian", cajado,100,10);
	Atacar();
	Defender();
	Curar(15);
}
