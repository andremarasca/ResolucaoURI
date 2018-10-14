#include <stdio.h>
int main (void)
{
    float a,b,c,d;
    scanf("%f %f %f",&a,&b,&c);
    d=(b-c);
    if(d<0) d=-d;
    if(d<a && a<(b+c)) printf("Perimetro = %.1f\n",(float)(a+b+c));
    else
    {
        printf("Area = %.1f\n",(float)(a+b)*c/2);
    }
    return 0;
}