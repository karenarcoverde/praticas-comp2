/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/15 18:32:59 $
 * $Log: aula0903.c,v $
 * Revision 1.2  2018/10/15 18:32:59  karen.arcoverde
 * *** empty log message ***
 *
 * Revision 1.1  2018/10/13 19:49:52  karen.arcoverde
 * Initial revision
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "aula0901.h"

#define NUMERO_ARGUMENTOS                                       3
#define NUMERO_ARGUMENTOS_INVALIDO                              1
#define ABRIR_ARQUIVO_INVALIDO                                  2
#define ESCREVER_ARQUIVO_INVALIDO                               3
#define ALOCAR_MEMORIA_INVALIDO                                 4
#define OK                                                      0

int
main (int argc, char *argv[])
{
	unsigned indice = 0;
	FILE *leitura, *escrita;
	char aux;
	char  *entrada;  
	byte *saida;
	unsigned numeroBytes;

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Numero de argumentos invalido. %s <nome arquivo> <nome arquivo> \n", argv [0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}

	if ((leitura = fopen (argv [1], "r")) == NULL)
	{	
		printf ("Erro ao abrir o arquivo %s\n", argv [1]);
		printf ("Erro (#%i) : %s\n", errno, strerror (errno));
		exit (ABRIR_ARQUIVO_INVALIDO);
	}

	if ((escrita = fopen (argv [2], "w")) == NULL)
	{
		printf ("Erro ao abrir o arquivo %s\n", argv [2]);
		printf ("Erro (#%i) : %s\n", errno, strerror (errno));
		fclose (leitura);
		exit (ABRIR_ARQUIVO_INVALIDO);
	}

	while (fread (&aux, 1, 1, leitura) > 0)
	{
		if (aux != EOS)
			indice ++;
	}

	fclose (leitura);


	if ((leitura = fopen (argv [1], "r")) == NULL)
	{
		printf ("Erro ao abrir o arquivo %s\n", argv [1]);
		printf ("Erro (#%i) : %s\n ", errno, strerror (errno));
		exit (ABRIR_ARQUIVO_INVALIDO);	
	}

	if (!(entrada = malloc (sizeof (char) *1*indice)))
	{	
		printf ("Erro de memoria\n");
		exit (ALOCAR_MEMORIA_INVALIDO);
	}

	indice = 0;

	while (fread (&aux, 1, 1, leitura) > 0)
	{
		if (aux != EOS)
		{
			entrada [indice] = aux;
			indice ++;

		}

	}


	if ((saida = malloc (sizeof (byte) *3* (indice / 4))) == NULL)
	{
		printf ("Erro de memoria\n");
		exit (ALOCAR_MEMORIA_INVALIDO);
	}

	DecodificarBase64 (entrada, saida, &numeroBytes);

	fprintf (escrita, "%s", saida);

	if (ferror (escrita))
	{
		printf ("Erro ao escrever no arquivo %s\n", argv [2]);
		printf ("Erro (#%i) : %s \n", errno, strerror (errno));
		fclose (leitura);
		fclose (escrita);
		exit (ESCREVER_ARQUIVO_INVALIDO);

	}

	fclose (leitura);
	fclose (escrita);
	free (entrada);
	free (saida);

	return OK;

}
/*$RCSfile: aula0903.c,v $*/

