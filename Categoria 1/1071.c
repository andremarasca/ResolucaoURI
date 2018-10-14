#include <stdio.h>
int main(void)
{
    int i,x,n=0,z;
    scanf("%d %d",&x,&z);
    if(x>z)
    {
        i=x;
        x=z;
        z=i;
    }
    for(i=x+1;i<z;i++) if(i%2!=0) n=n+i;
    printf("%d\n",n);
}