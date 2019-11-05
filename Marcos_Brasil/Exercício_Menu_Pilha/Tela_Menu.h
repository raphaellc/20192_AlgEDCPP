#pragma once
#include "Tela.h"
class Tela_Menu :
	public Tela
{
public:
	Tela_Menu();
	~Tela_Menu();

	void inicializar();
	void desenhar();
	void atualizar();
	void finalizar();

	void botaoSelecionado(int _num);

protected:
	int menuOpt;
};

