#pragma once
#include "libUnicornio.h"
class Tela
{
public:
	Tela();
	~Tela() {};

	virtual void inicializar() {};
	virtual void desenhar() {};
	virtual void atualizar() {};
	virtual void finalizar() {};

protected:
	Texto * titulo;
	Sprite * fundo;
	BotaoSprite * botao;
};

inline Tela::Tela() 
{
	if (!gRecursos.carregouSpriteSheet("fonte_padrao"))
	{
		gRecursos.carregarFonte("fonte_padrao", "fonte_padrao.ttf", 32);
	}
	
}

