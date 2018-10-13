#include <stdio.h>
int main (void)
{
    int a1,a2,b1,b2;
    float A,B;
    scanf("%d %d %f %d %d %f",&a1,&a2,&A,&b1,&b2,&B);
    A=a2*A+b2*B;
    printf("VALOR A PAGAR: R$ %.2f\n",A);
    return 0;
}