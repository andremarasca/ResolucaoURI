#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int pilha, diamantes;
    char c;
    int i, r, N;
    scanf("%d\n", &N);
    for(i = 0; i < N; i++)
    {
        diamantes = 0;
        pilha = 0;
        for(r = scanf("%c", &c); r != EOF && c != '\n'; r = scanf("%c", &c))
        {
            if(c == '<')
                pilha++;
            else if(c == '>' && pilha != 0)
            {
                pilha--;
                diamantes++;
            }
        }
        printf("%d\n", diamantes);
    }
    return 0;
}