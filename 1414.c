#include <stdio.h>
int main ()
{
    int t, n, i, soma, x;
    char time[11];
    scanf("%d %d",&t,&n);
    while(t)
    {
        scanf("%d %d", &t, &n);
        soma = 0;
        for(i = 0; i < t; i++)
        {
            scanf("%s %d",time,&x);
            soma = soma + x;
        }
        soma = 3 * n - soma;
        printf("%d\n", soma);
        scanf("%d %d", &t, &n);
    }
    return 0;
}