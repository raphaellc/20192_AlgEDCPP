#pragma once
#include <iostream>
using namespace std;

class Nodo
{
public:
	Nodo() { esq = nullptr; dir = nullptr; dado = NULL; }
	~Nodo() { };

	Nodo *esq, *dir;
	int dado;
};

