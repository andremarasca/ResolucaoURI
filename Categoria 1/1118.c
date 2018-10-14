#include <stdio.h>
int main (void)
{
    int i,a;
    do
    {
        float n=0,x;
        for(i=0;i<2;)
        {
            scanf("%f",&x);
            if(x<=10 && x >=0) i++,n+=x;
            else printf("nota invalida\n");
        }
        printf("media = %.2f\n",n/2);
        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&a);
        }while(a!=1 && a!=2);
    }while(a==1);
    return 0;
}