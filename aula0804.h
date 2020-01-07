/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/06 21:28:07 $
 * $Log: aula0804.h,v $
 * Revision 1.1  2018/10/06 21:28:07  karen.arcoverde
 * Initial revision
 *
 * 
 */




#ifndef _AULA0801_ 
#define _AULA0801_ "@(#)aula0801.h $Revision: 1.1 $" 
 
#define NUMERO_DIGITOS                               10



typedef unsigned char byte;
typedef enum {falso, verdadeiro} boolean;

char
GerarDigitoVerificadorPisPasep (char *PisPasep); 


boolean
ValidarPisPasep (char *PisPasep); 


#endif


/*$RCSfile: aula0804.h,v $*/
