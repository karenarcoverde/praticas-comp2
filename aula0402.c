/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/05 09:04:28 $
 * $Log: aula0402.c,v $
 * Revision 1.1  2018/09/05 09:04:28  karen.arcoverde
 * Initial revision
 *
 */

#include<stdio.h>
#include<stdlib.h>

#include "aula0401.h"


#define NUMERO_ARGUMENTOS                     3
#define NUMERO_ARGUMENTOS_INVALIDO            1           
#define OK                                    0
#define EOS                                   '\0'
#define ARGUMENTO_INVALIDO                    1



int
main (int argc, char *argv[])
{
	char *validacao;
	double base;
	int expoente; 

	
	if (argc != NUMERO_ARGUMENTOS)
        {
		printf("Uso %s <base: numero real> <expoente: numero inteiro>\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);		
	}

	
	base = strtod (argv[1], &validacao);
	
	
	if (*validacao != EOS)
	{
		printf("Argumento contem %c caractere invalido !!!\n", *validacao); 
		exit (ARGUMENTO_INVALIDO);
	}


	
	expoente = strtol (argv[2], &validacao, 10);
	
	
	if (*validacao != EOS)
	{
		printf("Argumento contem %c caractere invalido !!!\n", *validacao);
		exit (ARGUMENTO_INVALIDO);
	}

	
	
	printf ("Resultado de %s elevado a %s: %.04Lf\n", argv[1],argv[2], CalcularExponencial(base, expoente));



	return OK;

}

/*$RCSfile: aula0402.c,v $*/

