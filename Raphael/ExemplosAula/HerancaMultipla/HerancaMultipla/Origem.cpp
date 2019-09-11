#include <iostream>
#include "Onivora.h"
void main() {

	Onivora * onivora = new Onivora();
	Herbivora * herb[5];
	Carnivora * carn = new Onivora();
	herb[1] = new Onivora();
	herb[1]->novoMetodo();
	Onivora * on = (Onivora *) herb[1];
	onivora->comer();
	system("pause");
}