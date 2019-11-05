#include "Tela_Pause.h"



Tela_Pause::Tela_Pause()
{
	fundo = new Sprite;
	botao = new BotaoSprite[3];
	titulo = new Texto;
	menuOpt = 0;
}


Tela_Pause::~Tela_Pause()
{
}

void Tela_Pause::inicializar()
{
	if (!gRecursos.carregouSpriteSheet("tela_vermelha"))
	{
		gRecursos.carregarSpriteSheet("tela_vermelha", "assets/tela_vermelha.png");
	}
	fundo->setSpriteSheet("tela_vermelha");

	if (!gRecursos.carregouSpriteSheet("botao_menu"))
	{
		gRecursos.carregarSpriteSheet("botao_menu", "assets/botao_menu.png", 3);
	}
	botao[0].setSpriteSheet("botao_menu");
	botao[0].setPos(900, 120);

	if (!gRecursos.carregouSpriteSheet("botao_carregar"))
	{
		gRecursos.carregarSpriteSheet("botao_carregar", "assets/botao_carregar.png", 3);
	}
	botao[1].setSpriteSheet("botao_carregar");
	botao[1].setPos(900, 320);

	if (!gRecursos.carregouSpriteSheet("botao_sair"))
	{
		gRecursos.carregarSpriteSheet("botao_sair", "assets/botao_sair.png", 3);
	}
	botao[2].setSpriteSheet("botao_creditos");
	botao[2].setPos(900, 520);


	titulo->setFonte("fonte_padrao");
	instrucoes.setFonte("fonte_padrao");
	titulo->adicionarString("PAUSE");
	instrucoes.adicionarString("Pressione ESC para voltar na tela de jogo.");

}

void Tela_Pause::desenhar()
{
	fundo->desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	for (int i = 0; i < 3; i++)
	{
		botao[i].desenhar();
	}
	titulo->desenhar(gJanela.getLargura() / 2, 100);
}

void Tela_Pause::atualizar()
{
	if (gTeclado.pressionou[TECLA_BAIXO])
	{
		menuOpt++;

		if (menuOpt > 2) menuOpt = 2;
	}
	if (gTeclado.pressionou[TECLA_CIMA] && menuOpt >= 0)
	{
		menuOpt--;

		if (menuOpt < 0) menuOpt = 0;
	}

	botaoSelecionado(menuOpt);
}

void Tela_Pause::finalizar()
{
	gRecursos.descarregarTudo();
}

void Tela_Pause::botaoSelecionado(int _num)
{
	for (int i = 0; i < 3; i++)
	{
		botao[i].setEstado(BOTAOSPRITE_NORMAL);
	}
	botao[_num].setEstado(BOTAOSPRITE_COM_MOUSE_EM_CIMA);
}
