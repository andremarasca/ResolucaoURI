#include <stdio.h>
int main (void)
{
    int i, N, k;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &k);
        if (k % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}