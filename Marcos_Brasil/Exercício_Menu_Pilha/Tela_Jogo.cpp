#include "Tela_Jogo.h"



Tela_Jogo::Tela_Jogo()
{
	fundo = new Sprite;
	titulo = new Texto;
}


Tela_Jogo::~Tela_Jogo()
{
}

void Tela_Jogo::inicializar()
{
	if (!gRecursos.carregouSpriteSheet("tela_verde"))
	{
		gRecursos.carregarSpriteSheet("tela_verde", "assets/tela_verde.png");
	}
	fundo->setSpriteSheet("tela_verde");

	titulo->setFonte("fonte_padrao");
	instrucoes.setFonte("fonte_padrao");
	titulo->adicionarString("JOGO");
	instrucoes.adicionarString("Pressione ENTER para entrar na tela de pause.");

}

void Tela_Jogo::desenhar()
{
	fundo->desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	titulo->desenhar(gJanela.getLargura() / 2, 100);
	instrucoes.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
}

void Tela_Jogo::atualizar()
{
	if (gTeclado.pressionou[TECLA_ENTER])
	{
		// chamar TELA_PAUSE
	}
}

void Tela_Jogo::finalizar()
{
	gRecursos.descarregarTudo();
}
