#include <stdio.h>
int main (void)
{
    int i,x,n;
    scanf("%d",&x);
    n=0;
    for(i=0;i<1000;i++)
    {
        printf("N[%d] = %d\n",i,n);
        n++;
        if(n==x) n=0;
    }
    return 0;
}