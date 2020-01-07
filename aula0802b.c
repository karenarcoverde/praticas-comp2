/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/05 20:58:06 $
 * $Log: aula0802b.c,v $
 * Revision 1.1  2018/10/05 20:58:06  karen.arcoverde
 * Initial revision
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "aula0801.h"


#define NUMERO_ARGUMENTOS                                      2 
#define NUMERO_ARGUMENTOS_INVALIDO                             1
#define ERRO_CARACTERE_INVALIDO                                1 
#define OK                                                     0


int
main (int argc, char *argv[])
{
	unsigned indice;
	byte PisPasep [NUMERO_DIGITOS];	



	
	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso do %s com numero de argumentos invalido!!!\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}


	for (indice = 0; indice < NUMERO_DIGITOS; indice++)
	{
		if (argv[1][indice] < '0' || argv[1][indice] > '9')
		{
			printf ("Uso de caractere invalido!! Somente numeros inteiros nao negativos\n");
			exit (ERRO_CARACTERE_INVALIDO);
		}

		PisPasep[indice] = argv[1][indice] - '0';

	} 

	printf ("Digito verificador: %hhu\n", GerarDigitoVerificadorPisPasep (PisPasep));


	return OK;
}	

/*$RCSfile: aula0802b.c,v $*/

