#pragma once
#include <iostream>

using namespace std;

class VetorDinamico
{
private:
	int sizeVector = 5;
	int currentFill = 0;

public:
	VetorDinamico();
	~VetorDinamico();

	void AddValue(int p_value);
	int GetValue(int p_position);
	void RemoveValue(int p_position);
	void PrintVector();

protected:
	int *myVector;
};

