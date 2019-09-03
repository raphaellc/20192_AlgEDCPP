#include <iostream>
#include "RetanguloSofisticado.h"

using namespace std;

int main()
{
	RetanguloSofisticado *retangulo = new RetanguloSofisticado();
	int _tempX[4];
	int _tempY[4];

#pragma region PREENCHIMENTO COORDENADAS
	cout << "valores entre 1 e 20" << endl;

	cout << "PosX A: ";
	cin >> _tempX[0];
	cout << endl;

	cout << "PosY A: ";
	cin >> _tempY[0];
	cout << endl;

	cout << "PosX B: ";
	cin >> _tempX[1];
	cout << endl;

	cout << "PosY B: ";
	cin >> _tempY[1];
	cout << endl;

	cout << "PosX C: ";
	cin >> _tempX[2];
	cout << endl;

	cout << "PosY C: ";
	cin >> _tempY[2];
	cout << endl;

	cout << "PosX D: ";
	cin >> _tempX[3];
	cout << endl;

	cout << "PosY D: ";
	cin >> _tempY[3];
	cout << endl;
#pragma endregion
	
	retangulo->SetCoordenadas(_tempX, _tempY);

	//TODO falta implementar na classe base a lógica de calculo
	cout << "comprimento: " << retangulo->CalculaComprimento() << endl;
	cout << "altura: " << retangulo->CalculaAltura() << endl;
	cout << "perimetro: " << retangulo->CalculaPerimetro() << endl;
	cout << "area: " << retangulo->CalculaArea() << endl;


	system("pause");
	return 0;
}