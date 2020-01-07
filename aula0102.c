/*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2018/2
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Karen dos Anjos Arcoverde
*
*$Author: karen.arcoverde $
*$Date: 2018/08/17 02:56:44 $
*$Log: aula0102.c,v $
*Revision 1.2  2018/08/17 02:56:44  karen.arcoverde
**** empty log message ***
*
*Revision 1.1  2018/08/16 20:01:39  karen.arcoverde
*Initial revision
* 
*/

#include<stdio.h>

#define OK                          0


int
main()
{
	printf("\t\"Tipos Basicos\"\n ");

	printf("\nvoid:\n\t\t\t\t\t %lu %s\n",sizeof (void),(sizeof(void) > 1)? "bytes":"byte");
	printf("\nint: \n\t\t\t\t\t %lu %s\n",sizeof (int),(sizeof(int) > 1)? "bytes":"byte");
	printf("\nchar:\n\t\t\t\t\t %lu %s\n",sizeof (char),(sizeof(char) > 1)? "bytes":"byte");
	printf("\nfloat:\n\t\t\t\t\t %lu %s\n",sizeof (float),(sizeof(float) > 1)? "bytes":"byte");
	printf("\ndouble: \n\t\t\t\t\t %lu %s \n\n",sizeof (double),(sizeof(double) > 1)? "bytes":"byte");
	
	printf("\t\"Modificadores de Sinal\"\n");
	printf("\nunsigned:\n\t\t\t\t\t %lu %s\n", sizeof(unsigned),(sizeof(unsigned) > 1)? "bytes":"byte");
	printf("\nsigned:\n\t\t\t\t\t %lu %s\n", sizeof(signed),(sizeof(signed) > 1)? "bytes":"byte");
	
	return OK;
}

/* $RCSfile: aula0102.c,v $ */
