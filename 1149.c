#include <stdio.h>
int main (void) {
    int i, A, N, soma;
    scanf("%d %d", &A, &N);
    while (N <= 0) scanf("%d", &N);
    soma = N * (2 * A + N - 1) / 2;
    printf("%d\n",soma);
    return 0;
}