#include <stdio.h>
void reajuste(float x,int y)
{
    float reajuste = x*y/100;
    printf("Novo salario: %.2f\n",x+reajuste);
    printf("Reajuste ganho: %.2f\n",reajuste);
    printf("Em percentual: %d %%\n",y);
}
int main (void)
{
    float x;
    scanf("%f",&x);
    if(x<=400) reajuste(x,15);
    else if(x<=800) reajuste(x,12);
    else if(x<=1200) reajuste(x,10);
    else if(x<=2000) reajuste(x,7);
    else reajuste(x,4);
    return 0;
}