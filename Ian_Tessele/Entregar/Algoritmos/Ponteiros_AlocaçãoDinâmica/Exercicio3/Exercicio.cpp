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

	BaseC_Plus_Plus(Vetor,VetorSize);

	New(Vetor, VetorSize,10);

	Delete_C_Plus_Plus(Vetor);

}
