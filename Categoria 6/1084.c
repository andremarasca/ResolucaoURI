#include <stdio.h>
#include <stdlib.h>
int BUSCABINARIA (char x, char *vetor, int primeiro, int ultimo)
{
    int meio;
    while (primeiro <= ultimo)
    {
        meio = (primeiro+ultimo)/2;
        if (vetor[meio] < x) ultimo = meio-1;
        else primeiro = meio+1;
    }
    return primeiro;
}
int main (void)
{
    int N, D, Indiceultimo;
    int i, j, k, p;
    char *N1, *N2;
    while (scanf ("%d%d", &N, &D)!=EOF && (N > 0 || D > 0))
    {
        N1 = (char *) malloc ((N+1)*sizeof (char));
        scanf ("%s", N1);
        Indiceultimo = N-D;
        N2 = (char *) calloc ((Indiceultimo+1),sizeof (char));
        N2[0] = N1[0];
        j = 0;
        for (i = 1; i < N; i++)
        {
            if (i <= D) p = BUSCABINARIA (N1[i], N2, 0, j);
            else p = BUSCABINARIA (N1[i], N2, i-D, j);
            if (p < Indiceultimo)