#include "sacerdote_da_luz.h"
sacerdote_da_luz::sacerdote_da_luz()
{
}

sacerdote_da_luz::~sacerdote_da_luz()
{
}

void sacerdote_da_luz::inicializar()
{

	Sets("Ian", cajado, 100, 10);
	Atacar();
	Defender();
	Curar(15);
}