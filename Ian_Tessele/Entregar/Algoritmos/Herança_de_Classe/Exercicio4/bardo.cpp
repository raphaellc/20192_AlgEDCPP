#include "bardo.h"
bardo::bardo()
{
}

bardo::~bardo()
{
}

void bardo::inicializar()
{
	Sets("Ian", cajado, 100, 10);
	Atacar();
	Defender();
	Curar(15);
}
