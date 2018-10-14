#include <stdio.h>
int main(void)
{
    char frase[27];
    int N, i, x;
    while(scanf("%s", frase) != EOF)
    {
        scanf("%d", &N);
        for(i = 0; i < N; i++){
            scanf("%d", &x);
            printf("%c", frase[x-1]);
        }
        printf("\n");
    }
    return 0;
}