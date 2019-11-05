#pragma once
#include "Tela.h"
#include "Tela_Jogo.h"
#include "Tela_Menu.h"
#include "Tela_Pause.h"
#include "Tela_Controle.h"
#include "Tela_Creditos.h"
#include "Lista.h"
#include "Pilha.h"
class Gerenciador_Tela
{
public:
	Gerenciador_Tela();
	~Gerenciador_Tela();

	void inicializarTelasParaLista();
	void chamarTelaParaPilha(int _id);
	void desenhar();
	void atualizar();

protected:
	Lista<Tela> listaTelas;
	Pilha<Tela> pilhaTelas;
	Tela * tela;
};

