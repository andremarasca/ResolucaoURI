#include <stdio.h>
#include <math.h>
int main (void)
{
    int N, i, S, B, A, S1, B1, A1;
    int TS = 0, TB = 0, TA = 0;
    int TS1 = 0, TB1 = 0, TA1 = 0;
    char nome[100];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", nome);
        scanf("%d %d %d", &S, &B, &A);
        scanf("%d %d %d", &S1, &B1, &A1);
        TS += S; TB += B; TA += A;
        TS1 += S1; TB1 += B1; TA1 += A1;
    }
    printf("Pontos de Saque: %.2lf %%.\n", 100.0 * TS1 / (double) TS);
    printf("Pontos de Bloqueio: %.2lf %%.\n", 100.0 * TB1 / (double) TB);
    printf("Pontos de Ataque: %.2lf %%.\n", 100.0 * TA1 / (double) TA);
    return 0;
}