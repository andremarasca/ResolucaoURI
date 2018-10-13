#include <stdio.h>
int main (void)
{
    int A;
    while(scanf("%d", &A) > 0)
    {
        if(A > 0)
            printf("vai ter duas!\n");
        else
            printf("vai ter copa!\n");
    }
    return 0;
}