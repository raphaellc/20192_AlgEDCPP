#include <iostream>
#include "Player.h"



int main() {

	Player Players;
	
	Players.SetStatus();
	Players.Atacar();
	Players.walk();
	Players.Healing();

	system("pause");
	return 0;
}