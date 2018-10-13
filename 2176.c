#include <stdio.h>
#include <math.h>
int main (void)
{
    char frase[101];
    scanf("%s", frase);
    int i, q = 0;
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == '1')
            q++;
    }
    if(q % 2 == 0)
        printf("%s0\n", frase);
    else
        printf("%s1\n", frase);
    return 0;
}