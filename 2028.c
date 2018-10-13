#include <stdio.h>
#include <math.h>
int main (void)
{
    int N, c, x, i, j;
    for(c = 1; scanf("%d", &N) != EOF; c++)
    {
        if(N == 0)
            printf("Caso %d: %d numero\n", c, (N*N + N)/2 + 1);
        else
            printf("Caso %d: %d numeros\n", c, (N*N + N)/2 + 1);
        printf("0");
        for (i = 1; i <= N; i++)
        {
            for (j = 0; j < i; j++)
            {
                printf(" %d", i);
            }
        }
        printf("\n\n");
    }
    return 0;
}