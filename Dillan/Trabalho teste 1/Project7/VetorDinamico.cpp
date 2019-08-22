#include "VetorDinamico.h"



VetorDinamico::VetorDinamico()
{
}


VetorDinamico::~VetorDinamico()
{
}

void VetorDinamico::setmodificar(int lt)
{
	if (cont == ajuste)
	{
		if (letra = '1') {
			ajuste += 5;
			v2 = (int *)realloc(v2, ajuste = sizeof(int));
		}
		if (letra = '2') {
			ajuste -= 5;
			v2 = (int *)realloc(v2, ajuste = sizeof(int));
		}
	}
}

int VetorDinamico::digitar()
{
	for (int i = 0; i < ajuste; i++) {
		v2[i] = rand() % 10;
		cont += 1;
	}
	for (int i = 0; i < ajuste; i++) {
		return v2[i] & cont;
	}
}
