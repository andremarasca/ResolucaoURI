#include <stdio.h>
#include <string.h>
int main (void)
{
    char T[501];
    scanf("%[^\n]s", T);
    if(strlen(T) <= 140)
        printf("TWEET\n");
    else
        printf("MUTE\n");
    return 0;
}