/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/08/24 01:51:56 $
 * $Log: aula0201c.c,v $
 * Revision 1.1  2018/08/24 01:51:56  karen.arcoverde
 * Initial revision
 *
 */


#include "aula0201.h"


ull 
CalcularMaximoDivisorComum(ull valor1 , ull valor2)
{	 
	ull resto;

	if ((valor1 == 0) && (valor2 == 0))
		return 0;

	if (valor2 == 0)
		return valor1;

	if (valor1 == 0)
		return valor2;



	/*Algoritmo de Euclides*/	

	for (resto = valor1 % valor2; resto != 0; resto = valor1 % valor2)
	{
		valor1 = valor2;
		valor2 = resto;
	}
	

	
	return valor2;
		

}


/*$RCSfile: aula0201c.c,v $*/
