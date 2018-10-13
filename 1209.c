#include <stdio.h>
#include <string.h>
#define false 0
#define true 1
int pessoas, relacoes, min_amigos, p1, p2;
int g[1001][1001];
int amigos[1001];
inline void remover(int i)
{
    int j;
    amigos[i] = 0;
    for (j = 1; j <= pessoas; j++)
        if (g[i][j])
        {
            g[i][j] = g[j][i] = 0;
            amigos[j]--;
            if (amigos[j] > 0 && amigos[j] < min_amigos)
                remover(j);
        }
}
int main(void)
{
    int i;
    while (scanf("%d %d %d", &pessoas, &relacoes, &min_amigos) != EOF)
    {
        if (min_amigos == 0)
        {
            for (i = 0; i < relacoes; i++)
                scanf("%d %d", &p1, &p2);
            putchar('1');