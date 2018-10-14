#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct bau Bau;
struct bau
{
    char nome[201];
};
int crescente(Bau A, Bau B)
{
    if (strcmp(A.nome, B.nome) <= 0)
        return 1;
    return 0;
}
void Merge (Bau vet[],int inicio,int meio,int fim, int (*meu_decisor)(Bau A, Bau B))
{
    Bau w[fim-inicio+1];
    int i = inicio,j = meio + 1,k=0;
    while(i <= meio && j <= fim)
    {
        if(meu_decisor(vet[i], vet[j]))
            w[k++] = vet[i++];
        else
            w[k++]  = vet[j++];
    }
    while(i <= meio)
        w[k++] = vet[i++];
    while(j <= fim)