#pragma once
#include <string>

using namespace std;

class Personagem
{
public:
	Personagem();
	~Personagem();

#pragma region SETS
	void SetForca(int p_forca);
	void SetDestreza(int p_destreza);
	void SetInteligencia(int p_inteligencia);
	void SetVelocidade(int p_velocidade);
	void SetCarisma(int p_carisma);
#pragma endregion

#pragma region AÇÕES
	virtual int Atacar();
	virtual int Caminhar();
	virtual int Defender();
	virtual int Persuadir();
#pragma endregion

protected:
#pragma region GETS
	int GetForca();
	int GetDestreza();
	int GetInteligencia();
	int GetVelocidade();
	int GetCarisma();
#pragma endregion

private:
#pragma region VARIAVEIS
	int forca;
	int destreza;
	int inteligencia;
	int velocidade;
	int carisma;
#pragma endregion
};

