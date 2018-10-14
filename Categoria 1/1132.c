#include <stdio.h>
int main (void)
{
    long int i,a,b,soma=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        i=a;
        a=b;
        b=i;
    }
    for(i=a;i<=b;i++)
    {
        if(i%13!=0) soma+=i;
    }
    printf("%ld\n",soma);
    return 0;
}