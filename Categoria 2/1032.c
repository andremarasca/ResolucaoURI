#include <stdio.h>
#include <math.h>
int primos[3502];
void inicializaprimos () {
    int i, j, k, raiz, l = 0;
    for(i = 2; l < 3502; i++) {
        raiz = sqrt(i);
        k = 0;
        for(j = 2; j <= raiz && k != 1; j++)
            if(i % j == 0) k = 1;
        if(k == 0) {
            primos[l++] = i;
        }
    }
}
int josephus(int n, int k){
    if (n == 1)
        return 1;
    return (josephus(n - 1,k + 1) + primos[k]-1) % n + 1;
}
int main (void) {
    int n;
    inicializaprimos();
    scanf("%d", &n);
    while (n) {
        printf("%d\n",josephus(n, 0));
        scanf("%d", &n);
    }
    return 0;