#include <iostream>
#include "VetorDinamico.h"

using namespace std;
int main()
{
	VetorDinamico *vetor = new VetorDinamico();
	vetor->adicionar_valor(2);
	vetor->adicionar_valor(66);
	vetor->adicionar_valor(27);
	vetor->adicionar_valor(92);
	vetor->adicionar_valor(1);
	vetor->adicionar_valor(9);
	vetor->exibe();
	



}