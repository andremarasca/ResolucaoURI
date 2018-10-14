#include <stdio.h>
int main (void)
{
    int N, i, H, M, O;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %d %d", &H, &M, &O);
        if(O)
            printf("%02d:%02d - A porta abriu!\n", H, M);
        else
            printf("%02d:%02d - A porta fechou!\n", H, M);
    }
    return 0;
}