#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i, P, N, v[100], flag = 1;
    scanf("%d %d", &P, &N);
    for (i = 0; i < N; i++)
        scanf("%d", &v[i]);
    for (i = 1; flag && i < N; i++)
        if(abs(v[i] - v[i - 1]) > P)
            flag = 0;
    if(flag)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}