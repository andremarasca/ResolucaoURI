#include <stdio.h>
int main (void)
{
    int i,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    return 0;
}