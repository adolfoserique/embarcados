#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
  FILE *fp;
  int i;
  fp = fopen("adolfo.txt","w");
  if(!fp)
  {
    printf( "Erro na abertura do arquivo");
    exit(0);
  }
  fprintf(fp,"Nome: %s\n",argv[1]);
  fprintf(fp,"Idade: %s anos\n",argv[2]);
  fclose(fp);
  return 0;
}
