#include <stdio.h>
int main (void) {
    int i, j, n, x, y, soma;
    scanf ("%d", &n);
    for(i = 0; i < n; i++) {
        scanf ("%d %d", &x, &y);
        soma = 0;
        if (x % 2 == 0) x++;
        for (j = 0; j < y; j++) {
            soma += x;
            x += 2;
        }
        printf ("%d\n", soma);
    }
    return 0;
}