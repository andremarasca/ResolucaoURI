#include <stdio.h>
int main (void)
{
    int i, n, e;
    char s[6];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &s);
        if(s[3] == '\0')
        {
            e = (s[0] != 'o');
            e += (s[1] != 'n');
            e += (s[2] != 'e');
            if(e > 1)
                printf("2\n");
            else
                printf("1\n");
        }
        else
            printf("3\n");
    }
    return 0;
}