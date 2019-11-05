#include "Menu.h"


Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::inicializar()
{
	int posicao = -100;
	for (int i = 0; itensMenu->obtemTamanhoLista(); i++) {
		gRecursos.carregarSpriteSheet(((Menu*) itensMenu->obterElementoEm(i))->titulo, "assets/botaosprite/vermelho.png", 3, 1);
		
		BotaoSprite* bs = new BotaoSprite();
		bs->setSpriteSheet(((Menu*)itensMenu->obterElementoEm(i))->titulo);
		bs->setPos(gJanela.getLargura() / 2, gJanela.getAltura() / 2 + posicao);
		
		posicao += 100;
		
		botoesMenu->insereFimLista(bs);
	}
	

}

void Menu::finalizar()
{
	//	Descarregar spritesheets
	for (int i = 0; itensMenu->obtemTamanhoLista(); i++) {
		gRecursos.descarregarSpriteSheet(((Menu*)itensMenu->obterElementoEm(i))->titulo);
	}
}

void Menu::atualizar()
{
	for (int i = 0; i < botoesMenu->obtemTamanhoLista(); i++) {
		botoesMenu->obterElementoEm(i)->atualizar();
		if (botoesMenu->obterElementoEm(i)->estaClicado())
			this->proxima_tela = itensMenu->obterElementoEm(i);
	}
}

void Menu::desenhar()
{
	for (int i = 0; i < botoesMenu->obtemTamanhoLista(); i++)
		botoesMenu->obterElementoEm(i)->desenhar();

}

void Menu::adicionaTela(Tela * tl)
{
	itensMenu->insereFimLista(tl);
}

Tela* Menu::obtemProximaTela()
{
	return this->proxima_tela;
}
