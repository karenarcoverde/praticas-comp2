/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/25 18:38:34 $
 * $Log: aula1001.c,v $
 * Revision 1.1  2018/10/25 18:38:34  karen.arcoverde
 * Initial revision
 *
 */

#ifdef __linux__
#define _XOPEN_SOURCE	500
#endif

#include <stdio.h> 
#include <stdlib.h>
#include <errno.h>
#include <string.h>


#define QUANTIDADE_CARACTERES_ARQUIVO                         1024
#define NUMERO_ARGUMENTOS                                     2
#define NUMERO_ARGUMENTOS_INVALIDO                            1
#define QUANTIDADE_CARACTERES_EXCEDIDO                        3
#define ABRIR_ARQUIVO_INVALIDO                                4
#define GERAR_ARQUIVO_TEMPORARIO_INVALIDO                     5
#define ESCREVER_ARQUIVO_TEMPORARIO_INVALIDO                  6
#define ERRO_FECHAR_ARQUIVO                                   7
#define ERRO_RENAME                                           8
#define OK                                                    0


int
main (int argc, char *argv [])
{
	FILE *leitura, *escrita;
	char nome_template [11];
	char buffer [QUANTIDADE_CARACTERES_ARQUIVO];
	char nome_arquivobackup [QUANTIDADE_CARACTERES_ARQUIVO];
	int identificador_template;	
	int resultado1, resultado2; 

	if (argc != NUMERO_ARGUMENTOS)
	{		
		printf ("Uso %s <nome arquivo Unix>\n", argv [0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}
	
	/* conferindo se o numero de caracteres esta dentro do comprimento permitido */
	if (strlen (argv[1]) > QUANTIDADE_CARACTERES_ARQUIVO)
	{
		printf ("Numero de caracteres excede O PERMITIDO!!!\n");
		exit (QUANTIDADE_CARACTERES_EXCEDIDO);
	}
	
	if (!(leitura = fopen (argv [1], "r")))
	{
		printf ("Erro ao abrir o arquivo\n");
		printf ("Erro (#%i) : %s\n", errno, strerror (errno));
		fclose (leitura); 
		exit (ABRIR_ARQUIVO_INVALIDO);	
	}
 
	/* criando nome do arquivo temporario*/
	strcpy (nome_template, "kaka_XXXXXX");  
	
	/* gerando nome do arquivo temporario */
	if ((identificador_template = mkstemp (nome_template)) == -1) 
	{
		printf ("Erro ao gerar o arquivo temporario\n");
		printf ("Erro (#%i) : %s\n", errno, strerror (errno)); 	
		fclose (leitura);
		exit (GERAR_ARQUIVO_TEMPORARIO_INVALIDO); 
	}
	
	/* abrindo arquivo temporario para escrever o conteudo convertido*/
	if (!(escrita = fdopen (identificador_template, "w")))		
	{
		printf ("Erro ao abrir o arquivo temporario\n");
		printf ("Erro (#%i) : %s\n", errno, strerror (errno));
		fclose (leitura);
		exit (ABRIR_ARQUIVO_INVALIDO);			
	}
	
	/* escrevendo no arquivo temporario o conteudo convertido*/
	while (fgets (buffer, QUANTIDADE_CARACTERES_ARQUIVO + 1, leitura))
	{
		if (buffer [strlen(buffer) - 1] == '\n')
		{
			buffer [strlen(buffer) -1] = '\0';
			fprintf (escrita, "%s\r\n", buffer); /* sempre que tiver \n bota o \r\n */
		}

		else /* nao encontrou o \n. seria o caso que a linha tem mais que 1024 caracteres */
			fprintf (escrita, "%s", buffer); /* entao nao bota o\r\n porque nao pulou de linha */
	}

	if (ferror(leitura))
	{
		printf ("Erro ao escrever no arquivo temporario %s\n", nome_template);
		printf ("Erro (#%i) : %s\n", errno, strerror (errno));
		fclose (leitura);
		fclose (escrita);
		exit (ESCREVER_ARQUIVO_TEMPORARIO_INVALIDO);
	}
	

	snprintf (nome_arquivobackup, strlen (argv [1]) + 5, "%s.bak", argv [1]);

	resultado1 = rename (argv [1], nome_arquivobackup);
	resultado2 = rename (nome_template, argv [1]);

	if (resultado1 != 0 || resultado2 != 0)
	{
		printf ("Rename : %s\n", strerror (errno));
		exit (ERRO_RENAME);
	}



	if ((fclose (leitura)) != 0)
	{
		printf ("Erro ao fechar o arquivo\n");
		printf ("Erro (#%i) : %s \n", errno, strerror (errno));
		exit (ERRO_FECHAR_ARQUIVO);
	}

	if ((fclose (escrita)) != 0)
	{
		printf ("Erro ao fechar o arquivo temporario\n");
		printf ("Erro (#%i) : %s \n", errno, strerror (errno));
		exit (ERRO_FECHAR_ARQUIVO);
	}

	return OK; 
}
/*$RCSfile: aula1001.c,v $*/

