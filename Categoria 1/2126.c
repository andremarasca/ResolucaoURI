#include <stdio.h>
int main (void)
{
    char sub[11], frase[33];
    int i, u, v, qtd, idx, lens, lenf;
    for(i = 1; scanf("%s %s", sub, frase) != EOF; i++)
    {
        printf("Caso #%d:\n", i);
        qtd = 0; idx = 0;
        for(lens = 0; sub[lens] != '\0'; lens++);
        for(lenf = 0; frase[lenf] != '\0'; lenf++);
        for(u = 0; u < lenf; u++){
            for(v = 0; v < lens  && (u + v) < lenf; v++){
                if(frase[u+v] != sub[v])
                    break;
            }
            if(sub[v] == '\0'){
                idx = u;
                qtd++;
            }
        }
        if(qtd){
            printf("Qtd.Subsequencias: %d\n", qtd);
            printf("Pos: %d\n\n", idx + 1);
        }
        else {
            printf("Nao existe subsequencia\n\n");
        }
    }
    return 0;
}