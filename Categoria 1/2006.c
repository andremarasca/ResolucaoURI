#include <stdio.h>
int main (void)
{
    int i, N, a, c = 0;
    scanf("%d", &N);
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a);
        if(N == a)
            c++;
    }
    printf("%d\n", c);
    return 0;
}