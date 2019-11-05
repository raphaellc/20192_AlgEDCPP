#pragma once
#include "Tela.h"
class Tela_Pause :
	public Tela
{
public:
	Tela_Pause();
	~Tela_Pause();

	void inicializar();
	void desenhar();
	void atualizar();
	void finalizar();

	void botaoSelecionado(int _num);

protected:
	int menuOpt;
	Texto instrucoes;
};

