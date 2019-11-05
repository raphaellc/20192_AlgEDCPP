#pragma once
#include "Tela.h"
class Tela_Controle :
	public Tela
{
public:
	Tela_Controle();
	~Tela_Controle();

	void inicializar();
	void desenhar();
	void atualizar();
	void finalizar();

protected:
	Texto instrucoes;
};

