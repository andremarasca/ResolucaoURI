#include <stdio.h>
int main (void)
{
    int N, x, i, imax;
    double max, q;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %lf", &x, &q);
        if(max < q)
        {
            max = q;
            imax = x;
        }
    }
    if(max < 8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", imax);
    return 0;
}