#include <stdio.h>
int main(void)
{
    int menor, A, C, vet[10000];
    int s, i;
    while(scanf("%d%d",&A,&C) && (A||C))
    {
        s = 0;
        for(i = 0; i < C; i++)
        {
            scanf("%d", &vet[i]);
            if(i && vet[i] == vet[i-1]) i--, C--;
        }
        vet[C] = A;
        menor = vet[0];
        for(i = 1; i < C; i++) {
            if(vet[i] > vet[i-1] && vet[i] > vet[i+1])
            {
                s += vet[i] - menor;
                menor = A;
            }
            else if(vet[i] < menor) menor = vet[i];
        }
        printf("%d\n",s+A-menor);
    }
    return 0;
}