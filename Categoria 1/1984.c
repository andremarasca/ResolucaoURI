#include <stdio.h>
int main (void)
{
    char v[11];
    int i;
    scanf("%s", v);
    for (i = 0; v[i] != '\0'; i++);
    for(--i; i >= 0; --i)
        printf("%c", v[i]);
    printf("\n");
    return 0;
}