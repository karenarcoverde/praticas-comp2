/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/12 03:54:15 $
 * $Log: aula0501b.c,v $
 * Revision 1.1  2018/09/12 03:54:15  karen.arcoverde
 * Initial revision
 *
 */


#include "aula0401.h"
#include "aula0501.h"


float
CalcularSerieHarmonicaAlternada (unsigned long int numero)
{
	float resultado;
	resultado = 0;

	if (numero == 0)
		return 0;
	
	do 
	{
		if (numero % 2 == 0)
			resultado -= 1/(CalcularExponencial (numero, numero));

		else
			resultado += 1/(CalcularExponencial (numero, numero));

		numero --;
	}	
	while (numero > 0);

	
	return resultado;
}

/*$RCSfile: aula0501b.c,v $*/

