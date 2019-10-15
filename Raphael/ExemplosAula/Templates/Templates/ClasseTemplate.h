#pragma once
template <class T>
class ClasseTemplate
{
public:
	T vetor[2];
	int contador = 0;
	ClasseTemplate();
	~ClasseTemplate();
	void adicionaElemento(T elemento);
	T obtemElemento(int posicao);
};

template<class T>
inline ClasseTemplate<T>::ClasseTemplate()
{
	 
}

template<class T>
inline ClasseTemplate<T>::~ClasseTemplate()
{
}

template<class T>
inline void ClasseTemplate<T>::adicionaElemento(T elemento)
{
	if (contador == 0) {
		vetor[0] = elemento;
		contador++;
	}
	else if(contador == 1) {
		vetor[1] = elemento;
		contador++;
	}
}

template<class T>
inline T ClasseTemplate<T>::obtemElemento(int posicao)
{
	return vetor[posicao];
}

