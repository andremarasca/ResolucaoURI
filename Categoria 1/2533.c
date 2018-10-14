#include <stdio.h>
int main (void)
{
    int N, i, a, b;
    double num, den;
    while(scanf("%d", &N) != EOF)
    {
        for(i = num = den = 0; i < N; i++){
            scanf("%d %d", &a, &b);
            num += a * b;
            den += b;
        }
        num = num / (den * 100);
        printf("%.4lf\n", num);
    }
    return 0;
}