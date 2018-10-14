#include <stdio.h>
int main (void) {
    int i, j, n, soma, vet[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char num[1001];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", &num);
        soma = 0;
        for(j = 0; num[j] != '\0'; j++) {
            soma += vet[num[j] - '0'];
        }
        printf("%d leds\n", soma);
    }
    return 0;
}