#include <iostream>
#include "Retangulo.h"

using namespace std;

int main() {

	Retangulo retangulo;
	float x, y;
	int contador = 1;

	setlocale(LC_ALL, "ptb");

	do
	{
		cout << "Digite o valores entre 0.0 a 20.0 das coordenadas do " << contador << "º ponto do retangulo: " << endl
			<< "X: ";
		cin >> x;
		cout << "Agora para Y: ";
		cin >> y;

		if ((x > 0 && x < 20) && (y > 0 && y < 20))
		{
			retangulo.setPonto(contador - 1, x, y);
			contador++;
			cout << endl;
		}
		else
		{
			cout << "Algum dos seus valores estão fora do limite determinado." << endl;
		}
	} while (contador < 4);


	system("pause");
	return 0;
}