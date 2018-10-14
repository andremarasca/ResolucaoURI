#include <stdio.h>
int main (void)
{
    int N, i, x;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x);
        x = 2015 - x;
        if(x <= 0)
            printf("%d A.C.\n", -x + 1);
        else
            printf("%d D.C.\n", x);
    }
    return 0;
}