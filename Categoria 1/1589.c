#include <stdio.h>
int main (void)
{
    int A, i, R1, R2;
    scanf("%d", &A);
    for (i = 0; i < A; i++)
    {
        scanf("%d %d", &R1, &R2);
        printf("%d\n", R1 + R2);
    }
    return 0;
}