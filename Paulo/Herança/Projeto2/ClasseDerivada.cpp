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
	atrPublic = 5;
	metodoProtected();
	metodoPublic();
	return atrProtected + atrPublic;
}
