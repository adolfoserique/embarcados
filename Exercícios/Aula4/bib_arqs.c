#include <stdio.h>
#include "bib_arqs.h"
 
int tam_arq_texto(char *nome_arquivo)
{
 
    FILE *fp;
    long tamanho;   
    fp = fopen("nome_arquivo", "r");
    if (fp != NULL) 
    {
        // movimenta a posição corrente de leitura no arquivo 
        // para o seu fim
        fseek(fp, 0, SEEK_END);
 
        // pega a posição corrente de leitura no arquivo
        tamanho = ftell(fp);   
    }
    else return -1;
    fclose(fp);
    return tamanho;
}

void le_arq_texto(char *nome_arquivo, char *conteudo)
{
    int i = 0;
    FILE *fp;
    fp = fopen("nome_arquivo", "r");

    if (fp != NULL)
    {
	fseek(fp, 0, SEEK_SET);
	while (!feof(fp))
	{
        //Adiciona cada palavra no vetor
        conteudo[i] = getc(fp);
        i++;
    	}
    }
    //fclose(fp);
}
