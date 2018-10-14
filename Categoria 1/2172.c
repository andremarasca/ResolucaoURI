#include <stdio.h>
int main(void)
{
    int X, M;
    scanf("%d %d", &X, &M);
    while(!(X == 0 && M == 0))
    {
        printf("%ld\n", X * M);
        scanf("%d %d", &X, &M);
    }
    return 0;
}