#include "VetorDinamico.h"

VetorDinamico::VetorDinamico()
{
	myVector = (int*)malloc(sizeVector * sizeof(int));
}

VetorDinamico::~VetorDinamico()
{
	free(myVector);
}

void VetorDinamico::AddValue(int p_value)
{
	if (currentFill == sizeVector)
	{
		sizeVector += 5;
		myVector = (int*)realloc(myVector, sizeVector * sizeof(int));
	}

	for (int i = 0; i < sizeVector; i++)
	{
		if (myVector[i] < 0)
		{
			myVector[i] = p_value;
			currentFill++;
			break;
		}
	}
}

int VetorDinamico::GetValue(int p_position)
{
	if (p_position < sizeVector)
		return myVector[p_position];
	else
		return 0;
}

void VetorDinamico::RemoveValue(int p_position)
{
	myVector[p_position] = NULL;
	currentFill--;

	if (currentFill + 5 == sizeVector)
	{			
		sizeVector -= 5;
		myVector = (int*)realloc(myVector, sizeVector * sizeof(int));
	}
}

void VetorDinamico::PrintVector()
{
	for (int i = 0; i < sizeVector; i++)
	{
		cout << GetValue(i) << endl;
	}
	cout << "----------------------------------" << endl;
}
