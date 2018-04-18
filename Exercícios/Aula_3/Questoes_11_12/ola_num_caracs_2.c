#include <stdio.h>
#include <stdlib.h>
#include "num_caracs.h"

int main(int argc, char **argv)
{
	int i,c=0;
	for (i=0; i<argc; i++)
	{
		c = Num_Caracs(argv[i]) + c;
	}
	printf("Total de caracteres de entrada: %d\n", c);
	return 0;
}
