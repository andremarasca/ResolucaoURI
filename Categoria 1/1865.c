#include <stdio.h>
#include <string.h>
int main (void)
{
    int i, N, lixo;
    char nome[50];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s %d", nome, &lixo);
        if(strcmp(nome, "Thor") == 0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}