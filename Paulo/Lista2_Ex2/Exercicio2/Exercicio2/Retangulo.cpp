#include "Retangulo.h"



Retangulo::Retangulo(){
}


Retangulo::~Retangulo(){
}

float Retangulo::calcularAltura() {
	return calcAltura();
}

float Retangulo::calcularComprimento() {
	return calcComprimento();
}

float Retangulo::calcularArea() {
	return calcArea();
}

float Retangulo::calcularPerimetro() {
	return calcPerimetro();
}

bool Retangulo::verificaQuadrado(){
	if (altura == comprimento) {
		return true;
	}
	else {
		return false;
	}
}

void Retangulo::setCoordenadas(int pontoX[], int pontoY[]){
	bool talkey = true;

	for (int i = 0; i < 4; i++) {
		if ((pontoX[i] < 0 || pontoX[i] > 20) || (pontoY[i] < 0 || pontoY[i] > 20)) {
			cout << "nao pode ser menor que 0 nem maior que 20 talkey" << endl;
			talkey = false;
		}
	}
	if (talkey = true){
		setPontoA(pontoX[0], pontoY[0]);
		setPontoB(pontoX[1], pontoY[1]);
		setPontoC(pontoX[2], pontoY[2]);
		setPontoD(pontoX[3], pontoY[3]);
	}
}
