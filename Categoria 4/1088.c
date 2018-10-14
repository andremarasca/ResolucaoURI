#include <stdio.h>
int qtd;
void Merge (int vet[],int inicio,int meio,int fim)
{
    int w[fim-inicio+1];
    int i = inicio,j = meio + 1,k=0;
    while(i <= meio && j <= fim)
    {
        if(vet[i] < vet[j])
            w[k++] = vet[i++];
        else
        {
            w[k++]  = vet[j++];
            qtd += meio - i + 1;
        }
    }
    while(i <= meio)
        w[k++] = vet[i++];
    while(j <= fim)
        w[k++] = vet[j++];
    for(i=0; i<k; i++)
        vet[i+inicio] = w[i];
}
void MergeSort (int vet[],int inicio,int fim)
{
    if(inicio<fim)
    {
        int meio=(inicio+fim)/2;
        MergeSort(vet,inicio,meio);
        MergeSort(vet,meio+1,fim);