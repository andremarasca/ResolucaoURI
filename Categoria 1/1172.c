#include <stdio.h>
int main(void)
{
    int i,x;
    for(i=0;i<10;i++)
    {
        scanf("%d",&x);
        if(x<=0) printf("X[%d] = 1\n",i);
        else printf("X[%d] = %d\n",i,x);
    }
}