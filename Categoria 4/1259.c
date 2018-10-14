#include <stdio.h>
void imprimir (int v[], int N)
{
    int i;
    for (i = 0; i < N; i++)
        printf("%d\n", v[i]);
}
int par_impar(int A, int B)
{
    if (A % 2 == 0)
        return 1;
    return 0;
}
int crescente(int A, int B)
{
    if (A <= B)
        return 1;
    return 0;
}
int decrescente(int A, int B)
{
    if (A >= B)
        return 1;
    return 0;
}
void Merge (int vet[],int inicio,int meio,int fim, int (*meu_decisor)(int A, int B))
{
    int w[fim-inicio+1];