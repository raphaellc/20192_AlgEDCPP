#pragma once
class ClasseBase
{
public:
	ClasseBase();
	~ClasseBase();

	int atrPublic;
	int metodoPublic();

private:
	int atrPrivado;
	int metodoPrivado();

protected:
	int atrProtected;
	int metodoProtected();
};

