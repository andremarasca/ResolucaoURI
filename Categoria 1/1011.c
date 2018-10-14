#include <stdio.h>
int main (void)
{
    double R;
    scanf("%lf",&R);
    R=R*R*R*3.14159*4;
    printf("VOLUME = %.3lf\n",R/3);
    return 0;
}