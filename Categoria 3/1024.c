#include <stdio.h>
void inverter (char vet[], int tam) {
    int i, aux;
    for (i = 0; i < tam / 2; i++) {
        aux = vet[i];
        vet[i] = vet[tam-i-1];
        vet[tam-i-1] = aux;
    }
}
int main (void) {
    int i, j, x, tam;
    char vet[1000];
    scanf ("%d", &x);
    for (i = 0; i < x; i++) {
        scanf(" %[^\n]s", vet);
        for(tam = 0; vet[tam] != '\0'; tam++);
        for(j = 0; j < tam; j++){
            if((vet[j] >= 'A' && vet[j] <= 'Z') || (vet[j] >= 'a' && vet[j] <= 'z')) {
                vet[j] += 3;
            }
        }
        inverter (vet, tam);
        for(j = (int) (tam / 2); j < tam ; j++) {
            vet[j]--;
        }
        printf("%s\n", vet);
    }