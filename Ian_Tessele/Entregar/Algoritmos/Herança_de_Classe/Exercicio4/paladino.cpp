#include "paladino.h"
paladino::paladino()
{
}

paladino::~paladino()
{
}

void paladino::inicializar()
{

	Sets("Ian", cajado, 100, 10);
	Atacar();
	Defender();
	Curar(15);
}