#include "Personagem.h"
#include <iostream>

using namespace std;

Personagem::Personagem()
{
	SetForca(1);
	SetDestreza(1);
	SetInteligencia(1);
	SetVelocidade(1);
	SetCarisma(1);
}

Personagem::~Personagem()
{
}

int Personagem::GetForca()
{
	return forca;
}

int Personagem::GetDestreza()
{
	return destreza;
}

int Personagem::GetInteligencia()
{
	return inteligencia;
}

int Personagem::GetVelocidade()
{
	return velocidade;
}

int Personagem::GetCarisma()
{
	return carisma;
}

int Personagem::Atacar()
{
	cout << " personagem ";
	return forca;
}

int Personagem::Caminhar()
{
	return velocidade;
}

int Personagem::Defender()
{
	return destreza;
}

int Personagem::Persuadir()
{
	return carisma;
}

void Personagem::SetForca(int p_forca)
{
	forca = p_forca;
}

void Personagem::SetDestreza(int p_destreza)
{
	destreza = p_destreza;
}

void Personagem::SetInteligencia(int p_inteligencia)
{
	inteligencia = p_inteligencia;
}

void Personagem::SetVelocidade(int p_velocidade)
{
	velocidade = p_velocidade;
}

void Personagem::SetCarisma(int p_carisma)
{
	carisma = p_carisma;
}
