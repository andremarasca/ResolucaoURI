#include <stdio.h>
int main (void)
{
    int H, M;
    while(scanf("%d:%d", &H, &M) != EOF)
    {
        M = H * 60 + M;
        M = 8 * 60 - M;
        if(M > 60)
            M = 60;
        M = 60 - M;
        printf("Atraso maximo: %d\n", M);
    }
    return 0;
}