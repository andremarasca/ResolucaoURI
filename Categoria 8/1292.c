#include <stdio.h>
int main (void)
{
    double F;
    while(scanf("%lf", &F) != EOF)
        printf("%.10lf\n",1.067395681711182*F);
    return 0;
}