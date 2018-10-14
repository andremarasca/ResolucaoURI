#include <stdio.h>
int main(void)
{
    float x,media;
    int i,n=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&x);
        if(x>0)
        {
            media+=x;
            n++;
        }
    }
    media=media/n;
    printf("%d valores positivos\n%.1f\n",n,media);
}