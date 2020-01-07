/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/08/28 22:32:59 $
 * $Log: aula0302.c,v $
 * Revision 1.1  2018/08/28 22:32:59  karen.arcoverde
 * Initial revision
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "aula0301.h"

#define NUMERO_ARGUMENTOS                     2
#define NUMERO_ARGUMENTOS_INVALIDO            1
#define ARGUMENTO_INVALIDO                    1
#define OK                                    0 
#define EOS                                   '\0'


int 
main (int argc, char *argv[])
{
	char *validacao;
	unsigned short indice, numero;
	


	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso %s <inteiro nao negativo>\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}

	

	if (argv[1][0] == '-')
	{
		printf ("Argumento contem caractere \"-\" invalido !!!\n");
		exit (ARGUMENTO_INVALIDO);
	}	
	


	numero = (unsigned short) strtoul (argv[1], &validacao, 10);
	
	if (*validacao != EOS)
	{
		printf("Uso do caractere \"%c\" invalido !!!\n", *validacao);
		exit (ARGUMENTO_INVALIDO);  
	}





	for (indice = 0; indice <= numero; indice++)
		printf("F (%hu) = %llu\n", indice, CalcularTermoSerieFibonacci(indice));  



	return OK;

}

/*$RCSfile: aula0302.c,v $*/

