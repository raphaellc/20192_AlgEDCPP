#include "Item.h"

Item::Item()
{
	id = 0;
	peso = 100;
}

Item::Item(int p_id, int p_peso)
{
	id = p_id;
	peso = p_peso;
}


Item::~Item()
{
}

int Item::GetId()
{
	return id;
}
