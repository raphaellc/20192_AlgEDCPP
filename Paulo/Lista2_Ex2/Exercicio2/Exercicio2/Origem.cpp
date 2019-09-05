#include "Retangulo.h"
int main() {

	Retangulo *retangulo = new Retangulo();
	int auxX[4], auxY[4];

	cout << "Digite X do ponto A (0 a 20): ";
	cin >> auxX[0];
	cout << "Digite Y do ponto A (0 a 20): ";
	cin >> auxY[0];

	cout << "Digite X do ponto B (0 a 20): ";
	cin >> auxX[1];
	cout << "Digite Y do ponto B (0 a 20): ";
	cin >> auxY[1];

	cout << "Digite X do ponto C (0 a 20): ";
	cin >> auxX[2];
	cout << "Digite Y do ponto C (0 a 20): ";
	cin >> auxY[2];

	cout << "Digite X do ponto D (0 a 20): ";
	cin >> auxX[3];
	cout << "Digite Y do ponto D (0 a 20): ";
	cin >> auxY[3];

	retangulo->setCoordenadas(auxX, auxY);
	
	cout << "Altura: " << retangulo->calcularAltura() << endl;
	cout << "Comprimento: " << retangulo->calcularComprimento() << endl;
	cout << "Area: " << retangulo->calcularArea() << endl;
	cout << "Perimetro: " << retangulo->calcularPerimetro() << endl;
	cout << "E quadrado(1-sim/0-nao)? " << retangulo->verificaQuadrado() << endl;

	system("pause");
	return 0;
}