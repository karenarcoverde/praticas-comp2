/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/05 19:36:45 $
 * $Log: aula0802a.c,v $
 * Revision 1.1  2018/10/05 19:36:45  karen.arcoverde
 * Initial revision
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "aula0801.h"

#define NUMERO_ARGUMENTOS                                                       11
#define NUMERO_ARGUMENTOS_INVALIDO                                              1
#define EOS                                                                     '\0'
#define OK                                                                      0
#define ERRO_CARACTERE_INVALIDO                                                 1



int 
main (int argc, char *argv[])
{
	unsigned indice;
	byte PisPasep [NUMERO_DIGITOS];	
	char *validacao;


	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso do %s errado!! Numero de argumentos invalido\n",  argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}
		

	
	for (indice = 1; indice < NUMERO_ARGUMENTOS; indice++)
	{	
 
	
		if (argv[indice][0] == '-')
		{
			printf("Uso do %c invalido!!!\n", argv[indice][0]);
			exit (ERRO_CARACTERE_INVALIDO);	
		}
		
		PisPasep[indice-1] = (byte) strtol (argv[indice], &validacao, 10);		
	
		
					
		if (*validacao != EOS)
		{ 
			printf ("Uso do caractere %c invalido!!!!!\n", *validacao);
			exit (ERRO_CARACTERE_INVALIDO);
		}
	}
	
	for (indice = 0; indice < NUMERO_ARGUMENTOS; indice++)
		printf ("%u\n", PisPasep[indice]);

	printf ("Digito verificador: %hhu\n", GerarDigitoVerificadorPisPasep (PisPasep));



	return OK;	

	
}

/*$RCSfile: aula0802a.c,v $*/

