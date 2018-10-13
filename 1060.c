#include <stdio.h>
int main(void)
{
    float x;
    int i,n=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&x);
        if(x>0) n++;
    }
    printf("%d valores positivos\n",n);
}