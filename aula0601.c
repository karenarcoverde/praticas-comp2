/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/09/23 03:28:04 $
 * $Log: aula0601.c,v $
 * Revision 1.2  2018/09/23 03:28:04  karen.arcoverde
 * ajeitando o retangulo
 *
 * Revision 1.1  2018/09/23 02:04:20  karen.arcoverde
 * Initial revision
 *
 */



#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include "aula0601.h"



tipoErros
MostrarMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas)
{
	unsigned indiceLinhas, indiceColunas;
	
	system ("clear");
	
		
	if (maximoLinhas > NUMERO_MAXIMO_LINHAS || maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return erroDimensaoInvalida;

			
	for (indiceLinhas = 0; indiceLinhas < maximoLinhas; indiceLinhas++)
		for (indiceColunas = 0; indiceColunas < maximoColunas; indiceColunas++)
			if (monitor [indiceLinhas][indiceColunas] != apagado && monitor [indiceLinhas][indiceColunas] != aceso)
				return erroCaractereInvalido;


	if (monitor == NULL) 
		return erroMatrizNula;

	

	for (indiceLinhas = 0; indiceLinhas < maximoLinhas; indiceLinhas++)
	{
		for (indiceColunas = 0; indiceColunas < maximoColunas; indiceColunas++)
			printf(" %c\t ", (monitor[indiceLinhas][indiceColunas] == aceso)? ACESO:APAGADO);	

		
		printf("\n");

	
	}

	sleep(1);
	

	return ok;

}




tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas)
{
	unsigned indiceLinhas, indiceColunas;

	
	if (maximoLinhas > NUMERO_MAXIMO_LINHAS || maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return erroDimensaoInvalida;


	if (monitor == NULL) 
		return erroMatrizNula;

	
	for (indiceLinhas = 0; indiceLinhas < maximoLinhas; indiceLinhas++)
		for (indiceColunas = 0; indiceColunas < maximoColunas; indiceColunas++)
			monitor[indiceLinhas][indiceColunas] = apagado;


	MostrarMonitor (monitor, maximoLinhas, maximoColunas);

	return ok;

}




tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned ordenadaEsquerda, unsigned abscissaEsquerda, unsigned ordenadaDireita, unsigned abscissaDireita)
{

	unsigned indiceLinhas, indiceColunas;
	
	if (maximoLinhas > NUMERO_MAXIMO_LINHAS || maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return erroDimensaoInvalida;
		
	if (ordenadaEsquerda > maximoColunas || ordenadaDireita > maximoColunas || ordenadaDireita <= 1 || ordenadaEsquerda <= 1 || abscissaEsquerda > maximoLinhas || ordenadaEsquerda > maximoColunas || abscissaDireita <= 1 || abscissaEsquerda <= 1 || ordenadaEsquerda >= ordenadaDireita || abscissaEsquerda >= abscissaDireita) 
		return erroRetanguloInvalido;	

	if (monitor == NULL)
		return erroMatrizNula;

	for (indiceLinhas = 0; indiceLinhas < maximoLinhas; indiceLinhas++)
		for (indiceColunas = 0; indiceColunas < maximoColunas; indiceColunas++)
			if (monitor[indiceLinhas][indiceColunas] != apagado && monitor[indiceLinhas][indiceColunas] != aceso)
				return erroCaractereInvalido;
	
	for (indiceLinhas = abscissaEsquerda - 1; indiceLinhas < abscissaDireita; indiceLinhas++)
	{
		monitor[indiceLinhas][ordenadaEsquerda - 1] = aceso; 
		monitor[indiceLinhas][ordenadaDireita - 1] = aceso; 
	}
		
	for (indiceColunas = ordenadaEsquerda - 1; indiceColunas < ordenadaDireita; indiceColunas++)
	{
		monitor[abscissaEsquerda -1][indiceColunas] = aceso; 
		monitor[abscissaDireita -1][indiceColunas] = aceso; 

	}

	MostrarMonitor (monitor, maximoLinhas, maximoColunas);

	return ok;


}

tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned linha, unsigned coluna)
{
	unsigned indiceLinhas, indiceColunas;


	if (monitor == NULL)
		return erroMatrizNula;
	
	for (indiceLinhas = 0; indiceLinhas < maximoLinhas; indiceLinhas++)
		for (indiceColunas = 0; indiceColunas < maximoColunas; indiceColunas++)
			if (monitor[indiceLinhas][indiceColunas] != aceso && monitor[indiceLinhas][indiceColunas] != apagado)
				return erroCaractereInvalido;


	if (monitor[linha][coluna] == aceso)
		return ok;

	
	monitor[linha][coluna] = aceso;
	
	MostrarMonitor (monitor, maximoLinhas, maximoColunas);
	
		
	PreencherPoligono (monitor, maximoLinhas, maximoColunas, linha - 1 , coluna);
	PreencherPoligono (monitor, maximoLinhas, maximoColunas, linha, coluna - 1);
	PreencherPoligono (monitor, maximoLinhas, maximoColunas, linha + 1, coluna);
	PreencherPoligono (monitor, maximoLinhas, maximoColunas, linha, coluna + 1);



	return ok;

}
/*$RCSfile: aula0601.c,v $*/

