#include "Tela_Menu.h"



Tela_Menu::Tela_Menu()
{
	fundo = new Sprite;
	botao = new BotaoSprite[4];
	titulo = new Texto;
	menuOpt = 0 ;
}


Tela_Menu::~Tela_Menu()
{
}

void Tela_Menu::inicializar()
{
	if (!gRecursos.carregouSpriteSheet("tela_azul"))
	{
		gRecursos.carregarSpriteSheet("tela_azul", "assets/tela_azul.png");
	}
	fundo->setSpriteSheet("tela_azul");

	if (!gRecursos.carregouSpriteSheet("botao_jogar"))
	{
		gRecursos.carregarSpriteSheet("botao_jogar", "assets/botao_jogar.png", 3);
	}
	botao[0].setSpriteSheet("botao_jogar");
	botao[0].setPos(212, 420);

	if (!gRecursos.carregouSpriteSheet("botao_controle"))
	{
		gRecursos.carregarSpriteSheet("botao_controle", "assets/botao_controle.png", 3);
	}
	botao[1].setSpriteSheet("botao_controle");
	botao[1].setPos(412, 420);

	if (!gRecursos.carregouSpriteSheet("botao_creditos"))
	{
		gRecursos.carregarSpriteSheet("botao_creditos", "assets/botao_creditos.png", 3);
	}
	botao[2].setSpriteSheet("botao_creditos");
	botao[2].setPos(612, 420);

	if (!gRecursos.carregouSpriteSheet("botao_sair"))
	{
		gRecursos.carregarSpriteSheet("botao_sair", "assets/botao_sair.png", 3);
	}
	botao[3].setSpriteSheet("botao_sair");
	botao[3].setPos(812, 420);

	titulo->setFonte("fonte_padrao");
	titulo->adicionarString("MENU PRINCIPAL");

}

void Tela_Menu::desenhar()
{
	fundo->desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	for (int i = 0; i < 4; i++)
	{
		botao[i].desenhar();
	}
	titulo->desenhar(gJanela.getLargura() / 2, 100);
}

void Tela_Menu::atualizar()
{
	if (gTeclado.pressionou[TECLA_DIR])
	{
		menuOpt++;

		if (menuOpt > 3) menuOpt = 3;
	}
	if (gTeclado.pressionou[TECLA_ESQ] && menuOpt >= 0)
	{
		menuOpt--;

		if (menuOpt < 0) menuOpt = 0;
	}

	if (botao[menuOpt].estaComMouseEmCima() && gTeclado.pressionou[TECLA_ENTER])
	{
		
	}

	botaoSelecionado(menuOpt);
}

void Tela_Menu::finalizar()
{
	gRecursos.descarregarTudo();
}

void Tela_Menu::botaoSelecionado(int _num)
{
	for (int i = 0; i < 4; i++)
	{
		botao[i].setEstado(BOTAOSPRITE_NORMAL);
	}
	botao[_num].setEstado(BOTAOSPRITE_COM_MOUSE_EM_CIMA);
}
