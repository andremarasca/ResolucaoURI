#include <stdio.h>
#define PI 3.14159
int main (void)
{
    double r;
    scanf("%lf", &r);
    printf("A=%.4lf\n", (double)PI*r*r);
    return 0;
}