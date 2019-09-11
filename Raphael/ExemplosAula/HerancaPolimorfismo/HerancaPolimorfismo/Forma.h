#pragma once
class Forma
{
public:
	Forma();
	~Forma();
	virtual void calculaArea();
	
protected:
	int a, b; //a = raio e base, e altura;
};

