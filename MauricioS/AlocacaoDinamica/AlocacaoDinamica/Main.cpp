#include "VetorDinamico.h"

int main()
{
	VetorDinamico *vd = new VetorDinamico();

	//memoria sem nenhum dado, apenas alocação
	vd->PrintVector();

	//adiciona 3 posições dentro da memoria
	vd->AddValue(1);
	vd->AddValue(2);
	vd->AddValue(3);

	//mostra as 3 primeiras posições prrenchidas com os valores 1,2,3 e o restante com lixo
	vd->PrintVector();

	//adiciona mais 3 posições para o vetor fazendo ele incrementar mais 5 posições na memoria
	vd->AddValue(4);
	vd->AddValue(5);
	vd->AddValue(6);

	//mostra as primeira 6 posições preenchiedas e o restante com lixo, vetor 10 posições
	vd->PrintVector();

	//remove o valor da posição indicada
	vd->RemoveValue(3);
	vd->RemoveValue(1);

	//mostra o resultado da remoção
	vd->PrintVector();

	free(vd);
	vd->PrintVector();

	vd = new VetorDinamico();
	vd->PrintVector();
	vd->AddValue(1);
	vd->AddValue(2);
	vd->AddValue(3);
	vd->AddValue(4);
	vd->AddValue(5);
	vd->AddValue(6);
	vd->AddValue(7);
	vd->AddValue(8);
	vd->AddValue(9);
	vd->AddValue(10);
	vd->AddValue(11);
	vd->AddValue(12);

	vd->PrintVector();

	vd->RemoveValue(10);
	vd->RemoveValue(2);

	vd->PrintVector();

	system("pause");
	return 0;
}