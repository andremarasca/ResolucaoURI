#include <stdio.h>
int main (void)
{
    int i;
    float n=0,x;
    for(i=0;i<2;)
    {
        scanf("%f",&x);
        if(x<=10 && x >=0) i++,n+=x;
        else printf("nota invalida\n");
    }
    printf("media = %.2f\n",n/2);
    return 0;
}