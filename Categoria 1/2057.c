#include <stdio.h>
int main (void)
{
    int S, T, F;
    scanf("%d %d %d", &S, &T, &F);
    S = (S + T + F + 24) % 24;
    printf("%d\n", S);
    return 0;
}