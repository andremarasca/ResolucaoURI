#include <stdio.h>
#include <math.h>
int main (void)
{
    double a,b,c,delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta= b*b -4*a*c;
    if(a==0 || delta<0) printf("Impossivel calcular\n");
    else
    {
        delta=sqrt(delta);
        printf("R1 = %.5lf\n",(-b+delta)/(2*a));
        printf("R2 = %.5lf\n",(-b-delta)/(2*a));
    }
    return 0;
}