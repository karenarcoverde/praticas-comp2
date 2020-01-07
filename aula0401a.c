/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/05 09:12:07 $
 * $Log: aula0401a.c,v $
 * Revision 1.2  2018/09/05 09:12:07  karen.arcoverde
 * *** empty log message ***
 *
 * Revision 1.1  2018/09/05 09:04:20  karen.arcoverde
 * Initial revision
 *
 */


#include "aula0401.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


long double
CalcularExponencial (double base, int expoente)
{

	if (base == 0 && expoente < 0)
		return (INFINITY);
	
	if (expoente == 0)
		return  1;

	if (expoente > 0)
		return base * CalcularExponencial(base, expoente - 1);

	return (1/base * (CalcularExponencial(base, expoente + 1)));

}



/*$RCSfile: aula0401a.c,v $*/

