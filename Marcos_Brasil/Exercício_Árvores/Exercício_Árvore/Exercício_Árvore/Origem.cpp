#include <iostream>
#include "ArvoreBinaria.h"

int main() {

	setlocale(LC_ALL, "ptb");

	ArvoreBinaria arvore;

	arvore.inserir(10);
	arvore.inserir(5);
	arvore.inserir(20);
	arvore.inserir(3);
	arvore.inserir(7);
	arvore.inserir(11);
	arvore.inserir(22);
	arvore.inserir(6);
	arvore.inserir(8);

	arvore.visitarPreOrdem();
	cout << endl;
	arvore.visitarCentral();
	cout << endl;
	arvore.visitarPosOrdem();
	cout << endl;
	arvore.deletar(10);
	cout << endl;
	arvore.deletar(22);
	cout << endl;
//	arvore.deletar(30);
	cout << endl;
	arvore.visitarPreOrdem();
	cout << endl;


	system("pause");
	return 0;
}