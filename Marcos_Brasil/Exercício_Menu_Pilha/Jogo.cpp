#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(1024, 768, false);

	gerenciadorTela.inicializarTelasParaLista();
	setTelaAtual(1);
	gerenciadorTela.chamarTelaParaPilha(getTelaAtual());

}

void Jogo::finalizar()
{
	uniFinalizar();
}

void Jogo::executar()
{
	while(!gEventos.sair)
	{
		uniIniciarFrame();

		gerenciadorTela.desenhar();
		gerenciadorTela.atualizar();

		uniTerminarFrame();
	}
}