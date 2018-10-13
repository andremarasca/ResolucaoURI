#include <stdio.h>
int main (void)
{
    int i, N, p, s;
    char A[101], B[101], Ae[6], Be[6];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s %s %s %s", A, Ae, B, Be);
        scanf("%d %d", &p, &s);
        p = (p + s) % 2;
        if(p)
        {
            if(Ae[0] == 'I')
                printf("%s\n", A);
            else
                printf("%s\n", B);
        }
        else
        {
            if(Ae[0] == 'P')
                printf("%s\n", A);
            else
                printf("%s\n", B);
        }
    }
}