/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/08 14:46:21 $
 * $Log: aula0801.c,v $
 * Revision 1.3  2018/10/08 14:46:21  karen.arcoverde
 * *** empty log message ***
 *
 * Revision 1.2  2018/10/06 00:05:15  karen.arcoverde
 * *** empty log message ***
 *
 * Revision 1.1  2018/10/05 19:36:34  karen.arcoverde
 * Initial revision
 *
 */


#include "aula0801.h"


byte
GerarDigitoVerificadorPisPasep (byte PisPasep[NUMERO_DIGITOS])
{
	unsigned soma = 0;
	unsigned indice;
	byte resto;	

	soma += PisPasep[0]*3 + PisPasep[1]*2; 	
	
	for (indice = 0; indice < NUMERO_DIGITOS - 2; indice++)
		soma += PisPasep[indice + 2] * (9 - indice);
		

	resto = (byte) (soma % 11); 	
	
	if (resto == 0 || resto == 1)
		return (byte) 0;



	return (byte) (11 - resto);

}


boolean
ValidarPisPasep (byte PisPasep [NUMERO_DIGITOS + 1])
{
	
	byte DigitoVerificador;
	
	DigitoVerificador = GerarDigitoVerificadorPisPasep(PisPasep);


	if (PisPasep [NUMERO_DIGITOS] == DigitoVerificador)
		return verdadeiro;

	return falso;



}
/*$RCSfile: aula0801.c,v $*/

