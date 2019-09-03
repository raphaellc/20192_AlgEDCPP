#include "Coordenadas.h"

Coordenadas::Coordenadas()
{
}


Coordenadas::~Coordenadas()
{
}

void Coordenadas::setCoordenadas(float _x, float _y)
{
	if (_x > 0 && _x < 20) x = _x;
	if (_y > 0 && _y < 20) y = _y;
}
