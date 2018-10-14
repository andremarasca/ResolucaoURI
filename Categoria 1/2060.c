#include <stdio.h>
int main (void)
{
    int i, N, k;
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &k);
        if(k % 2 == 0)
            a++;
        if(k % 3 == 0)
            b++;
        if(k % 4 == 0)
            c++;
        if(k % 5 == 0)
            d++;
    }
    printf("%d Multiplo(s) de 2\n", a);
    printf("%d Multiplo(s) de 3\n", b);
    printf("%d Multiplo(s) de 4\n", c);
    printf("%d Multiplo(s) de 5\n", d);
    return 0;
}