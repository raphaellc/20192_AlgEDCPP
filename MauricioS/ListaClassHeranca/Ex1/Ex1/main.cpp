#include <iostream>
#include "Retangulo.h"

using namespace std;

int main()
{
	Retangulo *retangulo1 = new Retangulo();

	cout << "comprimento: " << retangulo1->GetComprimento() << endl;
	cout << "altura: " << retangulo1->GetAltura() << endl;
	cout << "perimetro: " << retangulo1->Perimetro() << endl;
	cout << "area: " << retangulo1->Area() << endl;

	cout << "----------------" << endl;

	retangulo1->SetAltura(0);
	retangulo1->SetComprimento(21);
	cout << "altura: " << retangulo1->GetAltura() << endl;
	cout << "comprimento: " << retangulo1->GetComprimento() << endl;

	cout << "----------------" << endl;

	retangulo1->SetAltura(5);
	retangulo1->SetComprimento(10);

	cout << "comprimento: " << retangulo1->GetComprimento() << endl;
	cout << "altura: " << retangulo1->GetAltura() << endl;
	cout << "perimetro: " << retangulo1->Perimetro() << endl;
	cout << "area: " << retangulo1->Area() << endl;

	system("pause");
	return 0;
}