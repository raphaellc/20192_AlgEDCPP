#include "mago.h"
mago::mago()
{
}

mago::~mago()
{
}

void mago::inicializar()
{

	Sets("Ian", cajado, 100, 10);
	Atacar();
	Defender();
	Curar(15);
}