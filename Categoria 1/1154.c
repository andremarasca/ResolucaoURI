#include <stdio.h>
int main (void) {
    int i, idade, media = 0, quant = 0;
    scanf("%d", &idade);
    while(idade > 0) {
        media += idade;
        quant++;
        scanf("%d", &idade);
    }
    printf("%.2f\n",(float) media / quant);
    return 0;
}