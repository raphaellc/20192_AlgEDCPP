#pragma once
#include "Tela.h"
class Tela_Jogo :
	public Tela
{
public:
	Tela_Jogo();
	~Tela_Jogo();

	void inicializar();
	void desenhar();
	void atualizar();
	void finalizar();
protected:
	Texto instrucoes;
};

