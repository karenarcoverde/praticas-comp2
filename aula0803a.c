/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/06 00:05:27 $
 * $Log: aula0803a.c,v $
 * Revision 1.1  2018/10/06 00:05:27  karen.arcoverde
 * Initial revision
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "aula0801.h"

#define NUMERO_ARGUMENTOS                                                     12
#define NUMERO_ARGUMENTOS_INVALIDO                                            1
#define CARACTERE_INVALIDO                                                    1
#define EOS                                                                   '\0'
#define OK                                                                    0



int 
main (int argc, char *argv[])
{
	char *validacao;
	unsigned indice;
	byte PisPasep [NUMERO_DIGITOS + 1];
	

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso %s com numero de argumentos invalidos\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}


	for (indice = 1; indice < NUMERO_ARGUMENTOS; indice++)
	{	
	
		if (argv[indice][0] == '-')
		{	
			printf ("Uso do caractere '-\' invalido!!!\n");
		        exit (CARACTERE_INVALIDO);
		}

		PisPasep [indice - 1] = (byte) strtol (argv[indice], &validacao, 10);
		
		if (*validacao != EOS)
		{
			printf ("Uso de caractere %c invalido!!\n", *validacao);
			exit (CARACTERE_INVALIDO);
		}	
	}

	
	printf ("PIS/PASEP %s\n", ((ValidarPisPasep (PisPasep)) == 1) ? "valido" : "invalido");

	return OK;

}


/*$RCSfile: aula0803a.c,v $*/

