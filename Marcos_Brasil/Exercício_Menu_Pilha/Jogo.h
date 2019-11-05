#pragma once
#include "libUnicornio.h"
#include "Gerenciador_Tela.h"
#include "Pilha.h"

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();

	void executar();
	void setTelaAtual(int _id) { id_telaAtual = _id; }
	int getTelaAtual() { return id_telaAtual; }

protected:
	int id_telaAtual;
	Gerenciador_Tela gerenciadorTela;
};

