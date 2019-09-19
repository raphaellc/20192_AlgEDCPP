#pragma once
class Item
{
public:
	Item();
	Item(int p_id, int p_peso);
	~Item();
	int id, peso;
	enum TIPO_ITEM
	{
		POCAO,
		ESPADA,
		ESCUDO
	};

	int GetId();
};

