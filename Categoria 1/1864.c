#include <stdio.h>
int main (void)
{
    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int i, N;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        printf("%c", frase[i]);
    }
    printf("\n");
}