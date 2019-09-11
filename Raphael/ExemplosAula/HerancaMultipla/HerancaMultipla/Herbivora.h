#pragma once

class Herbivora
{
public:
	Herbivora();
	~Herbivora();
	virtual void novoMetodo();
protected:
	virtual void DNA() = 0;
	virtual void comer();
};

