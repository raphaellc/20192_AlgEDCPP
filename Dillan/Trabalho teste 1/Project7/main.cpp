#include "VetorDinamico.h"


using namespace std;

int main() {
	
	
	VetorDinamico *vd = new VetorDinamico ();
	char letra = 'o';
	int num= 0, ajuste = 5;
	while (num != 3)
	{
		for (int i = 0; i < ajuste; i++)
		cout << vd->digitar() << endl;

		cout << "digite 1 para aumentar em 5 unidade e 2 para diminuir e 3 para parar" << endl;
		cin >> num;
		vd->setmodificar(num);

		if (num == 1) {
			ajuste = +5;
		}
		else if (num == 2) {
			ajuste -= 5;
		}

		
	}
	delete vd;
	system("pause");
	return 0;
}