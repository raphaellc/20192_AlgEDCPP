#include <iostream>
#include "VetorDinamico.h"

using namespace std;
int main()
{
	VetorDinamico *vetor = new
		VetorDinamico();
	vetor->adicionar_valor(2);
	cout << vetor->obtem_valor(0);



}