#include <stdio.h>
#include <math.h>
int main (void)
{
    char numero[21];
    unsigned long long int N;
    for(scanf("%s", numero); numero[0] != '-'; scanf("%s", numero))
    {
        if(numero[0] == '0')
            printf("0\n");
        else
        {
            sscanf(numero, "%llu", &N);
            printf("%llu\n", N - 1);
        }
    }
    return 0;
}