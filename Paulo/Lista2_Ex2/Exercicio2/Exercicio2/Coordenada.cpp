#include "Coordenada.h"



Coordenada::Coordenada(){
	vetorX = new int[4];
	vetorY = new int[4];
}


Coordenada::~Coordenada(){
}

void Coordenada::setPontoA(int pontoX, int pontoY){
	vetorX[0] = pontoX;
	vetorY[0] = pontoY;
}

void Coordenada::setPontoB(int pontoX, int pontoY){
	vetorX[1] = pontoX;
	vetorY[1] = pontoY;
}

void Coordenada::setPontoC(int pontoX, int pontoY){
	vetorX[2] = pontoX;
	vetorY[2] = pontoY;
}

void Coordenada::setPontoD(int pontoX, int pontoY){
	vetorX[3] = pontoX;
	vetorY[3] = pontoY;
}

float Coordenada::calcAltura() {
	return vetorY[0] - vetorY[3];
}

float Coordenada::calcComprimento() {
	return vetorX[1] - vetorX[0];
}

float Coordenada::calcArea() {
	return calcComprimento() * calcAltura();
}

float Coordenada::calcPerimetro() {
	return 2 * calcComprimento() + 2 * calcAltura();
}

int Coordenada::getVetorX(){
	return *vetorX;
}

int Coordenada::getVetorY(){
	return *vetorY;
}
