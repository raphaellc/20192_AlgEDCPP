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
	Delete_C_Plus_Plus(Vetor);

}
