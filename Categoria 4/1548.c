#include <stdio.h>
int decrescente(int A, int B)
{
    if (A >= B)
        return 1;
    return 0;
}
void Merge (int vet[],int inicio,int meio,int fim, int (*meu_decisor)(int A, int B))
{
    int w[fim-inicio+1];
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
        w[k++] = vet[j++];
    for(i=0; i<k; i++)
        vet[i+inicio] = w[i];
}
void MergeSort (int vet[],int inicio,int fim, int (*meu_decisor)(int A, int B))
{
    if(inicio<fim)
    {
        int meio=(inicio+fim)/2;