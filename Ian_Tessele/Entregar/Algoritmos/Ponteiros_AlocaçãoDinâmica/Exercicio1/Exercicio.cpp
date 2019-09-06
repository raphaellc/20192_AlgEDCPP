#include "Exercicio.h"



Exercicio::Exercicio()
{
	VetorSize = 10;
}


Exercicio::~Exercicio()
{
}

void Exercicio::Atualizar()
{

	BaseC(Vetor,VetorSize);
	Delete_C(Vetor);

}
