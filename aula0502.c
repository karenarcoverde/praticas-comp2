/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/12 03:05:13 $
 * $Log: aula0502.c,v $
 * Revision 1.1  2018/09/12 03:05:13  karen.arcoverde
 * Initial revision
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "aula0501.h"

#define NUMERO_ARGUMENTOS                         2
#define NUMERO_ARGUMENTOS_INVALIDO                1
#define ARGUMENTO_INVALIDO                        1 
#define EOS                                       '\0'
#define OK                                        0


int 
main (int argc, char *argv[])
{
	char *validacao;
	unsigned long int numero;
	
	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso %s <numero>\n", argv[0]); 
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}
	
	numero = strtoul (argv[1], &validacao, 10);
	
	if (argv[1][0] == '-')
	{
		printf("Uso do \"-\"  invalido !!!\n");	
		exit (ARGUMENTO_INVALIDO);
	}
	
	if (*validacao != EOS)
	{
		printf("Uso do caractere %c invalido !!!!\n", *validacao);
		exit (ARGUMENTO_INVALIDO);
	}	


	printf ("S(%lu) = %f \n", numero, CalcularSerieHarmonicaAlternada(numero));


	return OK; 

}

/*$RCSfile: aula0502.c,v $*/

