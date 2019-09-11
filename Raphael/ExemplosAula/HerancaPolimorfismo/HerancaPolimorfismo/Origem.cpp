#include <iostream>
#include "Forma.h"
#include "Retangulo.h"
#include "Triangulo.h"

void main() {
	Forma * formas[3];
	formas[0] = (Forma *) new Triangulo();
	formas[1] = (Forma *) new Retangulo();
	formas[2] = new Forma();
	for (int i=0; i < 3; i++){
		formas[i]->calculaArea();
	}
	system("Pause");
}