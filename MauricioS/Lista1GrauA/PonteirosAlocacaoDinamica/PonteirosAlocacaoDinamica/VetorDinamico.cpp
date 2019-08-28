#include "VetorDinamico.h"
#include <iostream>

VetorDinamico::VetorDinamico()
{
}

VetorDinamico::~VetorDinamico()
{
}

void VetorDinamico::SetVetor(int p_position, int p_value)
{
	if(p_position <= size && p_position >= 0)
		vetor[p_position] = p_value;
}

void VetorDinamico::CreateVetor()
{
	vetor = (int*)calloc(size, sizeof(int));
}

void VetorDinamico::ReallocVetor(int p_qtPosition)
{
	SetSize(size + p_qtPosition);
	vetor = (int*)realloc(vetor, size * sizeof(int));
}

void VetorDinamico::DesalocarVetor()
{
	delete(vetor);
}

void VetorDinamico::SetSize(int p_size)
{
	if (p_size > 10)
		size = 10;
	else if (p_size < 0)
		size = 1;
	else
		size = p_size;
}

int VetorDinamico::GetSize()
{
	return size;
}

int VetorDinamico::GetvalueVetor(int p_positionVetor)
{
	return vetor[p_positionVetor];
}
