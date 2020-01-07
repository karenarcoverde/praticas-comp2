#include <stdio.h>
#include <stdlib.h>

struct pessoa {
  char nome[25];
  int idade;
};

int
main (int argc, char **argv)
{
	struct pessoa novo;
	novo.idade = 15;
	printf ("%u\n", novo.idade);
	return 0;
}
