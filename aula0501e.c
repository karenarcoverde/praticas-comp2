/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/12 22:38:42 $
 * $Log: aula0501e.c,v $
 * Revision 1.1  2018/09/12 22:38:42  karen.arcoverde
 * Initial revision
 *
 */


#include "aula0401.h"
#include "aula0501.h"
#include <math.h>


float
CalcularSerieHarmonicaAlternada (unsigned long int numero)
{
	if (numero == 0)
		return 0;

	if (numero % 2 == 0)
		return (-(1/(pow (numero, numero))) + CalcularSerieHarmonicaAlternada (numero - 1));

	return (1/(pow (numero, numero)) + CalcularSerieHarmonicaAlternada (numero - 1));


}

/*$RCSfile: aula0501e.c,v $*/

