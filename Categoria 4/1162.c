#include <stdio.h>
int BubbleSort(int v[], int N)
{
    int qtd = 0;
    int i, j, t, f = 1;
    for(i = 0; i < N && f; i++)
    {
        f = 0;
        for (j = 0; j < N - 1 - i; j++)
        {
            if (v[j] > v[j+1])
            {
                t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
                f = 1;
                qtd++;
            }
        }
    }
    return qtd;
}
int main (void)
{
    int v[50];
    int i, j, N, L, qtd;
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &L);
        for (j = 0; j < L; j++)