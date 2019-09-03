#pragma once
class Retangulo
{
public:
	Retangulo();
	~Retangulo();

	void SetComprimento(int p_value);
	int GetComprimento();

	void SetAltura(int p_value);
	int GetAltura();

	int Perimetro();
	int Area();

private:
	int comprimento;
	int altura;
};

