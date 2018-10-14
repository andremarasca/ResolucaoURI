#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int v[231];
    int c, NC, N, i, j, u, x;
    scanf("%d", &NC);
    for(c = 0; c < NC; c++)
    {
        scanf("%d", &N);
        for(i = 20; i <= 230; i++)
            v[i] = 0;
        for(i = 0; i < N; i++){
            scanf("%d", &x);
            v[x]++;
        }
        u = 1;
        for(i = 20; i <= 230; i++)
        {
            for(j = 0; j < v[i]; j++)
            {
                if (u)
                    printf("%d", i), u = !u;
                else
                    printf(" %d", i);
            }
        }
        printf("\n");
    }
    return 0;
}