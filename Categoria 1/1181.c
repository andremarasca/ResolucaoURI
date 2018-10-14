#include <stdio.h>
int main (void)
{
    int i,j,c;
    double soma=0,n=0;
    char o;
    scanf("%d",&c);
    scanf(" %c",&o);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&n);
            if(i==c)
            {
                soma+=n;
            }
        }
    }
    if(o=='S') printf("%.1lf\n",soma);
    else printf("%.1lf\n",soma/12);
    return 0;
}