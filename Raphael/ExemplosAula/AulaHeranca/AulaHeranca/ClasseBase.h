#pragma once
class ClasseBase
{
public:
	ClasseBase();
	~ClasseBase();
	int atrPublico;
	int metodoPublic();
private:
	int atrPrivate;
	int metodoPrivate();
protected:
	int atrProtected;
	int metodoProtected();
};

