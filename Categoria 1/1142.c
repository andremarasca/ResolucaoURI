#include <stdio.h>
int main (void)
{
    int i,x;
    scanf("%d",&x);
    for(i=1;i<=(4*x);i++)
    {
        if(i%4!=0) printf("%d ",i);
        else printf("PUM\n");
    }
    return 0;
}