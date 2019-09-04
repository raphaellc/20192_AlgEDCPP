#include "Retangulo.h"



Retangulo::Retangulo()
{
}


Retangulo::~Retangulo()
{
}

int Retangulo::getAltura(){
	return altura;
}

void Retangulo::setAltura(float valor){
	if (valor > 0 && valor < 20) {
		altura = valor;
	};
}

int Retangulo::getComprimento(){
	return comprimento;
}

void Retangulo::setComprimento(float valor){
	if (valor > 0 && valor < 20) {
		comprimento = valor;
	};
}

void Retangulo::calcularPerimetro(){
	perimetro = (2 * comprimento) + (2 * altura);
}

void Retangulo::calcularArea(){
	area = comprimento * altura;
}
