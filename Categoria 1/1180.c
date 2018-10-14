#include <stdio.h>
int main (void)
{
    int i,N,x,menor,posicao=0;
    scanf("%d",&N);
    scanf("%d",&x);
    menor=x;
    for(i=1;i<N;i++)
    {
        scanf("%d",&x);
        if(menor>x) menor=x,posicao=i;
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",posicao);
    return 0;
}