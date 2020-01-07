/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/10 21:34:32 $
 * $Log: aula0804.c,v $
 * Revision 1.2  2018/10/10 21:34:32  karen.arcoverde
 * *** empty log message ***
 *
 * Revision 1.1  2018/10/06 21:27:51  karen.arcoverde
 * Initial revision
 *
 *
 */


#include "aula0804.h"


char
GerarDigitoVerificadorPisPasep (char *PisPasep)
{
	unsigned soma = 0;
	unsigned indice;
	byte resto;
	byte PisPasep_byte [NUMERO_DIGITOS]; 

	
	for (indice = 0; indice < NUMERO_DIGITOS; indice++)
		PisPasep_byte [indice] = PisPasep [indice] - '0';
	
	soma += PisPasep_byte[0]*3 + PisPasep_byte[1]*2; 	
	
	for (indice = 0; indice < NUMERO_DIGITOS - 2; indice++)
		soma += PisPasep_byte[indice + 2] * (9 - indice);
		

	resto = (byte) (soma % 11); 	
	
	if (resto == 0 || resto == 1)
		return (char) '0';



	return (char) (11 - resto) + '0';

}


boolean
ValidarPisPasep (char *PisPasep)
{
	byte DigitoVerificador;

	DigitoVerificador = GerarDigitoVerificadorPisPasep (PisPasep);

	if (PisPasep [NUMERO_DIGITOS] == DigitoVerificador)
		return verdadeiro;

	return falso;



}
/*$RCSfile: aula0804.c,v $*/

