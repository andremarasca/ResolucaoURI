#include <stdio.h>
#include <math.h>
int main (void)
{
    int N;
    scanf("%d", &N);
    printf("%.1lf\n", (pow((1+sqrt(5))/2, N) - pow((1-sqrt(5))/2, N)) / sqrt(5));
    return 0;
}