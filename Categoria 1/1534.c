#include <stdio.h>
int main (void)
{
    int i, j;
    int N;
    while(scanf("%d", &N) > 0)
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if ((i + j) == N - 1)
                    printf("2");
                else if(i == j)
                    printf("1");
                else
                    printf("3");
            }
            printf("\n");
        }
    }
    return 0;
}