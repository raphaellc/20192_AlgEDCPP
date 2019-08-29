#include "AlocDim.h"

AlocDim::AlocDim()
{
	vetor = (int*)malloc(5 * sizeof(int));
	set_ultimaPosVetor(posMaxVetor);
	posMaxVetor = 4;
	for (int i = 0; i <= posMaxVetor; i++)
	{
		set_valor(i, NULL);
	}
}


AlocDim::~AlocDim()
{
}

void AlocDim::set_vetor(int _tamanho)
{
	vetor = (int*)malloc(_tamanho * sizeof(int));

	set_ultimaPosVetor(_tamanho);

	for (int i = 0; i <= posMaxVetor; i++)
	{
		set_valor(i, NULL);
	}
}

void AlocDim::set_valor(int _pos, int _valor)
{
	posVetor = _pos;
	valor = _valor;

	if (posVetor >= 0 && posVetor <= posMaxVetor )
	{
		vetor[posVetor] = valor;

	}
	else
	{
		printf("Está posição não existe! Sua posição máxima é de número " + posMaxVetor);
		posVetor = posMaxVetor;
	}
}

void AlocDim::set_ultimaPosVetor(int _pos)
{
	if (_pos > 0)
	{
		posMaxVetor = _pos - 1;
	}
	else
	{
		posMaxVetor = 0;
	}
	
}

void AlocDim::clear_valor(int _pos)
{
	posVetor = _pos;
	vetor[posVetor] = NULL;
}

void AlocDim::realocar_vetor(int _tamanho)
{
	vetor = (int*)realloc(vetor, _tamanho * sizeof(int));
	
	set_ultimaPosVetor(_tamanho);

	for (int i = 0; i <= posMaxVetor; i++)
	{
		set_valor(i, NULL);
	}
}

void AlocDim::desenhar()
{
	for (int i = 0; i <= posMaxVetor; i++)
	{
		printf(" | %d", vetor[i]);

		if (i == posMaxVetor)
		{
			printf(" |\n");
		}
	}
}
