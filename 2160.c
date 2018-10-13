#include <stdio.h>
#include <string.h>
int main (void)
{
    char T[501];
    scanf("%[^\n]s", T);
    if(strlen(T) <= 80)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}