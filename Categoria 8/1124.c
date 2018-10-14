#include <stdio.h>
#include <math.h>
int main (void)
{
    int L, C, R1, R2;
    scanf("%d %d %d %d", &L, &C, &R1, &R2);
    while(L || C || R1 || R2)
    {
        if((L>= 2*R1) && (L>= 2*R2) && (C>= 2*R1) && (C>= 2*R2) && sqrt((L-R1-R2)*(L-R1-R2)+(C-R1-R2)*     
        else printf("N\n");
        scanf("%d %d %d %d", &L, &C, &R1, &R2);
    }
    return 0;
}