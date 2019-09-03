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

	Base(Vetor,VetorSize);
	Delete(Vetor);

}
