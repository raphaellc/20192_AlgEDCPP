#include "Gerenciador_Tela.h"



Gerenciador_Tela::Gerenciador_Tela()
{
}


Gerenciador_Tela::~Gerenciador_Tela()
{
}

void Gerenciador_Tela::inicializarTelasParaLista()
{
	tela = new Tela_Jogo;
	tela->inicializar();
	listaTelas.insereFimLista(tela);
	tela = new Tela_Menu;
	tela->inicializar();
	listaTelas.insereFimLista(tela);
	tela = new Tela_Pause;
	tela->inicializar();
	listaTelas.insereFimLista(tela);
	tela = new Tela_Controle;
	tela->inicializar();
	listaTelas.insereFimLista(tela);
	tela = new Tela_Creditos;
	tela->inicializar();
	listaTelas.insereFimLista(tela);
}

void Gerenciador_Tela::chamarTelaParaPilha(int _id)
{
	pilhaTelas.insereFimLista(listaTelas.obterElementoEm(_id));
}

void Gerenciador_Tela::desenhar()
{
	pilhaTelas.obterUltimoElemento()->desenhar();
}

void Gerenciador_Tela::atualizar()
{
	pilhaTelas.obterUltimoElemento()->atualizar();
}