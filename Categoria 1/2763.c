#include <stdio.h>
int main (void)
{
    int A, B, C, D;
    scanf("%d.%d.%d-%d", &A, &B, &C, &D);
    printf("%03d\n%03d\n%03d\n%02d\n", A, B, C, D);
    return 0;
}