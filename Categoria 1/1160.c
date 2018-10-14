#include <stdio.h>
#include <math.h>
int main (void)
{
    int i,n,anos;
    double c1,c2;
    long int p1,p2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld %lf %lf",&p1,&p2,&c1,&c2);
        anos = 0;
        while(p1<=p2 && anos <= 100)
        {
            p1=p1 + p1*c1/100;
            p2=p2 + p2*c2/100;
            anos++;
        }
        if(anos > 100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n",anos);
    }
}