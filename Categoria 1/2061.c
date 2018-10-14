#include <stdio.h>
int main (void)
{
    char o[7];
    int i, N, M;
    scanf("%d %d", &N, &M);
    for (i = 0; i < M; i++)
    {
        scanf("%s", o);
        if(o[0] == 'f')
            N++;
        else
            N--;
    }
    printf("%d\n", N);
    return 0;
}