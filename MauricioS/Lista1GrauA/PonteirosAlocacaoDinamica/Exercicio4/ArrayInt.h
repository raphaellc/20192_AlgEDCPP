#pragma once

class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();

	void Adicionar(int p_value);
	void AdicionarFinal(int p_valor);
	void RemoverUltimoValor();
	int ObterValorEm(int p_posicao);
	int ObtervalorFinal();
	void MostrarValores();

private:
	void Realocar();

	int *vetor;
	int sizeVetor;
	int qtCurrent;
};

