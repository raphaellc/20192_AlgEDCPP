#include "Clerigo.h"

Clerigo::Clerigo()
{	
	Personagem::Personagem();
}

Clerigo::Clerigo(int p_forca, int p_destreza, int p_inteligencia, int p_velocidade, int p_carisma)
{
	SetForca(p_forca);
	SetDestreza(p_destreza);
	SetInteligencia(p_inteligencia);
	SetVelocidade(p_velocidade);
	SetCarisma(p_carisma);
}


Clerigo::~Clerigo()
{
}

int Clerigo::Atacar()
{
	return GetForca();
}

int Clerigo::AtacarPer()
{
	return Personagem::Atacar();
}

int Clerigo::Caminhar()
{
	return GetVelocidade();
}

int Clerigo::Defender()
{
	return GetDestreza();
}

int Clerigo::Persuadir()
{
	return GetCarisma();
}
