
#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
  char nome[25];
  int idade;
}qualquer;

int
main (int argc, char **argv)
{
	qualquer *novo;
        novo = malloc (sizeof(qualquer));
	novo->idade = 15;
	printf ("%u\n", novo->idade);
	return 0;
}
