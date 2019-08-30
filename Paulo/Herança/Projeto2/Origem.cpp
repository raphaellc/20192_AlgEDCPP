#include "ClasseDerivada.h"
#include <iostream>
int main() {
	ClasseDerivada * cd = new ClasseDerivada();
	cd->metodoClasseDerivada();
	std::cout << cd->metodoClasseDerivada() << std::endl;
	system("pause");
	return 0;
}