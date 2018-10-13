#include <stdio.h>
void imprime(int vet[],int fim,int par)
{
    int i;
    for(i=0;i<fim;i++)
    {
        if(par) printf("par[%d] = %d\n",i,vet[i]);
        else printf("impar[%d] = %d\n",i,vet[i]);
    }
}
int main (void)
{
    int i,par[5],impar[5],Fpar,Fimpar,x;
    Fpar=Fimpar=0;
    for(i=0;i<15;i++)
    {
        scanf("%d",&x);
        if(x%2==0) par[Fpar++]=x;
        else impar[Fimpar++]=x;
        if(Fpar==5) imprime(par,Fpar,1),Fpar=0;
        if(Fimpar==5) imprime(impar,Fimpar,0),Fimpar=0;
    }
    imprime(impar,Fimpar,0);
    imprime(par,Fpar,1);
    return 0;
}