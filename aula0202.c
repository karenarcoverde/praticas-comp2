/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/08/24 09:19:32 $
 * $Log: aula0202.c,v $
 * Revision 1.3  2018/08/24 09:19:32  karen.arcoverde
 * condicao de erro para valor1 = 0 e valor2 = 0
 *
 * Revision 1.2  2018/08/24 09:09:58  karen.arcoverde
 * strtol para strtoull
 *
 * Revision 1.1  2018/08/22 09:39:29  karen.arcoverde
 * Initial revision
 *
 */

#include <stdio.h>
#include "aula0201.h"
#include <stdlib.h>

#define NUMERO_ARGUMENTOS              3 

#define OK                             0
#define NUMERO_ARGUMENTOS_INVALIDO     1
#define ARGUMENTO_INVALIDO             2

#define EOS                            '\0'

int 
main (int argc, char *argv[])
{	
	char *validacao;
	ull valor1, valor2;
	
	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso: %s <inteiro nao negativo> <inteiro nao negativo>\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}





 	valor1 = strtoull(argv[1], &validacao, 10);
	if (*validacao !=  EOS)
        {
                printf ("Argumento contem caractere(s) invalido(s): %c !\n", *validacao);
         
                exit (ARGUMENTO_INVALIDO);
        }

	if (argv[1][0] == '-')
	{
		printf ("Argumento contem caractere(s) invalido(s): - !!!\n");
		exit (ARGUMENTO_INVALIDO);	
	}
	




	valor2 = strtoull(argv[2], &validacao, 10);		
	if (*validacao !=  EOS)
	{
		printf ("Argumento contem caractere(s) invalido(s): %c !\n", *validacao);	
		exit (ARGUMENTO_INVALIDO); 
	}

	if (argv[2][0] == '-')
	{
		printf ("Argumento contem caractere(s) invalido(s): %c !\n", *validacao);
		exit (ARGUMENTO_INVALIDO);
	}


	printf ("\n MDC entre %llu e %llu = %llu \n\n", valor1, valor2, CalcularMaximoDivisorComum (valor1,valor2));
	if ((valor1 == 0) && (valor2 == 0))
	{
		printf("Funcao nao pode receber dois argumentos iguais a zero\n"); 
		exit (ARGUMENTO_INVALIDO);
	}



	return OK;

}

		
/*$RCSfile: aula0202.c,v $*/

