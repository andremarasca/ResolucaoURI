#include <stdio.h>
int main (void)
{
    int x,q,w,e,r,t,y;
    scanf("%d",&x);
    printf("%d\n",x);
    q=x/100;
    x=x-q*100;
    w=x/50;
    x=x-w*50;
    e=x/20;
    x=x-e*20;
    r=x/10;
    x=x-r*10;
    t=x/5;
    x=x-t*5;
    y=x/2;
    x=x-y*2;
    printf("%d nota(s) de R$ 100,00\n",q);
    printf("%d nota(s) de R$ 50,00\n",w);
    printf("%d nota(s) de R$ 20,00\n",e);
    printf("%d nota(s) de R$ 10,00\n",r);
    printf("%d nota(s) de R$ 5,00\n",t);
    printf("%d nota(s) de R$ 2,00\n",y);
    printf("%d nota(s) de R$ 1,00\n",x);
    return 0;
}