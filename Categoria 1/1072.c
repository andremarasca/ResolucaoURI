#include <stdio.h>
int main(void)
{
    int i,x,v,z=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&v);
        if(v>=10 && v<=20) z++;
    }
    printf("%d in\n",z);
    printf("%d out\n",x-z);
}