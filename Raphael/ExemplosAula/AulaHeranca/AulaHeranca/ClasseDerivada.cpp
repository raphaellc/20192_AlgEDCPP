#include "ClasseDerivada.h"



ClasseDerivada::ClasseDerivada()
{
}


ClasseDerivada::~ClasseDerivada()
{
}

int ClasseDerivada::metodoClasseDerivada()
{
	atrProtected = 10;
	atrPublico = 5;
	metodoProtected();
	metodoPublic();
	return atrProtected + atrPublico;
}
