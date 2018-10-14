#include <stdio.h>
int main(void)
{
    int i,x,n=0;
    scanf("%d",&x);
    for(i=x;n<6;i++) if(i%2!=0) n++,printf("%d\n",i);
}