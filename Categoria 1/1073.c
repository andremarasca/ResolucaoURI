#include <stdio.h>
int main(void)
{
    int i,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(i%2==0) printf("%d^2 = %d\n",i,i*i);
    }
}