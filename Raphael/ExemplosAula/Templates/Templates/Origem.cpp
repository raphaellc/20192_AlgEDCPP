#include <iostream>
#include <string>
#include "ClasseTemplate.h"
template <class T>
T meuTemplate(T dado, T outroDado) {
	return dado+outroDado;
}

int main() {

	ClasseTemplate < int > * containerDeInteiro = new ClasseTemplate<int>;
	containerDeInteiro->adicionaElemento(10);
	containerDeInteiro->adicionaElemento(20);
	std::cout << containerDeInteiro->obtemElemento(0) << std::endl;
	std::cout << containerDeInteiro->obtemElemento(1) << std::endl;


	ClasseTemplate < std::string > * containerDeString = new ClasseTemplate<std::string>;
	containerDeString->adicionaElemento("Brasil");
	containerDeString->adicionaElemento("Sacana");
	std::cout << containerDeString->obtemElemento(0) << std::endl;
	std::cout << containerDeString->obtemElemento(1) << std::endl;
	
	std::cout << meuTemplate(10, 30);
	std::cout << std::endl;
	std::cout << meuTemplate(10.2f, 30.4f);
	std::string a, b;
	a = "abst";
	b = "asdfas";
	std::string c = meuTemplate(a, b);
	std::cout << std::endl << c << std::endl;
	system("pause");
	return 0;
}