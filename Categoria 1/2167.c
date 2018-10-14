#include <stdio.h>
#include <math.h>
int main (void)
{
    int N, i, x, m = -1, idx = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &x);
        if(m <= x)
            m = x;
        else if(idx == 0)
            idx = i;
    }
    printf("%d\n", idx);
    return 0;
}