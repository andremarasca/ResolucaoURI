#include <stdio.h>
int main (void) {
    int i,x,chave;
    char num[1000000];
    scanf("%d %s", &x, num);
    while (x != 0 || !(num[0] == '0' && num[1] == '\0')) {
        chave = 0;
        for (i = 0; num[i] != '\0'; i++) {
            if(num[i] != (x + '0')) {
                if(num[i] == '0') {
                    if(chave) printf("0");
                }
                else {
                    chave = 1;
                    printf("%c",num[i]);
                }
            }
        }
        if(!chave) printf("0");
        printf("\n");
        scanf("%d %s", &x, num);
    }
    return 0;
}