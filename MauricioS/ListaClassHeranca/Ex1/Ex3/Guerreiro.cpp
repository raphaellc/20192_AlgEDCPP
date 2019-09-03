#include "Guerreiro.h"
#include <iostream>

using namespace std;

Guerreiro::Guerreiro()
{
}

Guerreiro::~Guerreiro()
{
}

void Guerreiro::CriarGuerreiro(int p_sorte)
{
	SetForca(p_sorte + 10);
	SetDestreza(p_sorte + 5);
	SetInteligencia(p_sorte - 2);
	SetVelocidade(p_sorte - 3);
	SetCarisma(p_sorte);
}

void Guerreiro::SetForca(int p_forca)
{
	forca = p_forca;
}

void Guerreiro::SetDestreza(int p_destreza)
{
	destreza = p_destreza;
}

void Guerreiro::SetInteligencia(int p_inteligencia)
{
	inteligencia = p_inteligencia;
}

void Guerreiro::SetVelocidade(int p_velocidade)
{
	velocidade = p_velocidade;
}

void Guerreiro::SetCarisma(int p_carisma)
{
	carisma = p_carisma;
}

int Guerreiro::GetForca()
{
	return forca;
}

int Guerreiro::GetDestreza()
{
	return destreza;
}

int Guerreiro::GetInteligencia()
{
	return inteligencia;
}

int Guerreiro::GetVelocidade()
{
	return velocidade;
}

int Guerreiro::GetCarisma()
{
	return carisma;
}

void Guerreiro::Atacar()
{
	cout << "Guerreiro ataca com " << forca << " de forca." << endl;
}

void Guerreiro::Caminhar()
{
	cout << "Guerreiro caminha com " << velocidade << " de velocidade." << endl;
}

void Guerreiro::Defender()
{
	cout << "Guerreiro defende com " << forca + destreza << " de defesa." << endl;
}

void Guerreiro::Persuadir()
{
	cout << "Guerreiro convence com " << inteligencia + carisma << " de persuasao." << endl;
}
