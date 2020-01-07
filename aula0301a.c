/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/08/28 22:32:55 $
 * $Log: aula0301a.c,v $
 * Revision 1.1  2018/08/28 22:32:55  karen.arcoverde
 * Initial revision
 *
 */

#include "aula0301.h" 

ull
CalcularTermoSerieFibonacci (unsigned short numero)
{
	if (numero <= 1)
		return numero;
	
	return CalcularTermoSerieFibonacci(numero-1) + CalcularTermoSerieFibonacci(numero-2);

}



/*$RCSfile: aula0301a.c,v $*/

