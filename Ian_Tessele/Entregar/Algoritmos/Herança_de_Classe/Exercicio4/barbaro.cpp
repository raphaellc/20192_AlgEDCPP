#include "barbaro.h"
barbaro::barbaro()
{
}

barbaro::~barbaro()
{
}

void barbaro::inicializar()
{

	Sets("Ian", cajado, 100, 10);
	Atacar();
	Defender();
	Curar(15);
}