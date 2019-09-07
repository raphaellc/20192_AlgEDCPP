#include "Classe_Player_Base.h"

Classe_Player_Base::Classe_Player_Base()
{
}

Classe_Player_Base::~Classe_Player_Base()
{
}

void Classe_Player_Base::Atacar() {

	std::cout << "O Clerego deu dano de: " << dano << " com " << tipo_de_arma << "\n";

}
void Classe_Player_Base::Defender() {

	std::cout << "O Clerego defendeu \n";

}
void Classe_Player_Base::Curar(int _valor_da_cura) {

	vida += _valor_da_cura;

}

void Classe_Player_Base::Sets(string _nome, Armas _tipo_de_arma, int _vida, int _dano){

	tipo_de_arma = _tipo_de_arma;
	nome = _nome;
	vida = _vida;
	dano = _dano;

}