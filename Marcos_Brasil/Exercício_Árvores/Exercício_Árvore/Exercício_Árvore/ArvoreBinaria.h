#include "Nodo.h"

class ArvoreBinaria
{
public:
	ArvoreBinaria();
	~ArvoreBinaria();
	void inserir(int _valor);
	Nodo* buscar(int _valor);
	void deletar(int _valor);
	void visitarPreOrdem();
	void visitarCentral();
	void visitarPosOrdem();
	void visitarLargura();
	int altura(Nodo * _nodo);
	Nodo* getRaiz();
private:
	Nodo *raiz;
	void inserir(int _valor, Nodo* _raiz);
	void inserir(Nodo* _aux, Nodo* _raiz);
	Nodo* buscar(int _valor, Nodo* _raiz);
	void deletar(int _valor, Nodo* _raiz);
	void visitarPreOrdem(Nodo* _n);
	void visitarCentral(Nodo* _n);
	void visitarPosOrdem(Nodo* _n);
	void visitarLargura(Nodo* _n);
};