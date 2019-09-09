#include <iostream>
#include "Personagem.h"
#include "bárbaro.h"
#include "bardo.h"
#include "clérigo.h"
#include "guerreiro.h"
#include "mago.h"
#include "paladino.h"
#include "ranger.h"
#include "sacerdoteDaLuz.h"
#include "sacerdoteDasTrevas.h"
int main() {

	Clérigo * clerigo = new Clérigo;
	Mago * mago = new Mago;
	SacerdoteDaLuz * sacerdoteDaLuz = new SacerdoteDaLuz;
	SacerdoteDasTrevas * sacerdoteDasTrevas = new SacerdoteDasTrevas;

	cout << "Clerigo: " << endl;
	clerigo->magiaLeve();
	cout << endl;

	cout << "Mago: " << endl;
	mago->magiaMedia();
	cout << endl;

	cout << "Sacerdote da Luz: " << endl;
	sacerdoteDaLuz->magiaForteLuz();
	cout << endl;

	cout << "Sacerdote das Trevas: " << endl;
	sacerdoteDasTrevas->magiaForteTrevas();
	cout << endl;

	Ranger * ranger = new Ranger;

	cout << "Ranger: " << endl;
	ranger->atirarFlechas();
	cout << endl;

	Bardo * bardo = new Bardo;

	cout << "Bardo: " << endl;
	bardo->tocarTrompete();
	cout << endl;

	Ladino * ladino = new Ladino;
	Bárbaro * barbaro = new Bárbaro;
	Guerreiro * guerreiro = new Guerreiro;
	Paladino * paladino = new Paladino;

	cout << "Ladino: " << endl;
	ladino->ataqueLeve();
	cout << endl;

	cout << "Barbaro: " << endl;
	barbaro->machadadaNaCabeca();
	cout << endl;

	cout << "Guerreiro: " << endl;
	guerreiro->ataqueForte();
	cout << endl;

	cout << "Paladino: " << endl;
	paladino->golpeFurioso();
	cout << endl;

	system("pause");
	return 0;
}