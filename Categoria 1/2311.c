#include <stdio.h>
#define pico 1
#define vale 0
int main (void)
{
    int N, i, j;
    double x, d, menor, maior, soma;
    char nome[100];
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%s", nome);
        scanf("%lf", &d);
        scanf("%lf", &x);
        soma = maior = menor = x;
        for(j = 1; j < 7; j++){
            scanf("%lf", &x);
            soma += x;
            if(maior < x)
                maior = x;
            if(menor > x)
                menor = x;
        }
        soma -= maior + menor;
        soma *= d;
        printf("%s %.2lf\n", nome, soma);
    }
    return 0;
}