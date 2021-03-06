/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/29 00:45:59 $
 * $Log: aula0702.c,v $
 * Revision 1.1  2018/09/29 00:45:59  karen.arcoverde
 * Initial revision
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "aula0701.h"

#define EOS                                                        '\0'  
#define OK                                                         0
#define NUMERO_ARGUMENTOS                                          (PRIMEIRA_LINHA*PRIMEIRA_COLUNA) + (SEGUNDA_LINHA*SEGUNDA_COLUNA) + 1                             
#define NUMERO_ARGUMENTOS_INVALIDO                                 1
#define CARACTERE_INVALIDO                                         2

int
main (int argc, char *argv[])
{

	char *validacao;
	unsigned indiceLinhas, indiceColunas, numero_elementos;

	float primeiraMatriz[PRIMEIRA_LINHA][PRIMEIRA_COLUNA], segundaMatriz[SEGUNDA_LINHA][SEGUNDA_COLUNA], resultadoMultiplicacao[PRIMEIRA_LINHA][SEGUNDA_COLUNA];
	

	numero_elementos = 1;

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf("Uso %s com numero de argumentos invalidos!!!\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}
	
		
	for (indiceLinhas = 0; indiceLinhas < PRIMEIRA_LINHA; indiceLinhas++)
		for (indiceColunas = 0; indiceColunas < PRIMEIRA_COLUNA; indiceColunas++)
		{	
			primeiraMatriz[indiceLinhas][indiceColunas] = strtof (argv[numero_elementos], &validacao);
			
			if (*validacao != EOS)
			{
				printf("Uso do %c invalido!!!!!\n", *validacao); 
				exit (CARACTERE_INVALIDO);
			}
	
			numero_elementos++;		
		}

	
	

	for (indiceLinhas = 0; indiceLinhas < SEGUNDA_LINHA; indiceLinhas++)
		for (indiceColunas = 0; indiceColunas < SEGUNDA_COLUNA; indiceColunas++)
		{
			segundaMatriz[indiceLinhas][indiceColunas] = strtof (argv[numero_elementos], &validacao);
				
			if (*validacao != EOS)
			{
				printf("Uso do %c invalido!!!!!\n",*validacao);	
				exit (CARACTERE_INVALIDO);
		
			}
			
			numero_elementos++;
		}



	MultiplicarMatrizes(primeiraMatriz, segundaMatriz, resultadoMultiplicacao);

		
	for (indiceLinhas = 0; indiceLinhas < PRIMEIRA_LINHA; indiceLinhas++)
	{
		for (indiceColunas = 0; indiceColunas < SEGUNDA_COLUNA; indiceColunas++)
			printf("%f\t", resultadoMultiplicacao[indiceLinhas][indiceColunas]);

		printf("\n");
	}



	return OK;
}
/*$RCSfile: aula0702.c,v $*/

