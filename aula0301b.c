/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/08/28 23:17:27 $
 * $Log: aula0301b.c,v $
 * Revision 1.2  2018/08/28 23:17:27  karen.arcoverde
 * *** empty log message ***
 *
 * Revision 1.1  2018/08/28 22:37:37  karen.arcoverde
 * Initial revision
 *
 * Revision 1.1  2018/08/28 22:32:55  karen.arcoverde
 * Initial revision
 *
 */

#include "aula0301.h" 

ull
CalcularTermoSerieFibonacci (unsigned short numero)
{
	ull fibonacci, fibo1, fibo2;
	unsigned short indice = 0;

	fibo1 = 0;
	fibo2 = 1;



	if (numero <= 1)
		return numero;

	do
	{
		fibonacci = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fibonacci;
		indice++;

	}	
	while (indice <= numero-2);
	
	
	return fibonacci;

}



/*$RCSfile: aula0301b.c,v $*/

