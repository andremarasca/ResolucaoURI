#include <stdio.h>
int main (void)
{
    int i,n,x,C=0,R=0,S=0,total=0;
    char tipo;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c",&x,&tipo);
        total+=x;
        if(tipo=='C') C+=x;
        else if(tipo=='R') R+=x;
        else if(tipo=='S') S+=x;
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2lf %%\n",100*(double)C/total);
    printf("Percentual de ratos: %.2lf %%\n",100*(double)R/total);
    printf("Percentual de sapos: %.2lf %%\n",100*(double)S/total);
    return 0;
}