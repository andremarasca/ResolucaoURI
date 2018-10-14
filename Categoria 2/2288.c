#include <stdio.h>
int imagem[1000][1000];
int main()
{
    int iterator = 1;
    int i, j;
    int M, N;
    int X, Y;
    int Xp, Yp;
    scanf("%d %d",&M, &N);
    while(M || N)
    {
        printf("Teste %d\n",iterator);
        for(i = 0; i < M; i++)
        {
            for(j = 0; j < N; j++)
            {
                scanf("%d",&imagem[i][j]);
            }
        }
        Xp = Yp = 0;
        scanf("%d %d",&X, &Y);
        while(X || Y)
        {
            Xp += X;
            Yp += Y;
            scanf("%d %d",&X, &Y);
        }
        for(i = 0; i < M; i++)
        {
            for(j = 0; j < N; j++)