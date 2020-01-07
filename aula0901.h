/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/15 18:32:29 $
 * $Log: aula0901.h,v $
 * Revision 1.2  2018/10/15 18:32:29  karen.arcoverde
 * *** empty log message ***
 *
 * Revision 1.1  2018/10/13 19:46:24  karen.arcoverde
 * Initial revision
 *
 */



#ifndef _AULA_0901_ 
#define _AULA_0901_ "@(#)aula0901.h $Revision: 1.2 $"

 
#define TABELA_BASE_64  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"                   
#define COMPRIMENTO_MAXIMO                                                                76
#define EOS                                                                              '\0'


typedef unsigned char byte;

typedef enum
{
	ok,
	valorInvalido,
	ponteiroNulo
 
} tipoErros;




tipoErros 
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida);


tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes);



#endif 

/*$RCSfile: aula0901.h,v $*/

