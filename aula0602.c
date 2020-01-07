/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/23 02:04:28 $
 * $Log: aula0602.c,v $
 * Revision 1.1  2018/09/23 02:04:28  karen.arcoverde
 * Initial revision
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "aula0601.h"

#define EOS                                                  '\0'
#define NUMERO_ARGUMENTOS                                    8+1
#define NUMERO_ARGUMENTOS_INVALIDO                           1
#define ARGUMENTO_INVALIDO                                   2



int
main (int argc, char *argv[])
{
	unsigned argumentos[8], indice, indiceArgumentos;
	char *validacao;
	tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS];
		
	argumentos[1] = 0;
	

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso %s  <maximoLinhas> <maximoColunas> <xEsquerdo> <yEsquerdo> <xDireito> <yDireito> <xPonto> <yPonto>\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);

	}



	for (indiceArgumentos = 1; indiceArgumentos < NUMERO_ARGUMENTOS; indiceArgumentos++)
		if (argv[indiceArgumentos][0] == '-')
		{
			printf("Uso invalido do '-\' !!!!!!!\n");
			exit (ARGUMENTO_INVALIDO);
		}

	for (indice = 0; indice < (NUMERO_ARGUMENTOS -1); indice++)
	{
		argumentos[indice] = strtoul (argv[indice+1], &validacao, 10);
		
		if (*validacao != EOS)
		{
			printf ("Uso do %c invalido!!!!!\n", *validacao);	
			exit (ARGUMENTO_INVALIDO);
		}
	}

	

	
	LimparMonitor (monitor, argumentos[0], argumentos[1]);
	DesenharRetangulo (monitor, argumentos[0], argumentos[1], argumentos[2], argumentos[3], argumentos[4], argumentos[5]);
	MostrarMonitor (monitor, argumentos[0], argumentos[1]);
	PreencherPoligono (monitor, argumentos[0], argumentos[1], argumentos[6] - 1, argumentos[7] - 1); 	


	return ok;

}
/*$RCSfile: aula0602.c,v $*/

