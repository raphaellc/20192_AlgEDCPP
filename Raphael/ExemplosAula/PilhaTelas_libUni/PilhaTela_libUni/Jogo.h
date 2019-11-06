#pragma once
#include "libUnicornio.h"
#include "Pilha.h"
#include "Tela.h"
#include "Menu.h"
class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();

	void executar();
private:
	Pilha<Tela> * telas = new Pilha<Tela>();
};

