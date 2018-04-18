#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
  FILE *fp;
  char nome[100];
  char idade[4];
  int i;
  fp = fopen("adolfo.txt","w");
  if(!fp)
  {
    /* Arquivo ASCII, para escrita */
    printf( "Erro na abertura do arquivo");
    exit(0);
  }
  printf("Digite o seu nome: ");
  gets(nome);
  printf("Digite a sua idade: ");
  gets(idade);
  fprintf(fp,"Nome: %s\n",nome);
  fprintf(fp,"Idade: %s anos\n",idade);
  fclose(fp);
  return 0;
}
