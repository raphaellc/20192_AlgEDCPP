#pragma once
#include "Tela.h"
class Tela_Creditos :
	public Tela
{
public:
	Tela_Creditos();
	~Tela_Creditos();

	void inicializar();
	void desenhar();
	void atualizar();
	void finalizar();

protected:

	Texto instrucoes;
};

