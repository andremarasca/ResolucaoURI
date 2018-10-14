#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int N, x, q, i;
    double t = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &q);
        t += q * (x - 999.5);
    }
    printf("%.2lf\n", t);
    return 0;
}