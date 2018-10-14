#include <stdio.h>
int main(void)
{
    long long int anterior=1,atual=0,proximo=1,vet[61];
    int i,quant=0,n;
    scanf("%d",&quant);
    for(i=0;i<=60;i++)
    {
        vet[i]=atual;
        proximo=atual+anterior;
        anterior=atual;
        atual=proximo;
    }
    for(i=0;i<quant;i++)
    {
        scanf("%d",&n);
        printf("Fib(%d) = %lld\n",n,vet[n]);
    }
}