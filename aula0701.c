/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/29 00:45:52 $
 * $Log: aula0701.c,v $
 * Revision 1.1  2018/09/29 00:45:52  karen.arcoverde
 * Initial revision
 *
 */


#include "aula0701.h"


void
MultiplicarMatrizes (float primeiraMatriz [PRIMEIRA_LINHA][PRIMEIRA_COLUNA], float segundaMatriz [SEGUNDA_LINHA][SEGUNDA_COLUNA], float resultadoMultiplicacao [PRIMEIRA_LINHA][SEGUNDA_COLUNA])
{
	unsigned indiceLinhas, indiceColunas, contador;	


	for (indiceLinhas = 0; indiceLinhas < PRIMEIRA_LINHA; indiceLinhas++)
		for (indiceColunas = 0; indiceColunas < SEGUNDA_COLUNA; indiceColunas++)
		{
			resultadoMultiplicacao[indiceLinhas][indiceColunas] = 0;
			for (contador = 0; contador < PRIMEIRA_COLUNA; contador++) 	
				resultadoMultiplicacao[indiceLinhas][indiceColunas] += primeiraMatriz[indiceLinhas][contador] * segundaMatriz[contador][indiceColunas];
		}

}


/*$RCSfile: aula0701.c,v $*/

