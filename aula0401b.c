/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/05 19:59:12 $
 * $Log: aula0401b.c,v $
 * Revision 1.2  2018/09/05 19:59:12  karen.arcoverde
 * *** empty log message ***
 *
 * Revision 1.1  2018/09/05 19:57:58  karen.arcoverde
 * Initial revision
 *
 */



#include <math.h>
#include "aula0401.h"


long double
CalcularExponencial (double base, int expoente)
{
	double  auxiliar;
	auxiliar = base;


	if (base == 0 && expoente < 0)
		return (INFINITY);


	if (expoente == 0)
		return 1;

	if (expoente < 0)
	{
		if (expoente < -1)
			do
			{
				base *= auxiliar;
				expoente++;
			}
			while (expoente != -1);
			
		return 1/base;
	}

	if (expoente > 1)
		do
		{
			base *= auxiliar;
			expoente--;
		}
		while (expoente != 1);
	
	
	return base;

}
		


/*$RCSfile: aula0401b.c,v $*/

