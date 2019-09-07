#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::SetStatus()
{
	nome = "Ian";
	life = 100;
	stamina = 100;
	StartWalk = false;
	Classe = Barburo;
	Arma = espada_longa;
	dano = 10;
}

