#include <stdio.h>
int main (void)
{
    int q,w,e,r,t,y,u;
    double x;
    scanf("%lf", &x);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",(int)(x/100));
    x=x-100*(int)(x/100);
    printf("%d nota(s) de R$ 50.00\n",(int)(x/50));
    x=x-50*(int)(x/50);
    printf("%d nota(s) de R$ 20.00\n",(int)(x/20));
    x=x-20*(int)(x/20);
    printf("%d nota(s) de R$ 10.00\n",(int)(x/10));
    x=x-10*(int)(x/10);
    printf("%d nota(s) de R$ 5.00\n",(int)(x/5));
    x=x-5*(int)(x/5);
    printf("%d nota(s) de R$ 2.00\n",(int)(x/2));
    x=x-2*(int)(x/2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",(int)(x));
    x=x-(int)(x);
    x=x*100;
    printf("%d moeda(s) de R$ 0.50\n",(int)(x/50));
    x=x-50*(int)(x/50);
    printf("%d moeda(s) de R$ 0.25\n",(int)(x/25));
    x=x-25*(int)(x/25);
    printf("%d moeda(s) de R$ 0.10\n",(int)(x/10));
    x=x-10*(int)(x/10);
    printf("%d moeda(s) de R$ 0.05\n",(int)(x/5));
    x=x-5*(int)(x/5);
    printf("%d moeda(s) de R$ 0.01\n",(int)(x));