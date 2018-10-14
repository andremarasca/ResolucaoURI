#include <stdio.h>
int main (void)
{
    int A, i, R1, R2;
    scanf("%d", &A);
    for (i = 1; i <= A; i++)
    {
        if(i < A)
            printf("Ho ");
        else
            printf("Ho!\n");
    }
    return 0;
}