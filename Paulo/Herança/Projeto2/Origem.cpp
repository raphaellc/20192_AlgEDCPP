#include "ClasseDerivada.h"
#include "ClasseDerivada2.h"
#include <iostream>
int main() {
	ClasseDerivada * cd = new ClasseDerivada();
	ClasseDerivada2 * cd2 = new ClasseDerivada2();

	cd->metodoClasseDerivada();

	std::cout << cd->metodoClasseDerivada() << std::endl;
	std::cout << cd->metodoClasseDerivada() << std::endl;

	system("pause");
	return 0;
}