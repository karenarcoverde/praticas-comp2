/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/06 21:28:34 $
 * $Log: aula0806a.c,v $
 * Revision 1.1  2018/10/06 21:28:34  karen.arcoverde
 * Initial revision
 *
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "aula0804.h"


#define NUMERO_ARGUMENTOS                                      13 
#define NUMERO_ARGUMENTOS_INVALIDO                             1
#define ERRO_CARACTERE_INVALIDO                                1 
#define OK                                                     0




int
main (int argc, char *argv[])
{
	unsigned indice;
	char PisPasep [NUMERO_DIGITOS + 1];	


	
	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso do %s com numero de argumentos invalido!!!\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}

	
	for (indice = 0; indice < NUMERO_DIGITOS; indice++)
		PisPasep[indice] = argv[indice + 1][0];
	
	PisPasep[10] = argv[12][0];
	

	if (argv[11][0] != '-')
	{
		printf ("Sem uso do '-\' Pis/Pasep invalido!!!\n");
		exit (ERRO_CARACTERE_INVALIDO);
	}

	for (indice = 1; indice < NUMERO_DIGITOS; indice++)
	{
		
		if (argv[indice][0] < '0' || argv[indice][0] > '9')
		{
			printf ("Uso de caractere %c invalido!! Somente numeros inteiros nao negativos\n", argv[indice][0]);
			exit (ERRO_CARACTERE_INVALIDO);
		}
	}

	if (argv[12][0] < '0' || argv[12][0] > '9')
	{
		printf ("Uso de %c invalido!! Somente numeros inteiros nao negativos\n", argv[12][0]);
		exit (ERRO_CARACTERE_INVALIDO);
	}

	
	printf ("PIS/PASEP: %s\n", ((ValidarPisPasep(PisPasep)) == verdadeiro) ? "valido" : "invalido");


	return OK;
}	

/*$RCSfile: aula0806a.c,v $*/

