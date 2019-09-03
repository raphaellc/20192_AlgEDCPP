#pragma once

class VetorDinamico
{
public:
	VetorDinamico();
	~VetorDinamico();

	void SetVetor(int p_position, int p_value);
	void CreateVetor();
	void ReallocVetor(int p_qtPosition);
	void DesalocarVetor();
	void SetSize(int p_size);
	int GetSize();
	int GetvalueVetor(int p_positionVetor);

private:
	int *vetor;
	int size;
};

