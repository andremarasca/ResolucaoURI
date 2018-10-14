#include <stdio.h>
char a[10000], b[10000];
int main (void)
{
    int i, j, n, o, s;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %s", &a, &b);
        o = 0;
        for (j = 0; a[j] != '\0'; j++)
        {
            s = b[j] - a[j];
            if (s >= 0)
                o += s;
            else
                o += s + 26;
        }
        printf("%d\n",o);
    }
    return 0;
}