/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2018/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autora: Karen dos Anjos Arcoverde
 *
 * $Author: karen.arcoverde $
 * $Date: 2018/10/15 18:32:20 $
 * $Log: aula0901.c,v $
 * Revision 1.2  2018/10/15 18:32:20  karen.arcoverde
 * *** empty log message ***
 *
 * Revision 1.1  2018/10/13 19:46:34  karen.arcoverde
 * Initial revision
 *
 */



#include <string.h>
#include "aula0901.h"


tipoErros 
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida)
{
	unsigned indiceSaida = 0;
	unsigned indiceEntrada = 0;
	unsigned indice = 0;

		

	if (!entrada || !saida)
		return ponteiroNulo;	

	for (indice = 0; indice < numeroBytes; indice++)
		if (entrada[indice] < 32 || entrada[indice] > 127)
			return valorInvalido;


	while (numeroBytes >= 3)
	{
		saida [indiceSaida] = TABELA_BASE_64 [(entrada [indiceEntrada] >> 2) & (0x3F)];
		
		saida [indiceSaida + 1] = TABELA_BASE_64 [(entrada [indiceEntrada] << 4 | entrada [indiceEntrada + 1] >> 4) & (0x3F)]; 	  	
		
		saida [indiceSaida + 2] = TABELA_BASE_64 [(entrada [indiceEntrada + 1] << 2 | entrada [indiceEntrada + 2] >> 6) & (0x3F)];     		

		saida [indiceSaida + 3] = TABELA_BASE_64 [(entrada [indiceEntrada + 2]) & (0x3F)];  


		indiceSaida += 4; 

		
		if (indiceSaida % COMPRIMENTO_MAXIMO == 0)	
		{
			saida [indiceSaida] = '\r';		
			saida [indiceSaida + 1] = '\n';
			indiceSaida += 2;
		}
	


		indiceEntrada += 3;
		numeroBytes -= 3;

	}
	


	if (numeroBytes == 2)
	{	
		saida [indiceSaida] = TABELA_BASE_64 [(entrada [indiceEntrada] >> 2) & (0x3F)];
					
		saida [indiceSaida + 1] = TABELA_BASE_64 [(entrada [indiceEntrada] << 4 | entrada [indiceEntrada + 1] >> 4) & (0x3F)];
		
		saida [indiceSaida + 2] = TABELA_BASE_64 [(entrada [indiceEntrada + 1] << 2) & (0x3C)];

		saida [indiceSaida + 3] = '=';
		

		indiceSaida += 4;


		if (indiceSaida % COMPRIMENTO_MAXIMO == 0)
		{
			saida [indiceSaida] = '\r';
			saida [indiceSaida + 1] = '\n';	
			indiceSaida += 2;
		}


		indiceEntrada += 2;
	}



	if (numeroBytes == 1)
	{

		saida [indiceSaida] = TABELA_BASE_64 [(entrada [indiceEntrada] >> 2) & (0x3F)];
		
		saida [indiceSaida + 1] = TABELA_BASE_64 [(entrada [indiceEntrada] << 4 & (0x30))];

		saida [indiceSaida + 2] = '=';

		saida [indiceSaida + 3] = '=';
		


		indiceSaida += 4;



		if (indiceSaida % COMPRIMENTO_MAXIMO == 0)
		{
			saida [indiceSaida] = '\r';
			saida [indiceSaida + 1] = '\n';
			indiceSaida += 2;
		}

		


		indiceEntrada += 1;

	}

	saida [indiceSaida] = EOS;
	indiceSaida += 1; 



	return ok;


}

tipoErros
EscolheIndiceBase64 (char number)
{
	unsigned indice;

	for (indice = 0; indice < strlen (TABELA_BASE_64); indice++)
		if (number == TABELA_BASE_64 [indice])
			return indice;
	return '\0';

}


tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes)
{
	unsigned valor_global = strlen (entrada);
	unsigned indiceSaida = 0;
	unsigned indiceEntrada = 0;
	unsigned maximo = 0;

	
	if (entrada [valor_global - 1] == '=')
		maximo = 4;

	while (valor_global > maximo)
	{
		if ((indiceEntrada % COMPRIMENTO_MAXIMO) == 0 && indiceEntrada != 0)
			indiceEntrada += 2; 

		saida [indiceSaida] = (byte) ((EscolheIndiceBase64 (entrada [indiceEntrada] << 2)) & (0xFC)) | 	((EscolheIndiceBase64 (entrada [indiceEntrada + 1] >> 4) & (0x03) ));

		saida [indiceSaida + 1] = (byte) (EscolheIndiceBase64 (entrada [indiceEntrada + 1]) << 4 | ((EscolheIndiceBase64 (entrada [indiceEntrada + 2] << 2) >> 4)) );

		saida [indiceSaida + 2] = (byte)  (EscolheIndiceBase64 (entrada [indiceEntrada + 2]) << 6 | EscolheIndiceBase64 (entrada [indiceEntrada + 3]));
	

		indiceSaida += 3;
		indiceEntrada += 4;
		if (indiceEntrada % 82 == 0)
			valor_global -= 2;

		valor_global -= 4;
	}



	if (maximo == 4)
	{
		if (entrada [strlen(entrada) - 2] == '=')
		{	
			if ((indiceEntrada % COMPRIMENTO_MAXIMO) == 0 && indiceEntrada != 0)
				indiceEntrada += 2;

			saida [indiceSaida] = (byte) (((EscolheIndiceBase64 (entrada [indiceEntrada]) << 2) & (0xFC)) | ((EscolheIndiceBase64 (entrada [indiceEntrada + 1]) >> 4) & (0x03)));

			indiceSaida ++;
		}

		else
		{
			if ((indiceEntrada % COMPRIMENTO_MAXIMO) == 0 && indiceEntrada != 0)
				indiceEntrada += 2;

			saida [indiceSaida] = (byte) (((EscolheIndiceBase64 (entrada [indiceEntrada]) << 2) & (0xFC)) | ((EscolheIndiceBase64 (entrada [indiceEntrada + 1]) >> 4) & (0x03)));

			saida [indiceSaida + 1] = (byte) (EscolheIndiceBase64 (entrada [indiceEntrada + 1]) << 4 | ((EscolheIndiceBase64 (entrada [indiceEntrada + 2]) << 2) >> 4));

			indiceSaida += 2;
		}




	}	
	*numeroBytes = indiceSaida;

	return ok;
}
/*$RCSfile: aula0901.c,v $*/

