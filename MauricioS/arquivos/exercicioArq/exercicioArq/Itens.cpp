#include "Itens.h"



Itens::Itens()
{
}


Itens::~Itens()
{
}

void Itens::setId(int p_id)
{
	id = p_id;
}

int Itens::getId()
{
	return id;
}

void Itens::setPeso(int p_peso)
{
	peso = p_peso;
}

int Itens::getPeso()
{
	return peso;
}

TIPO_ITEM Itens::getItem()
{
	return tipoItemVar;
}

void Itens::setItem(TIPO_ITEM p_item)
{
	tipoItemVar = p_item;
}
