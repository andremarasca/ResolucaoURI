#include <stdio.h>
int main (void)
{
    int a, i, c, n, p, res = 0, tam;
    scanf("%d %d", &c, &n);
    int v[n];
    c = c * 2;
    p = c / n;
    scanf("%d", &v[0]);
    for(i = 1; i < n; i++)
    {
        scanf("%d", &v[i]);
        v[i] -= v[0];
        v[i] *= 2;
    }
    for (a = 1; !res && a <= p; a += 2)
    {
        res = 1;
        tam = a + p;
        for(i = 1; i < n; i++)
        {
            if(v[i] >= tam || v[i] <= tam - p)
                res = 0;
            tam += p;
        }
    }
    if(res)
        printf("S\n");
    else
        printf("N\n");