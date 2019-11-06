#include "Jogo.h"


Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	//	O resto da inicialização vem aqui!
	//	...
	Menu * menu_princ = new Menu("Menu_Principal");
	Menu * menu_sec = new Menu("Menu_Secundario");
	Menu * menu_terc = new Menu("Menu_Terciario");
	Tela * jogo = new Tela("jogo");
	menu_princ->adicionaTela(menu_sec);
	menu_princ->adicionaTela(jogo);
	menu_sec->adicionaTela(menu_terc);
	telas->empilhar(menu_princ);
	menu_princ->inicializar();
	menu_sec->inicializar();
	menu_terc->inicializar();
	jogo->inicializar();
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	//	...

	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();

		//	Seu código vem aqui!
		//	...
		telas->topo()->desenhar();
		telas->topo()->atualizar();
		if (telas->topo()->obtemProximaTela() != nullptr) {
			if ((telas->topo())->obtemProximaTela()->obtemTitulo() == "voltar") {
				telas->desempilhar();
			}else{
				telas->empilhar(telas->topo()->obtemProximaTela());
			}
		}
		uniTerminarFrame();
	}
}