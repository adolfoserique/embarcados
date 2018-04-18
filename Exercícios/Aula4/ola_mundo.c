#include <stdio.h>

int main(int argc, const char * argv[])
{
   
   FILE *fp; // Declaracao da estrutura
   char string[10]="Ola Mundo";
   int i;
   fp=fopen ("ola_mundo.txt","w");
   if (!fp)
       printf ("Erro na abertura do arquivo.");
   else
	{
  for(i=0; string[i]; i++) putc(string[i], fp); /* Grava a string, caractere a
                                                caractere */
  putc('\n', fp);
  fclose(fp);
	}
   
   return 0;
}
