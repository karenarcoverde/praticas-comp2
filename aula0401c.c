/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/05 20:10:22 $
 * $Log: aula0401c.c,v $
 * Revision 1.1  2018/09/05 20:10:22  karen.arcoverde
 * Initial revision
 *
 */

#include <math.h>
#include "aula0401.h"

long double
CalcularExponencial (double base, int expoente)
{

	double auxiliar;
	auxiliar = base;	


	if (base == 0 && expoente < 0)
		return (INFINITY);
	
	if (expoente == 0)
		return 1;	
	
	if (expoente < 0)
	{
		for (; expoente != -1; expoente++)
			base *= auxiliar;

		return 1/base;
	}

	
	for(; expoente != 1; expoente--)
		base *= auxiliar;


	return base;


}


/*$RCSfile: aula0401c.c,v $*/

