#include <stdio.h>
int main(void)
{
    int x,i,n=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x);
        if(x%2==0) n++;
    }
    printf("%d valores pares\n",n);
}