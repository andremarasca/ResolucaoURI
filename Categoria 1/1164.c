#include <stdio.h>
int main (void)
{
    int i,n,a,x,s;
    int vet[13]={6,28,120,496,2016,8128,32640,130816,523776,2096128,8386560,33550336,134209536};
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d",&x);
        s=0;
        for(i=0;i<13;i++) if(vet[i]==x) s=1;
        if(s) printf("%d eh perfeito\n",x);
        else printf("%d nao eh perfeito\n",x);
    }
}