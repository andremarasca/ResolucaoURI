#include <stdio.h>
#include <math.h>
int main (void)
{
    int A, B, C;
    int area, areaT, arestaT;
    scanf("%d", &A);
    while(A)
    {
        scanf("%d", &B);
        scanf("%d", &C);
        area = A * B;
        areaT = (area * 100) / C;
        arestaT = (int) sqrt(areaT);
        printf("%d\n", arestaT);
        scanf("%d", &A);
    }
    return 0;
}