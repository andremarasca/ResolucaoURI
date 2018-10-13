#include <stdio.h>
int main (void)
{
    int i,j;
    float soma=0,n;
    char o;
    scanf("%c",&o);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&n);
            if(i>j && (i+j)>=12)
            {
                soma+=n;
            }
        }
    }
    if(o=='S') printf("%.1f\n",soma);
    else printf("%.1f\n",soma/30);
    return 0;
}