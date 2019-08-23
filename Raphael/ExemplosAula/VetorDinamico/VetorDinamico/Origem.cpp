#include "VetorDinamico.h"
#include <iostream>

int main() {
	VetorDinamico * vd = new VetorDinamico();
	
	vd->adicionaValor(10);
	vd->adicionaValor(14);
	vd->adicionaValor(15);
	vd->adicionaValor(16);
	vd->adicionaValor(18);
	vd->adicionaValor(19);
	std::cout << vd->obtemValor(0) << std::endl;
	std::cout << vd->obtemValor(1) << std::endl;
	std::cout << vd->obtemValor(2) << std::endl;
	std::cout << vd->obtemValor(3) << std::endl;
	std::cout << vd->obtemValor(4) << std::endl;
	std::cout << vd->obtemValor(5)  << std::endl;

	delete vd;
	system("pause");
}