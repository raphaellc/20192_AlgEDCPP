#include "Tela_Controle.h"



Tela_Controle::Tela_Controle()
{
	fundo = new Sprite;
	titulo = new Texto;
	botao = new BotaoSprite;
}


Tela_Controle::~Tela_Controle()
{
}

void Tela_Controle::inicializar()
{
	if (!gRecursos.carregouSpriteSheet("tela_amarela"))
	{
		gRecursos.carregarSpriteSheet("tela_amarela", "assets/tela_amarela.png");
	}
	fundo->setSpriteSheet("tela_amarela");

	if (!gRecursos.carregouSpriteSheet("botao_voltar"))
	{
		gRecursos.carregarSpriteSheet("botao_voltar", "assets/botao_voltar.png", 3);
	}
	botao[0].setSpriteSheet("botao_voltar");
	botao[0].setPos(gJanela.getLargura() / 2, 600);


	titulo->setFonte("fonte_padrao");
	instrucoes.setFonte("fonte_padrao");
	titulo->adicionarString("CONTROLE");
	instrucoes.adicionarString("Pressione ESC para voltar na tela de menu.");

}

void Tela_Controle::desenhar()
{
	fundo->desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	for (int i = 0; i < 4; i++)
	{
		botao[i].desenhar();
	}
	titulo->desenhar(gJanela.getLargura() / 2, 100);
	instrucoes.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
}

void Tela_Controle::atualizar()
{
	botao->setEstado(BOTAOSPRITE_COM_MOUSE_EM_CIMA);

	if (gTeclado.pressionou[TECLA_ENTER] || gTeclado.pressionou[TECLA_ESC])
	{
		// chamar TELA_MENU
	}
}

void Tela_Controle::finalizar()
{
	gRecursos.descarregarTudo();
}
