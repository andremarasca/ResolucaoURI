#include <stdio.h>
#include <string.h>
#define MIN(x,y) (((x) < (y)) ? (x) : (y))
int main ()
{
    int i, N, M, pares;
    int esquerda[31];
    int direita[31];
    char L;
    while(scanf("%d", &N) != EOF)
    {
        memset(esquerda, 0, sizeof(esquerda));
        memset(direita, 0, sizeof(direita));
        for(i = 0; i < N; i++)
        {
            scanf("%d %c",&M, &L);
            if(L == 'E')
                esquerda[M - 30]++;
            else
                direita[M - 30]++;
        }
        pares = 0;
        for(i = 0; i <= 30; i++)
        {
            pares += MIN(esquerda[i],direita[i]);
        }
        printf("%d\n",pares);
    }
    return 0;
}