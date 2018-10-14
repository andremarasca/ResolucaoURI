#include <stdio.h>
 int main (void)
{
    int i,j;
    double soma=0,n;
    char o;
     scanf("%c",&o);
     for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&n);
            if(i<j && (i+j)<=10)
            {
                soma+=n;
            }
        }
    }
     if(o=='S') printf("%.1lf\n",soma);
    else printf("%.1lf\n",soma/30);
    return 0;
}