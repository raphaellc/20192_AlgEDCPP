#pragma once
class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	void CriarGuerreiro(int p_sort);

#pragma region GETS
	int GetForca();
	int GetDestreza();
	int GetInteligencia();
	int GetVelocidade();
	int GetCarisma();
#pragma endregion

#pragma region AÇÕES
	void Atacar();
	void Caminhar();
	void Defender();
	void Persuadir();
#pragma endregion

private:
#pragma region VARIAVEIS
	int forca;
	int destreza;
	int inteligencia;
	int velocidade;
	int carisma;
#pragma endregion

#pragma region SETS
	void SetForca(int p_forca);
	void SetDestreza(int p_destreza);
	void SetInteligencia(int p_inteligencia);
	void SetVelocidade(int p_velocidade);
	void SetCarisma(int p_carisma);
#pragma endregion
};