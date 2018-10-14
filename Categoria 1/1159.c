#include <stdio.h>
int main (void) {
    int i, x, soma;
    scanf ("%d", &x);
    while (x != 0) {
        soma = 0;
        if(x % 2 != 0) x++;
        for (i = 0; i < 5; i ++) {
            soma += x;
            x += 2;
        }
        printf("%d\n", soma);
        scanf ("%d", &x);
    }
    return 0;
}