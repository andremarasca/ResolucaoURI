#include <stdio.h>
#include <string.h>
int main (void)
{
    char p[10001];
    int N, i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", p);
        printf("%.2lf\n", strlen(p) / 100.0);
    }
    return 0;
}