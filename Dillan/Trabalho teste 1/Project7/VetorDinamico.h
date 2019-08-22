#include <iostream>
#include <ctime>
using namespace std;
class VetorDinamico
{
public:
	VetorDinamico();
	~VetorDinamico();

	void setmodificar(int lt);
	int digitar();

protected:
	int *v2 = (int*)malloc(5 * sizeof(int));
	int cont=0, ajuste= 5;
	char letra;
	

};
