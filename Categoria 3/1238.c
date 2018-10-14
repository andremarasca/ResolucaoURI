#include <stdio.h>
int main (void)
{
    int i, N, u, v;
    char a[100], b[100];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s %s", a, b);
        u = 0;
        v = 0;
        while(a[u] != '\0' && b[v] != '\0')
            printf("%c%c", a[u++], b[v++]);
        while(a[u] != '\0')
            printf("%c", a[u++]);
        while(b[v] != '\0')
            printf("%c", b[v++]);
        printf("\n");
    }
    return 0;
}