#include "ladino.h"
ladino::ladino()
{
}

ladino::~ladino()
{
}

void ladino::inicializar()
{

	Sets("Ian", cajado, 100, 10);
	Atacar();
	Defender();
	Curar(15);
}