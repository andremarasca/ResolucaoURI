#include <stdio.h>
int main (void) {
    int i, n, k, picos, vet[10000];
    scanf("%d", &n);
    while(n) {
        picos = 0;
        scanf("%d", &vet[0]);
        k = n;
        for(i = 1; i < k; i++) {
            scanf("%d", &vet[i]);
            if(vet[i] == vet[i - 1]) i--, k--;
        }
        if(vet[0] == vet[k - 1]) k--;
        for(i = 0; i < k; i++) {
            if(vet[(i + 1) % k] > vet[i] && vet[(i + 1) % k] > vet[(i + 2) % k]) picos++;
            else if (vet[(i + 1) % k] < vet[i] && vet[(i + 1) % k] < vet[(i + 2) % k]) picos++;
        }
        printf("%d\n", picos);
        scanf("%d", &n);
    }
    return 0;
}