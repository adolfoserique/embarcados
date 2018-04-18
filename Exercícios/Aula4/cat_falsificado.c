#include <stdio.h>
#include "bib_arqs.h"

void main(int argc, char **argv)
{
 char *c;
// FILE *fp;
// fp = fopen(argv[1], "r");
// le_arq_texto(argv[1], c);
 le_arq_texto("ola.txt", c);
 printf("%s\n", c);
// fclose(fp);
}
