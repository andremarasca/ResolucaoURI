#include <stdio.h>
int main (void)
{
    int i, N, x, min, imin = 1;
    scanf("%d", &N);
    scanf("%d", &min);
    for (i = 2; i <= N; i++)
    {
        scanf("%d", &x);
        if(min > x)
        {
            min = x;
            imin = i;
        }
    }
    printf("%d\n", imin);
}