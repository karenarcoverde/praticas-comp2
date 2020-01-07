/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/06 00:00:23 $
 * $Log: aula0801.h,v $
 * Revision 1.2  2018/10/06 00:00:23  karen.arcoverde
 * mudanca de falso = 1
 *
 * Revision 1.1  2018/10/05 19:36:22  karen.arcoverde
 * Initial revision
 *
 */




#ifndef _AULA0801_ 
#define _AULA0801_ "@(#)aula0801.h $Revision: 1.2 $" 
 
#define NUMERO_DIGITOS                               10



typedef unsigned char byte;
typedef enum {falso, verdadeiro} boolean;

byte
GerarDigitoVerificadorPisPasep (byte [NUMERO_DIGITOS]); 


boolean
ValidarPisPasep (byte PisPasep[NUMERO_DIGITOS + 1]); 






#endif


/*$RCSfile: aula0801.h,v $*/

