/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/06 21:28:19 $
 * $Log: aula0805a.c,v $
 * Revision 1.1  2018/10/06 21:28:19  karen.arcoverde
 * Initial revision
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "aula0804.h"

#define NUMERO_ARGUMENTOS                                                       11
#define NUMERO_ARGUMENTOS_INVALIDO                                              1
#define EOS                                                                     '\0'
#define OK                                                                      0
#define ERRO_CARACTERE_INVALIDO                                                 1



int 
main (int argc, char *argv[])
{
	unsigned indice;
	char PisPasep [NUMERO_DIGITOS];	
	


	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso do %s errado!! Numero de argumentos invalido\n",  argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}
		

	
	for (indice = 1; indice < NUMERO_ARGUMENTOS; indice++)
	{
		
		PisPasep[indice-1] = argv[indice][0];		
		
	
		if (argv [indice][0] < '0' || argv [indice][0] > '9')
		{ 
			printf ("Uso do caractere %c invalido!!!!!\n", argv [indice][0]);
			exit (ERRO_CARACTERE_INVALIDO);
		}
	}
	


	printf ("Digito verificador: %c\n", GerarDigitoVerificadorPisPasep (PisPasep));



	return OK;	

	
}

/*$RCSfile: aula0805a.c,v $*/

