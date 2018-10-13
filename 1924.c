#include <stdio.h>
int main (void)
{
    int i, N;
    char buffer[50];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf(" %[^\n]s", buffer);
    printf("Ciencia da Computacao\n");
    return 0;
}