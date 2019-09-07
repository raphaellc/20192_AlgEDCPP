#include "sacerdote_das_trevaz.h"

sacerdote_das_trevaz::sacerdote_das_trevaz()
{
}

sacerdote_das_trevaz::~sacerdote_das_trevaz()
{
}

void sacerdote_das_trevaz::inicializar()
{

	Sets("Ian", cajado, 100, 10);
	Atacar();
	Defender();
	Curar(15);
}