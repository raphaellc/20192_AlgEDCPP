#pragma once
class Forma
{
public:
	Forma();
	~Forma();
protected:
	int x, y;
	virtual float area(int v1, int v2) = 0;
	void definePosicao(int p_ix, int p_iy);
};

