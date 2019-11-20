#include "ArvoreBinaria.h"
#include <iostream>

using namespace std;

ArvoreBinaria::ArvoreBinaria()
{
	raiz = nullptr;
}


ArvoreBinaria::~ArvoreBinaria()
{
}

void ArvoreBinaria::inserir(int _valor)
{
	Nodo * n = new Nodo;
	n->dado = _valor;

	if (raiz == nullptr)
	{
		raiz = n;
		raiz->esq = nullptr;
		raiz->dir = nullptr;
	}
	else
	{
		inserir(_valor, raiz);
	}
}

Nodo * ArvoreBinaria::buscar(int _valor)
{
	if (raiz != nullptr)
	{
		return buscar(_valor, raiz);
	}
	else
	{
		return nullptr;
	}
}

void ArvoreBinaria::deletar(int _valor)
{
	if (raiz != nullptr)
	{
		deletar(_valor, raiz);
	}

}

void ArvoreBinaria::visitarPreOrdem()
{
	if (raiz != nullptr)
	{
		cout << raiz->dado << " ";
		if (raiz->esq != nullptr)
		{
			visitarPreOrdem(raiz->esq);
		}
		if (raiz->dir != nullptr)
		{
			visitarPreOrdem(raiz->dir);
		}
	}
}

void ArvoreBinaria::visitarCentral()
{
	if (raiz != nullptr)
	{
		if (raiz->esq != nullptr)
		{
			visitarPreOrdem(raiz->esq);
		}
		cout << raiz->dado << " ";
		if (raiz->dir != nullptr)
		{
			visitarPreOrdem(raiz->dir);
		}
	}
}

void ArvoreBinaria::visitarPosOrdem()
{
	if (raiz != nullptr)
	{
		if (raiz->esq != nullptr)
		{
			visitarPreOrdem(raiz->esq);
		}
		if (raiz->dir != nullptr)
		{
			visitarPreOrdem(raiz->dir);
		}
		cout << raiz->dado << " ";
	}
}

void ArvoreBinaria::inserir(int _valor, Nodo * _raiz)
{
	if (_valor < _raiz->dado)
	{
		if (_raiz->esq == nullptr)
		{
			Nodo * n = new Nodo;
			n->dado = _valor;
			n->esq = nullptr;
			n->dir = nullptr;
			_raiz->esq = n;
		}
		else
		{
			inserir(_valor, _raiz->esq);
		}
	}
	if (_valor >= _raiz->dado)
	{
		if (_raiz->dir == nullptr)
		{
			Nodo * n = new Nodo;
			n->dado = _valor;
			n->esq = nullptr;
			n->dir = nullptr;
			_raiz->dir = n;
		}
		else
		{
			inserir(_valor, _raiz->dir);
		}
	}
}

void ArvoreBinaria::inserir(Nodo * _aux, Nodo * _raiz)
{
	if (_aux->dado < _raiz->dado)
	{
		if (_raiz->esq == nullptr)
		{
			_raiz->esq = _aux;
		}
		else
		{
			inserir(_aux, _raiz->esq);
		}
	}
	if (_aux->dado >= _raiz->dado)
	{
		if (_raiz->dir == nullptr)
		{
			_raiz->dir = _aux;
		}
		else
		{
			inserir(_aux, _raiz->dir);
		}
	}
}

Nodo * ArvoreBinaria::buscar(int _valor, Nodo * _raiz)
{
	if (_valor < _raiz->dado)
	{
		if (_raiz->esq == nullptr)
		{
			return _raiz;
		}
		buscar(_valor, _raiz->esq);
	}
	if (_valor >= _raiz->dado)
	{
		if (_raiz->dir == nullptr)
		{
			return _raiz;
		}
		buscar(_valor, _raiz->dir);
	}
}

void ArvoreBinaria::deletar(int _valor, Nodo * _raiz)
{
	//deletando s� a raiz
	if (_raiz != nullptr)
	{
		if (_valor == _raiz->dado)
		{
			Nodo * aux = new Nodo;
			*aux = *_raiz;
			delete _raiz;
			raiz = aux->dir;
			inserir(aux->esq, raiz);
		}
	}
	else
	{
		if (_valor < _raiz->dado);
		{
			buscar(_valor, _raiz->esq);
		}
		if (_valor >= _raiz->dado);
		{
			buscar(_valor, _raiz->dir);
		}
	}
}

void ArvoreBinaria::visitarPreOrdem(Nodo * _n)
{
	cout << _n->dado << " ";
	if (_n->esq != nullptr)
	{
		visitarPreOrdem(_n->esq);
	}
	if (_n->dir != nullptr)
	{
		visitarPreOrdem(_n->dir);
	}
}

void ArvoreBinaria::visitarCentral(Nodo * _n)
{
	
	if (_n->esq != nullptr)
	{
		visitarPreOrdem(_n->esq);
	}
	cout << _n->dado << " ";
	if (_n->dir != nullptr)
	{
		visitarPreOrdem(_n->dir);
	}
}

void ArvoreBinaria::visitarPosOrdem(Nodo * _n)
{
	if (_n->esq != nullptr)
	{
		visitarPreOrdem(_n->esq);
	}
	if (_n->dir != nullptr)
	{
		visitarPreOrdem(_n->dir);
	}
	cout << _n->dado << " ";
}
