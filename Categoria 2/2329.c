#include <stdio.h>
int main ()
{
    int PAO[10000];
    int i, N, K, x, esquerda = 0, meio = 5000, direita = 10000;
    scanf("%d %d", &N, &K);
    for(i = 0; i < K; i++)
        scanf("%d", &PAO[i]);
    while(esquerda < direita - 1)
    {
        x = 0;
        meio = (direita + esquerda)/2;
        for(i = 0; i < K; i++)
            x += (int) PAO[i]/meio;
        if(x < N) direita = meio;
        else esquerda = meio;
    }
    printf("%d\n", esquerda);
    return 0;
}