#include <stdio.h>
#include <math.h>
int main (void) {
    int i, x, z, n = 0, soma = 0;
    double y;
    scanf("%d %d", &x, &z);
    while (z <= x) scanf("%d", &z);
    do {
        soma += x + n;
        n++;
    } while (soma < z);
    printf("%d\n", n);
    return 0;
}