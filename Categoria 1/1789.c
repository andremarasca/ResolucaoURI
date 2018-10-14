#include <stdio.h>
int main (void)
{
    int i, N, k, max;
    while(scanf("%d", &N) > 0)
    {
        max = 0;
        for (i = 0; i < N; i++)
        {
            scanf("%d", &k);
            if(max < k)
                max = k;
        }
        if (max < 10)
            printf("1\n");
        else if (max < 20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}