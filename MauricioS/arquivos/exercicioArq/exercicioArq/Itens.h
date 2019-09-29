#pragma once

enum TIPO_ITEM
{
	POCAO,
	ESPADA,
	ESCUDO
};

class Itens
{
public:
	Itens();
	~Itens();

	void setId(int p_id);
	int getId();
	void setPeso(int p_peso);
	int getPeso();
	TIPO_ITEM getItem();
	void setItem(TIPO_ITEM p_item);

	TIPO_ITEM tipoItemVar;

private:
	int id, peso;
};

