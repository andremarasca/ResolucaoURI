#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct bau Bau;
struct bau
{
    char *nome;
};
int decrescente(Bau A, Bau B)
{
    if (strlen(A.nome) >= strlen(B.nome))
        return 1;
    return 0;
}
void imprimir (Bau v[], int N)
{
    int i;
    printf("%s", v[0].nome);
    for (i = 1; i < N; i++)
        printf(" %s", v[i].nome);
    printf("\n");
}
void Merge (Bau vet[],int inicio,int meio,int fim, int (*meu_decisor)(Bau A, Bau B))
{
    Bau w[fim-inicio+1];
    int i = inicio,j = meio + 1,k=0;
    while(i <= meio && j <= fim)
    {