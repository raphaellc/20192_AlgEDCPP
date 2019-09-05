#pragma once
class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	void atacar();
	void defender();
	void correr();
	void dancar();
	void provocar();

protected:
	int vida, energia, armadura, velocidade, força;
};

