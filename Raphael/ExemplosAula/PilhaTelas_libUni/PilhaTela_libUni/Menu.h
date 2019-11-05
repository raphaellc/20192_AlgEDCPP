#pragma once
#include "libUnicornio.h"
#include "Tela.h"
#include "Lista.h"
#include <string>
class Menu : public Tela
{
public:
	Menu();
	~Menu();

	void inicializar() override;
	void finalizar() override;

	void atualizar() override;
	void desenhar() override;
	std::string titulo;
	void adicionaTela(Tela * tl);
	Tela* obtemProximaTela();
private:
	Lista<Tela> * itensMenu = new Lista<Tela>();
	Lista<BotaoSprite> * botoesMenu = new Lista<BotaoSprite>();
	Tela* proxima_tela = nullptr;
	
	
};

