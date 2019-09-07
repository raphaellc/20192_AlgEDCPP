#include "ranger.h"
ranger::ranger()
{
}

ranger::~ranger()
{
}

void ranger::inicializar()
{

	Sets("Ian", cajado, 100, 10);
	Atacar();
	Defender();
	Curar(15);
}